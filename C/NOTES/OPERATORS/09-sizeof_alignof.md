# **9. Introspection Operators: `sizeof` & `_Alignof`**

**`sizeof` is NOT a function.** It is an **Operator**.
In 99% of cases, it does **not** calculate anything while your program is running. The compiler calculates the answer before your code even compiles into assembly.

---

### **1. The Core Concept: Measuring Storage**

#### **A. `sizeof` Operator**

* **Purpose:** Returns the size (in bytes) of a type or variable.
* **Unit of Measure:** In C, size is defined in terms of `char`. By definition, `sizeof(char) == 1`.
* **Return Type:** `size_t` (an unsigned integer, usually `unsigned long` or `unsigned long long`).

#### **B. `_Alignof` Operator (Introduced in C11)**

* **Purpose:** Returns the **alignment requirement** of a type.
* **Concept:** CPUs read memory in chunks (words) like 4 or 8 bytes. A 4-byte integer must typically sit at an address divisible by 4 (e.g., 0x00, 0x04, 0x08). If it sits at 0x01, the CPU might crash or run very slowly.
* **Usage:** `_Alignof(int)` usually returns 4.

---

### **2. Deep Dive: Compile-Time Evaluation**

This is the "Magic" of `sizeof`.

**Scenario:**

```c
int a = 10;
size_t s = sizeof(a++);
printf("%d", a);

```

* **Question:** What is `s`, and what is `a`?
* **Answer:** `s` is 4 (on 32-bit systems). **`a` is still 10.**
* **Why:** The expression `a++` inside `sizeof` is **never executed**.
* The compiler only looks at the **Type** of the expression.
* "Oh, `a++` results in an `int`? Okay, I'll replace this whole line with the number `4`."
* It discards the side effect (`++`).



**The Assembly Output:**

```assembly
MOV EAX, 4    ; The compiler hardcoded the number 4. No calculation happened.
MOV [s], EAX

```

#### **The Exception: Variable Length Arrays (VLA)**

If (and only if) you use a VLA (arrays where size is a variable, e.g., `int arr[n]`), `sizeof` must be calculated at **Run-Time**.

* **CPU Action:** It generates code to read the array dimension from the stack/register and multiply it by the element size.

---

### **3. Deep Dive: Struct Padding & Alignment**

This is where `sizeof` confuses beginners. It doesn't just add up the variables; it includes the "air" (padding) between them.

**The "Tetris" of Memory:**
CPUs hate unaligned data. To keep the CPU happy, the compiler inserts useless bytes.

**Example:**

```c
struct Data {
    char c;     // 1 byte
    int i;      // 4 bytes
    short s;    // 2 bytes
};

```

* **Naive Math:** 1 + 4 + 2 = **7 bytes**.
* **Real `sizeof`:** **12 bytes**.

**Memory Map:**

1. `c` at offset 0.
2. **3 Bytes of Padding** (inserted so `int i` can start at offset 4).
3. `i` at offset 4.
4. `s` at offset 8.
5. **2 Bytes of Padding** (inserted at end so the *entire struct* size is a multiple of the largest member, allowing array indexing to work).

**CPU Level Why:**
To read `int i` from address `0x0001` (unaligned), the CPU might need **two** memory bus cycles (reading chunks `0-3` and `4-7` and stitching them). If aligned at `0x0004`, it takes **one** cycle.

---

### **4. Complex Examples**

#### **Example 1: The Pointer Trap**

```c
void func(int arr[]) {
    printf("%zu", sizeof(arr)); 
}

int main() {
    int my_array[100]; // 100 * 4 = 400 bytes
    func(my_array);
}

```

* **Result:** It prints **8** (on 64-bit system) or **4** (on 32-bit).
* **Why:** Array Decay. When you pass an array to a function, it decays into a **Pointer** to the first element. `sizeof(arr)` inside the function is measuring the size of the *pointer*, not the array.

#### **Example 2: String Literals**

```c
size_t s1 = sizeof("Hello"); // String Literal
char *p = "Hello";
size_t s2 = sizeof(p);       // Pointer

```

