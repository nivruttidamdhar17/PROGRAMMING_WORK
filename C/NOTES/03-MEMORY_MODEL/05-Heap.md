# **Topic 5: The Heap (Dynamic Memory)**

This is the most complex area of C memory. While the Stack is managed automatically by the CPU (hardware), the Heap is managed manually by a **software library** (the Allocator, e.g., `malloc` in glibc).

To understand the Heap deeply, you must stop thinking of it as a "magic bucket" and start thinking of it as a **Warehouse Manager** using a ledger book.

---

### **1. The Core Mechanic: The "Allocator" vs. The OS**

A common misconception is that `malloc(10)` calls the OS every time. It does **not**. System calls are slow.

**The Strategy:**

1. **Bulk Buying:** When your program starts, the Allocator asks the OS for a large chunk of RAM (e.g., 132 KB) using `sbrk()`.
2. **Sub-letting:** When you call `malloc(10)`, the Allocator slices off 10 bytes from that big chunk and gives it to you.
3. **Recycling:** When you call `free()`, the Allocator does **not** return the RAM to the OS. It marks that slice as "Available" in its own ledger so the next `malloc` can reuse it.

---

### **2. Deep Dive: The Hidden "Header" (Metadata)**

How does `free(ptr)` know how many bytes to release? You only pass the pointer, not the size!

**The Secret:**
Every time you allocate memory, the allocator adds a secret **Header** *before* the address it gives you.

**Example:**

```c
char *p = malloc(8);

```

**Physical Memory Layout:**

```text
|  HEADER (8-16 bytes) |  PAYLOAD (8 bytes)  |
| [Size: 8 | Free: 0]  | [ Your Data ......] |
^                      ^
Real Start             Address returned to 'p'

```

* **The Trap:** If you write `p[-1]`, you overwrite the Header. This corrupts the Allocator's ledger. The next time you call `free(p)`, the allocator reads garbage size/flags and your program crashes with `double free or corruption`.

---

### **3. The Internal Structure: The "Free List"**

The Allocator tracks empty spaces using a structure called a **Free List** (often a Linked List).

**Scenario:**

1. You `malloc` three blocks: **A**, **B**, **C**.
2. You `free(B)`.
3. **Status:** The Heap has a "hole" in the middle. The Allocator adds Block B to its Free List.
4. You `malloc` again.
* The Allocator scans the Free List.
* **First Fit:** Takes the first hole big enough.
* **Best Fit:** Scans for the tightest fit to avoid waste.



---

### **4. Fragmentation (The Silent Killer)**

Since you can free blocks in any order, the Heap turns into "Swiss Cheese." This leads to two types of waste.

#### **A. External Fragmentation (The "Hole" Problem)**

* **Situation:** You have 10GB of free RAM total, but it's scattered in tiny 10-byte holes everywhere.
* **Result:** You try to `malloc(1GB)` and fail, even though you mathematically have space.

#### **B. Internal Fragmentation (The "Padding" Problem)**

* **Situation:** You ask for `malloc(1)`.
* **Reality:**
* The CPU requires **Alignment** (usually 8 or 16 bytes).
* The Allocator adds a **Header** (16 bytes).


* **Cost:** You used 24 bytes of RAM to store 1 byte of data.

---

### **5. The Two Engines: `sbrk` vs. `mmap**`

The C library (`glibc`) switches tactics based on size.

#### **Engine 1: `sbrk` (For Small allocations)**

* **Action:** Moves the **Program Break** (the Heap ceiling) up.
* **Pros:** Fast.
* **Cons:** Cannot easily be returned to the OS because it's contiguous. If you `malloc` at the bottom and `malloc` at the top, you can't shrink the Heap even if you `free` the bottom, because the top is "pinning" the Program Break high.

#### **Engine 2: `mmap` (For Large allocations)**

* **Threshold:** Usually > 128 KB (configurable).
* **Action:** Asks the OS for a completely separate, private region of memory anywhere in RAM.
* **Pros:** When you `free()` it, the memory is instantly returned to the OS (unmapped).
* **Cons:** Slower to create due to OS overhead.

---

### **6. Deep Dive: Memory Leaks**

A memory leak is not a physical error; it is a **logical** error.

**Definition:**
A block of Heap memory exists (is marked "Used" in the Allocator's ledger), but **no pointer** in your Stack or Global data points to it anymore.

**Why it's fatal:**
Since you lost the address, you can never pass it to `free()`. The Allocator thinks it's still busy. Your program consumes more and more RAM until the OS kills it (OOM - Out of Memory Killer).

```c
void leak() {
    int *ptr = malloc(100); // 1. Allocate Heap, save address in Stack 'ptr'
    return;                 // 2. Stack frame destroyed. 'ptr' is gone.
                            // 3. The Heap block (100 bytes) is now an orphan.
}

```

---

### **7. Tricky Interview Questions (Heap)**

#### **Q1: Does `free(p)` clear the memory?**

* **Answer:** **No.** It just updates the Header to say "This block is free." The data (passwords, keys) remains there until overwritten by a future `malloc`. This is a security risk. Secure systems use `memset` before free.

#### **Q2: Why is `calloc` safer/slower than `malloc`?**

* **Answer:** `calloc` zeroes out the memory. `malloc` gives you memory with "garbage" (whatever data was in that block previously).

#### **Q3: Use-After-Free**

```c
int *p = malloc(10);
free(p);
*p = 50; // EVIL

```

* **The Deep Horror:** `p` still points to that address. But that address might now be part of the **Free List** data structure used by the Allocator. By writing `50`, you might have corrupted the "Next Pointer" of the free list. The next `malloc` call will follow your corrupt pointer and crash the program.

---
