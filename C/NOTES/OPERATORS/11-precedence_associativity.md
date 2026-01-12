### **11. Subscript & Function Call Operators: `[]` `()**`

These two operators are the bridge between "Data Structures" and "Control Flow." They look like basic syntax, but they translate into very specific, powerful CPU addressing modes.

---

### **A. Array Subscript Operator: `[]**`

Here is the secret that shocks most beginners: **Arrays do not exist** at the CPU level. There are only blocks of memory. The `[]` operator is just a pretty wrapper for **Pointer Arithmetic**.

#### **1. The Golden Rule**

In C, the expression `arr[i]` is defined by the standard to be **identically equivalent** to:


This definition reveals exactly how the CPU calculates the address.

#### **2. Under the Hood: The "Scale" Factor**

When you write `arr[i]`, the CPU doesn't just add `i` bytes. It adds `i * sizeof(element)`.

**Example:**

```c
int arr[10]; // int is 4 bytes
arr[3] = 99;

```

* **Logic:** `Address = Base_Address + (3 * 4)`
* **Assembly (x86 SIB Addressing):**
The x86 CPU has a dedicated hardware circuit called "Scale-Index-Base" (SIB) to do this in **one cycle**.
```assembly
MOV EAX, 99
MOV [RDI + RDX*4], EAX  ; Base(RDI) + Index(RDX) * Scale(4)

```


* *Note:* This "Scale" (multiplication) is free. It happens inside the address calculation unit, not the ALU.



#### **3. The Tricky "Commutative" Property**

Because `arr[i]` is just `*(arr + i)`, and addition is commutative (`a + b == b + a`), the following is **valid C code**:

```c
int a[10];
a[2] = 5;
2[a] = 5; // TOTALLY VALID

```

* **Why?** `2[a]` becomes `*(2 + a)`, which is the same as `*(a + 2)`.
* *Warning:* Never write this in production code unless you want to be fired. It is a "party trick" that proves you understand the operator deeply.

---

### **B. Function Call Operator: `()**`

This operator (`func()`) is the only operator that changes the **Instruction Pointer (IP)**, causing the CPU to jump to a different part of the code.

#### **1. The Core Concept: The Stack Frame**

When you call a function, the CPU cannot just "jump." It must remember **where to come back to**.

* **Action 1 (Push):** The CPU pushes the **Return Address** (the address of the *next* instruction) onto the Stack.
* **Action 2 (Jump):** The CPU changes the Instruction Pointer to the function's start address.

#### **2. Argument Passing (The ABI)**

How does `func(a, b, c)` pass data to the function?

* **Old Way (32-bit):** Push everything onto the stack. Slow (memory access).
* **Modern Way (x64):** **Registers.**
* Arg 1 -> `RDI`
* Arg 2 -> `RSI`
* Arg 3 -> `RDX`
* ...
* *Only* if you have too many arguments does it spill to the Stack.



#### **3. Under the Hood: Assembly Trace**

```c
void add(int a, int b) { return a + b; }

int main() {
    add(10, 20);
}

```

**Assembly (x64):**

```assembly
; In main()
MOV EDI, 10       ; Put Arg 1 in EDI register
MOV ESI, 20       ; Put Arg 2 in ESI register
CALL add          ; 1. Push Return Address to Stack
                  ; 2. Jump to 'add' label

; In add()
ADD EDI, ESI      ; Add the registers
MOV EAX, EDI      ; Return value goes in EAX
RET               ; Pop Return Address from Stack and Jump back

```

---

### **C. Complex Examples & Traps**

#### **Example 1: Multidimensional Arrays**

`int matrix[3][4];`
Accessing `matrix[i][j]` is actually:


**Memory Mapping:**
Since memory is 1D (a flat line), C maps 2D arrays using **Row-Major Order**.
`Address = Base + (i * Columns + j) * sizeof(int)`

**Efficiency Tip:**
Iterating `matrix[i][j]` (Row-by-Row) is fast.
Iterating `matrix[j][i]` (Column-by-Column) is **slow**.

* **Why?** Row-by-row accesses memory sequentially (friendly to CPU Cache). Column-by-column jumps around memory (Cache Misses).