* **s1:** **6**. (5 letters + 1 Null Terminator `\0`). The type is `char[6]`.
* **s2:** **8** (on 64-bit). The type is `char *`.

#### **Example 3: `_Alignof` Usage**

Useful for allocating buffers for hardware drivers or SIMD (Vector) instructions.

```c
#include <stdalign.h> // C11 header

struct Packet {
    char header;
    double payload;
};

// Returns 8 (because double requires 8-byte alignment)
size_t alignment = alignof(struct Packet); 

```

---

### **5. Tricky Interview Questions**

#### **Q1: The Empty Struct**

**Q:** What is `sizeof(struct Empty {})`?
**A:**

* **In C:** **Undefined Behavior / Error**. C standard does not strictly allow empty structs (though GCC might allow it as an extension, returning 0).
* **In C++:** **1**. (To ensure two different objects have unique addresses).
* *Trap:* Don't confuse C and C++ rules here.

#### **Q2: `sizeof` vs Precedence**

**Q:** `sizeof int * y` (Syntax Error) vs `sizeof(int) * y`.
**A:**

* If you apply `sizeof` to a **Type**, parentheses are **Mandatory**: `sizeof(int)`.
* If you apply `sizeof` to a **Variable**, parentheses are **Optional**: `sizeof x`.
* `sizeof x * 2` is parsed as `(sizeof x) * 2`.



#### **Q3: Bit Fields**

```c
struct Bits {
    unsigned int a : 1;
    unsigned int b : 2;
};

```

**Q:** Can you use `sizeof` on `a`?
**A:** **No.** You cannot take `sizeof` (or `&`) of a bit-field member. They don't have a byte-aligned address. You can only take `sizeof` of the whole struct.

---

### **Summary Table: Operator Group 9**

| Operator | Evaluated At | Operands | Result |
| --- | --- | --- | --- |
| **`sizeof(type)`** | Compile Time | `int`, `struct A` | Size in bytes (including padding). |
| **`sizeof(var)`** | Compile Time | `x`, `arr` | Size of variable type. |
| **`sizeof(vla)`** | **Run Time** | `arr[n]` | Size calculated dynamically. |
| **`_Alignof`** | Compile Time | Type | Byte alignment requirement. |

---
---
---
---
---

# 📘 Deep Dive: `sizeof` and `_Alignof` in C

Operators:
```
sizeof   _Alignof (C11)
```
This document explains semantics, compile‑time behavior, VLAs, alignment requirements, and embedded usage.

---

## 1) `sizeof`

- `sizeof(type)` or `sizeof expr` yields the **size in bytes** of its operand.
- **Type:** `size_t` (unsigned).
- Usually **compile‑time constant**; for **VLAs** (variable length arrays), evaluated at runtime.

### 1.1 Examples
```c
sizeof(char)      // 1
sizeof(int)       // 4 on ILP32
sizeof(double)    // typically 8
sizeof arr        // size of object
sizeof *ptr       // size of what ptr points to
```

### 1.2 Practical uses
- Buffer sizing, protocol parsing, struct layout sanity checks.
- Computing element count: `sizeof arr / sizeof arr[0]`.

---

## 2) `_Alignof` (C11)

- Yields required **alignment** of a type (in bytes).
```c
_Alignof(int)     // commonly 4
_Alignof(double)  // commonly 8
```

### 2.1 Embedded Notes
- Alignment affects **padding** in structs and **performance** on some systems.
- Ensure DMA buffers meet alignment constraints.

---

## 3) Pitfalls

- `sizeof('A')` → size of **int**, not 1.
- `sizeof(ptr)` yields size of pointer, **not** pointee.
- Struct padding surprises: don’t rely on field order to persist across ABIs.

---

## 4) Cheat Sheet

- `sizeof` is often compile‑time; VLA case is runtime.
- `_Alignof` gives ABI alignment; use for packed/overlay checks.
- Use `sizeof arr / sizeof arr[0]` for array length in C.

---

*End of document.*
