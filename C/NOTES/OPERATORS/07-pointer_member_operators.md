# **7. Pointer & Member Access Operators: `*` `&` `->` `.`**
---

### **1. The Core Concepts: Address vs. Value**

To understand `*` and `&`, you must visualize memory as a massive array of bytes, where every byte has a unique index called an **Address**.

#### **A. Address-of Operator (`&`)**

* **Syntax:** `&variable`
* **Action:** Returns the **memory address** (the index) where that variable is stored.
* **Constraint:** You can only use `&` on **L-values** (variables in memory). You cannot do `&10` because the number 10 is a constant, usually embedded directly in the CPU instruction code, so it has no RAM address.

#### **B. Dereference Operator (`*`)**

* **Syntax:** `*pointer`
* **Action:** "Go to this address." It treats the value inside the variable as an address, travels to that location in RAM, and fetches the data stored there.
* **Analogy:**
* `ptr` is a piece of paper with a room number written on it (e.g., "Room 101").
* `*ptr` means "Go to Room 101 and tell me who is inside."



---

### **2. Under the Hood: Memory & CPU Instructions**

Let's trace `int b = *a` at the CPU level (x86-64).

**C Code:**

```c
int val = 50;
int *ptr = &val;  // ptr holds the address of val
int x = *ptr;     // x gets the value 50

```

**Assembly (Intel Syntax):**

1. **`&val` (Address-of):** The compiler knows `val` is stored at a specific offset from the Stack Pointer (RSP). It calculates `RSP + offset`.
```assembly
LEA RAX, [RSP + 12]  ; Load Effective Address of 'val' into RAX
MOV [ptr], RAX       ; Store that address into 'ptr'

```


2. **`*ptr` (Dereference):**
```assembly
MOV RAX, [ptr]       ; 1. Load the address stored in 'ptr' into a register
MOV ECX, [RAX]       ; 2. Go to address in RAX, fetch data, put in ECX
MOV [x], ECX         ; 3. Store result into 'x'

```


* **Key Insight:** Dereferencing is a **Memory Access** operation. It is slow compared to register math.



---

### **3. The Member Access Operators: `.` vs `->**`

These are used to access fields inside a `struct` or `union`. The difference is entirely about **what you are holding**: the object itself or a pointer to it.

#### **A. The Dot Operator (`.`)**

* **Syntax:** `object.member`
* **Usage:** Used when you have the actual **struct variable** (Direct Access).
* **Compiler Logic:** The compiler knows the "Base Address" of the struct. It looks up the definition to find the **Offset** of the member.
* `Address = Base_Address + Member_Offset`



#### **B. The Arrow Operator (`->`)**

* **Syntax:** `pointer->member`
* **Usage:** Used when you have a **pointer** to the struct (Indirect Access).
* **Syntactic Sugar:** `p->m` is exactly equivalent to `(*p).m`.
* **Compiler Logic:**
1. Fetch the address stored in `pointer`.
2. Add the `Member_Offset`.
3. Access that location.



---

### **4. Deep Dive: Struct Memory Layout & Offsets**

This is where understanding "deep C" matters. C structs are not just bags of variables; they are laid out sequentially in memory, often with **Padding**.

**Example:**

```c
struct Robot {
    char id;      // 1 byte
    // --- 3 bytes of HIDDEN PADDING inserted here by compiler ---
    int hp;       // 4 bytes (must start at address divisible by 4)
    double speed; // 8 bytes
};

struct Robot bot;
struct Robot *p = &bot;

```

**Operation 1: `bot.hp = 100;` (Dot Operator)**

* The compiler knows `bot` is at `0x1000` (for example).
* It knows `hp` is at offset **4** (1 byte for char + 3 padding).
* **CPU Instruction:** `MOV [0x1004], 100` (Writes directly to specific address).

**Operation 2: `p->hp = 100;` (Arrow Operator)**

* The compiler sees `p`. It doesn't know where `p` points until runtime.
* It generates code to:
1. Read `p`'s value (e.g., `0x1000`).
2. Add offset **4**.
3. Write `100` to `0x1004`.



---

### **5. Complex Example: Chained Pointers**

Let's look at a Linked List node access.

```c
struct Node {
    int value;
    struct Node *next;
};

struct Node *head = ...;
// Access the value of the second node
int val = head->next->value;

```

**Step-by-Step Execution:**

1. **`head`**: Get address of first node (e.g., `Address A`).
2. **`->next`**: Go to `Address A` + Offset of `next`. Read the address stored there (e.g., `Address B`).
3. **`->value`**: Go to `Address B` + Offset of `value` (0). Read the integer.

**Why does this crash?**
If `head` is `NULL` (`0x0`), step 2 tries to read memory at `0x0 + Offset`. The OS catches this illegal access and kills the program (**Segmentation Fault**).

---