#### **Example 2: Function Pointers**

You can use `()` on a variable if it's a pointer to code.

```c
void my_func() { printf("Hi"); }

void (*ptr)() = my_func; // Pointer to function
ptr();  // Calls it
(*ptr)(); // Also calls it (Dereference is optional in standard)

```

---

### **D. Tricky Interview Questions**

#### **Q1: Array vs Pointer Access**

**Q:** Is `arr[i]` slower than `ptr[i]`?
**A:**

* **Static Array (`int arr[10]`):** The compiler knows `arr` is a constant address. It hardcodes the location. Very fast.
* **Pointer (`int *ptr`):** The compiler must first **fetch** the address stored in the variable `ptr`, *then* add the offset. It takes one extra memory read.
* *Verdict:* Arrays are theoretically slightly faster in raw assembly, though modern optimization blurs this line.

#### **Q2: Evaluation Order**

**Q:** In `f(a(), b())`, which function runs first? `a` or `b`?
**A:** **Unspecified Behavior.**

* The C standard does **not** say which argument is evaluated first. It depends on the compiler (GCC might do Right-to-Left, Clang might do Left-to-Right).
* *Trap:* Never write code that depends on this order (e.g., `func(x++, x++)`).

---

### **Summary Table: Operator Group 11**

| Operator | Name | Syntax | Translation | CPU Action |
| --- | --- | --- | --- | --- |
| **`[]`** | Subscript | `a[i]` | `*(a + i)` | Base + Index * Scale (SIB) |
| **`()`** | Function Call | `f(a)` | Call address | Push Return Addr + JMP |


---
---
---
---
---

# Operator Precedence & Associativity (C)

This document lists **full precedence** and **associativity**, then provides guidance for writing unambiguous expressions in embedded code.

---

## 1) Highest to Lowest (with associativity)

- **Postfix**: `()`, `[]`, `->`, `.`  *(L‑to‑R)*
- **Unary**: `++`, `--`, `+`, `-`, `!`, `~`, `*`, `&`, `sizeof`, `_Alignof`, `(type)`  *(R‑to‑L)*
- **Multiplicative**: `*`, `/`, `%`  *(L‑to‑R)*
- **Additive**: `+`, `-`  *(L‑to‑R)*
- **Shift**: `<<`, `>>`  *(L‑to‑R)*
- **Relational**: `<`, `<=`, `>`, `>=`  *(L‑to‑R)*
- **Equality**: `==`, `!=`  *(L‑to‑R)*
- **Bitwise AND**: `&`  *(L‑to‑R)*
- **Bitwise XOR**: `^`  *(L‑to‑R)*
- **Bitwise OR**: `|`  *(L‑to‑R)*
- **Logical AND**: `&&`  *(L‑to‑R)*
- **Logical OR**: `||`  *(L‑to‑R)*
- **Conditional**: `?:`  *(R‑to‑L)*
- **Assignment**: `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `^=`, `|=`  *(R‑to‑L)*
- **Comma**: `,`  *(L‑to‑R)*

---

## 2) Practical Guidance

- **Always parenthesize** mixed bitwise/logical expressions: `((reg & MASK) != 0) && ...`
- **Prefer simple expressions** in embedded code; avoid relying on precedence for readability.
- **Remember**: unary binds tighter than multiplicative; multiplicative tighter than additive.

---

## 3) Examples

```c
int a=1,b=2,c=3;
int x = a + b << c;     // parsed as a + (b << c)
int y = (a + b) << c;   // explicit

int ok = (reg & (A|B)) && ((reg & C) == 0);
```

---

## 4) Pitfalls

- Chaining assignments associates **right‑to‑left**: `a = b = c;` is `a = (b = c);`.
- Ternary `?:` is **right‑to‑left**; nested ternary needs parentheses for clarity.

---

## 5) Cheat Sheet

- Use parentheses generously.
- Keep bitwise and logical separate with explicit `!= 0` checks.
- Know tiers: postfix > unary > multiplicative > additive > shift > relational > equality > bitwise & ^ | > logical && || > ?: > assignment > comma.

---

*End of document.*
