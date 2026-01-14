# **Topic 4: Global & Static Memory (Data & BSS)**

This is the "Permanent Storage" of your program. Unlike the Stack (which is created and destroyed constantly), variables in this zone live from the **moment your program starts** until the **moment it dies**.

This section answers two of the biggest questions in C:

1. Why does `int huge[1000000];` make my program run fast, but `int huge[1000000] = {1};` bloats my executable file?
2. How can a "Local Static" variable remember its value if the function returns?

---

### **1. The Two Zones: `.data` vs. `.bss**`

The compiler splits global variables into two different lists based on one simple question: **"Did you give it a value?"**

#### **A. The `.data` Segment (Initialized)**

* **Code:** `int x = 10;` or `static int y = 5;`
* **Behavior:** The value `10` must be stored *inside* your `.exe` file on the hard drive.
* **Deep Consequence (Disk Bloat):** If you write `char arr[1024*1024] = {1};`, your `.exe` file grows by **1 Megabyte** instantly. The OS must copy that megabyte from Disk to RAM at startup.

#### **B. The `.bss` Segment (Uninitialized)**

* **Code:** `int x;` or `static int y;`
* **Behavior:** The compiler just makes a note: *"I need 4 bytes for integer 'x'."* It stores **no data** on the hard drive.
* **Deep Consequence (Optimization):** If you write `char arr[1024*1024];`, your `.exe` file grows by only **4 bytes** (the size of the note).
* **Startup Magic:** When the OS loads your program, it sees the BSS note. It grabs a chunk of RAM and **zeroes it out** completely. This is why uninitialized globals are always 0.

---

### **2. Deep Dive: The `static` Keyword**

This is the most overloaded and confusing keyword in C because it means two completely different things depending on *where* you put it.

#### **Scenario A: `static` inside a Function (Local Static)**

This creates "Private Permanent Memory."

```c
void counter() {
    static int count = 0; // Lives in .bss, NOT Stack!
    count++;
    printf("%d ", count);
}

```

* **Memory View:** The variable `count` is **NOT** on the Stack. It is created in the `.bss` segment at compile time.
* **The Lie:** The line `static int count = 0;` is **NOT** executed when the function runs. It is an instruction to the **Loader** to zero out that memory before `main()` even starts.
* **The "Scope" Trick:** The variable sits globally in memory, but the compiler **enforces a rule** that only the function `counter()` is allowed to know its name.

#### **Scenario B: `static` outside a Function (Global Static)**

This controls "Visibility" (Linkage).

* **Normal Global (`int x = 10;`):** Has **External Linkage**. Other files can see it using `extern int x;`.
* **Static Global (`static int x = 10;`):** Has **Internal Linkage**.
* **Deep Meaning:** The compiler creates the symbol `x`, but marks it as **"Private"** in the object file.
* **The Linker:** When the Linker tries to connect files, it ignores this `x`. This allows you to have a variable named `x` in `file1.c` and another `static x` in `file2.c` without them colliding.



---

### **3. CPU Addressing: Absolute vs. Relative**

How does the CPU find these variables compared to the Stack?

* **Stack Variable:** `MOV EAX, [RBP - 4]`
* "Go to the Stack Pointer and look 4 bytes back." (Relative addressing).


* **Global Variable:** `MOV EAX, [0x402010]`
* "Go to the exact address `0x402010`." (Absolute addressing*).
* *Note:* Modern "Position Independent Code" (PIC) uses relative addressing from the instruction pointer (`RIP + offset`), but the concept stands: the location is fixed relative to the code, unlike the Stack which moves.



---

### **4. Tricky Interview Questions (Systems Level)**

#### **Q1: The "Huge Array" Crash**

```c
int main() {
    int arr[1000000]; // Crash! (Stack Overflow)
    return 0;
}

```

vs

```c
int arr[1000000]; // Works fine.
int main() { return 0; }

```

* **Deep Answer:**
* Inside `main`: `arr` goes on the **Stack**. The Stack is small (usually 8MB limit). 1 million integers = 4MB, which is risky.
* Outside `main`: `arr` goes to **BSS**. The BSS size is limited only by your physical RAM (gigabytes).



#### **Q2: `const` Globals**

```c
const int x = 10;

```

* **Where does this go?**
* It does **not** go to `.data`.
* It goes to **`.rodata` (Read-Only Data)**, which is usually part of the **Text Segment**.
* **Hardware Trap:** If you cast away the const (`*(int*)&x = 5;`), the MMU triggers a Segmentation Fault because that page is marked "Read Only" by the OS.



---

### **5. Summary: The Variable Matrix**

| Declaration | Segment | Lifetime | Scope | Linkage |
| --- | --- | --- | --- | --- |
| `int x;` (Global) | **BSS** | Permanent | Program | External |
| `int x = 10;` (Global) | **DATA** | Permanent | Program | External |
| `static int x;` (Global) | **BSS** | Permanent | **File** | **Internal** |
| `void f() { int x; }` | **STACK** | Temporary | Function | None |
| `void f() { static int x; }` | **BSS** | **Permanent** | **Function** | None |
| `char *p = "Hello";` | `p`: **STACK** | Temporary | Function | None |
| ... the string "Hello" | **RODATA** | Permanent | None | None |

---