### **6. Tricky Interview Questions**

#### **Q1: The Null Pointer Offset**

**Q:** How does the `offsetof` macro work?
**A:** It uses a fake pointer `0`.

```c
#define my_offsetof(TYPE, MEMBER)  ((size_t) &((TYPE *)0)->MEMBER)

```

* **Explanation:**
1. `(TYPE *)0`: Pretend there is a struct at Address 0.
2. `->MEMBER`: Point to the member. Since base is 0, the address of the member is just `0 + Offset`.
3. `&`: Take that address (which equals the offset).


* *Note:* This is not executed at runtime (which would crash). It is calculated at **Compile Time**.



#### **Q2: `*` and `&` Cancellation**

**Q:** What is the type and value of `*&x` and `&*x`?
**A:**

* `*&x`: Takes address of `x`, then dereferences it. Cancels out. Result is `x` (L-value).
* `&*ptr`: Dereferences `ptr`, then takes address. Cancels out. Result is `ptr`.
* *Trap:* `&*x` is **invalid** if `x` is not a pointer, because you can't dereference a non-pointer.



#### **Q3: `void *` Arithmetic**

**Q:** If `void *p` points to address 1000, what is `p+1`?
**A:**

* **Standard C:** **Illegal.** `void` has no size, so the compiler doesn't know how many bytes to jump.
* **GCC/Clang Extension:** Treats `void*` like `char*` (1 byte). Result is 1001.
* **Best Practice:** Always cast before arithmetic: `((char*)p) + 1`.

---

### **Summary Table: Operator Group 7**

| Operator | Name | Operand Type | Returns | CPU Action |
| --- | --- | --- | --- | --- |
| **`&`** | Address-of | L-value (Variable) | Pointer (`type*`) | `LEA` (Calculate effective address). |
| **`*`** | Dereference | Pointer | Value (L-value) | `MOV` (Load from memory). |
| **`.`** | Dot | Struct/Union Object | Member Value | Address + Constant Offset. |
| **`->`** | Arrow | Struct/Union **Pointer** | Member Value | (Load Pointer) + Constant Offset. |


---
---
---
---
---


Operators:
```
*   &   ->   .
```
This document explains pointer operators, member access, rules for lvalues, alignment, aliasing, and many embedded‑context examples.

---

## 1) Address‑of `&` and Dereference `*`

- `&expr` → address of an **lvalue** (yields a pointer). Not allowed on temporaries/bit‑fields.
- `*ptr` → dereference, yielding the referenced **object** (lvalue if pointer points to object).

### 1.1 Strict aliasing
- Accessing an object via unrelated pointer type is **UB**.
- Only `unsigned char*`/`char*` may legally view raw bytes.

### 1.2 Volatile pointers for MMIO
```c
#define REG32(addr) (*(volatile uint32_t*)(addr))
REG32(0x1000) = 0x01; // write MMIO
```

---

## 2) Member Access: `.` and `->`

- `obj.member` uses **`.`** when you have the object.
- `ptr->member` uses **`->`** when you have a **pointer** (equivalent to `(*ptr).member`).

### 2.1 Alignment & Padding
- Structures insert padding for alignment of members. Accessing members respects alignment.
- Packed layouts for wire formats → prefer explicit byte serialization (avoid assuming compiler packing).

---

## 3) Pointer Arithmetic

- `p + n` steps by `n * sizeof(*p)` bytes.
- One‑past‑end pointer is permitted; dereferencing it is **UB**.

```c
uint8_t buf[4]={1,2,3,4};
uint8_t *p = buf;
uint8_t a = *p++;     // a=1, p→buf[1]
uint8_t b = (*p)++;   // b=2, buf[1] becomes 3
```

---

## 4) Examples

### 4.1 Safe access with short‑circuit
```c
int is_answer(const int* p) { return p && (*p == 42); }
```

### 4.2 Struct access vs pointer access
```c
struct S { int x; int y; } s = {3,4};
struct S *ps = &s;
int a = s.x + s.y;    // .
int b = ps->x + ps->y; // ->
```

### 4.3 Byte‑wise serialization
```c
struct H { uint16_t len; uint8_t ver; } h;
uint8_t w[3];
w[0] = (uint8_t)(h.len >> 8);
w[1] = (uint8_t)(h.len & 0xFF);
w[2] = h.ver; // avoid assuming packing
```

---

## 5) Pitfalls

- Taking address of bit‑field: **not allowed**.
- Pointer arithmetic on `void*` is not defined; cast to byte or element type first.
- Aliasing violations: use `memcpy` for type‑punning.

---

## 6) Cheat Sheet

- `&` gets address; `*` dereferences.
- `.` vs `->`: object vs pointer.
- Respect alignment; avoid packed assumptions—serialize explicitly.
- Be careful with pointer arithmetic bounds.

---

*End of document.*
