# Relational & Equality Operators in C
---

### **1. The Core Concept: Truth in C**

Before C99, C did not have a `bool` type. Even today, relational operators return an integer:

* **False:** `0`
* **True:** `1`

**The "Truthiness" Rule:** When checking a condition (like in an `if`), C treats **0** as False and **anything non-zero** (1, -5, 100) as True.

---

### **2. Under the Hood: CPU & The "Flags" Register**

How does a CPU know if `a > b`? It doesn't "look" at the numbers. It performs a **Subtraction**.

#### **The `CMP` (Compare) Instruction**

In x86 assembly, the comparison `a == b` translates to:

```assembly
CMP A, B

```

This instruction internally calculates `A - B`.

* It **discards** the result (it doesn't store the math anywhere).
* It **updates** the **EFLAGS Register** (Status Register) based on the result.

#### **The Status Flags (EFLAGS)**

The CPU makes decisions by looking at these specific bits in the EFLAGS register:

1. **ZF (Zero Flag):** Set to 1 if the result of the subtraction is Zero (i.e., `A == B`).
2. **SF (Sign Flag):** Set to 1 if the result is negative (i.e., `A < B` in signed math).
3. **OF (Overflow Flag):** Set to 1 if a signed overflow occurred.
4. **CF (Carry Flag):** Used for unsigned comparisons.

#### **From Flags to Logic**

| C Operator | Assembly Jump | Logic Check |
| --- | --- | --- |
| **`==`** | `JE` (Jump if Equal) | Checks if **ZF = 1** |
| **`!=`** | `JNE` (Jump Not Equal) | Checks if **ZF = 0** |
| **`>`** | `JG` (Jump Greater) | Checks specific combinations of SF and OF |
| **`<`** | `JL` (Jump Less) | Checks if **SF != OF** |
| **`>=`** | `JGE` (Jump Greater/Equal) | Checks flags logic |
| **`<=`** | `JLE` (Jump Less/Equal) | Checks flags logic |

---

### **3. The Deepest Trap: Signed vs. Unsigned Comparison**

This is the source of many critical security bugs.

**The Rule:** If you compare a `signed int` with an `unsigned int`, the compiler **promotes the signed int to unsigned** before comparing.

#### **Scenario:**

```c
int a = -1;
unsigned int b = 10;

if (a > b) {
    printf("Wait... -1 is greater than 10??");
}

```

**Memory & CPU Analysis:**

1. `a` in memory (32-bit `int`): `11111111...1111` (Two's complement representation of -1).
2. `b` in memory (32-bit `unsigned`): `00000000...1010` (Representation of 10).
3. **Promotion:** The compiler sees `unsigned` on the right. It treats `a`'s bits as unsigned.
4. `1111...1111` in unsigned is **4,294,967,295** (UINT_MAX).
5. **Comparison:** Is 4.2 Billion > 10? **Yes.**
6. **Result:** The program enters the `if` block.

**Assembly Level:**

* The compiler generates the `JA` (Jump Above) instruction instead of `JG` (Jump Greater).
* `JG` handles negative signs. `JA` treats everything as positive raw numbers.

---

### **4. Floating Point Comparisons (`float`, `double`)**

**Never** compare floating-point numbers using `==`.

#### **The Problem: Precision Loss**

Computers store floats using IEEE 754 standard (Sign, Exponent, Mantissa). Many simple decimals (like 0.1) cannot be represented perfectly in binary; they are approximations.

```c
float x = 0.1;
if (x == 0.1) {
    // This might fail! 
    // Because 0.1 literal is a 'double', and x is a 'float'.
    // The bits won't match exactly.
}

```

#### **The Solution: Epsilon**

You must check if the numbers are "close enough."

```c
#define EPSILON 0.00001
if (fabs(a - b) < EPSILON) {
    // They are considered equal
}

```

**CPU Level:** Floating point comparisons use a separate set of instructions (`UCOMISS` on x86) and flags because the ALU cannot handle floats directly; the FPU (Floating Point Unit) does it.

---

### **5. Pointer Comparisons**

You can use relational operators on pointers (addresses), but strict rules apply.

* **`==` and `!=`:** Valid for any pointers. Checks if they point to the exact same memory address.
* **`>`, `<`, etc.:** **Undefined Behavior** unless both pointers point to elements **within the same array** (or one past the end).
* **Why:** Memory is segmented. Comparing address `0x00FF` (Stack) vs `0x8000` (Heap) is meaningless to the C standard, even if the CPU can physically compare the numbers.



---

### **6. Tricky Interview Questions**

#### **Q1: The Assignment Mistake**

```c
int x = 5;
if (x = 0) {
    printf("True");
} else {
    printf("False");
}

```

* **Result:** Prints "False".
* **Deep Reason:** This is valid C syntax. `x = 0` is an assignment. It updates `x` to 0, and the expression *returns* 0. The `if` sees 0 (False) and skips the block.
* *Advice:* Yoda Conditions. Write `if (0 == x)` instead. If you accidentally write `if (0 = x)`, the compiler throws an error because you cannot assign to a literal.

#### **Q2: The Short-Circuit Truth**

```c
int a = 10, b = 20;
int result = (a > 5) > (b > 100);

```

* **Question:** What is `result`?
* **Step-by-Step:**
1. `a > 5` (10 > 5) is True -> returns `1`.
2. `b > 100` (20 > 100) is False -> returns `0`.
3. Comparison becomes: `1 > 0`.
4. Result is True -> returns `1`.



#### **Q3: Nan (Not a Number)**

**Q:** If `f` is a float equal to `NaN`, what does `if (f == f)` return?
**A:** False.

* **Why:** `NaN` is the only value in computer science that is **not equal to itself**. This is a specific rule in IEEE 754 floating-point standard to detect invalid math errors.

---

### **Summary Table: Operator Group 4**

| Operator | Name | CPU Action | Key Pitfall |
| --- | --- | --- | --- |
| **`==`** | Equal To | `CMP` -> Check Zero Flag (1) | Confusing with `=` (Assignment). |
| **`!=`** | Not Equal | `CMP` -> Check Zero Flag (0) | None. |
| **`>`** | Greater | `CMP` -> Check Sign/Overflow | Signed vs Unsigned mix. |
| **`<`** | Less | `CMP` -> Check Sign/Overflow | Signed vs Unsigned mix. |
| **`>=`** | Greater/Eq | `CMP` -> Check logic | Float precision errors. |
| **`<=`** | Less/Eq | `CMP` -> Check logic | Float precision errors. |


---
---
---
---
---

# Relational & Equality Operators in C (Embedded + Memory + Assembly)

Operators:
```
==   !=   >   <   >=   <=
```
This document explains **semantics**, **promotions**, **signed/unsigned pitfalls**, **floating‑point comparisons (NaN, +0/−0)**, **short‑circuit contexts**, **branching/assembly** on x86‑64/ARM/MIPS32, and **embedded notes**.

---

## 1) Semantics

- Each operator produces an **int result**: `1` (true) or `0` (false).
- Operands undergo **usual arithmetic conversions** before comparison.
- For integers, comparisons are **value‑based** after promotions.
- For floating point, comparisons follow **IEEE‑754** rules.

---

## 2) Promotions & Mixed Signed/Unsigned (Critical)

### 2.1 Integer promotions & balancing
- `char/short` → **promoted to `int`** (or `unsigned int` if needed).
- Mixed width/signedness are converted to a **common real type** before comparison.

### 2.2 Signed vs Unsigned pitfalls
```c
int      si = -1;
unsigned ui = 1;
if (si < ui) { /* ? */ }
```
- The expression may be converted to **unsigned**; `-1` becomes a **large unsigned**, and the condition is often **false** unexpectedly.
- **Rule**: Avoid mixing signed and unsigned in comparisons; cast intentionally.

---

## 3) Floating‑Point Comparisons

- **NaN** compares unequal to all values, including itself: `NaN == NaN` is **false**.
- **+0 and −0** compare **equal** (`+0 == −0` true), but they are distinct bit patterns.
- **Inf** behaves as expected: `+∞ > x` for finite `x`; `x/0.0` can produce `±∞`.
- Rounding errors imply `a == b` is fragile; use **epsilon‑based** comparisons for near‑equality.

```c
#include <float.h>
#include <math.h>
int nearly_equal_double(double a, double b) {
    double diff = fabs(a - b);
    double tol = DBL_EPSILON * fmax(1.0, fmax(fabs(a), fabs(b)));
    return diff <= tol;
}
```

---

## 4) Memory‑Level & Endianness

- Comparisons operate on **values** (in registers). Memory endianness is irrelevant to comparison logic; it only affects **byte layout**.
- Floating compares use FPU registers; NaN/Inf states depend on IEEE‑754 bit patterns.

---

## 5) Assembly Intuition (Branches & Set‑on‑Condition)

### 5.1 x86‑64
- Compare integers: `cmp r/m, r` then `jl/jle/jg/jge/je/jne` for branching.
- Produce boolean without branching: `setl/setle/setg/setge/sete/setne` into a byte register; then `movzx` to int.
- For FP: `ucomiss`/`ucomisd` set flags; then conditional moves (`cmov`) or branches.

### 5.2 ARM Thumb‑2
- `cmp r0, r1` then conditional branches `bgt/bge/blt/ble/beq/bne`.
- FP: `vcmp.f32 s0, s1` then `vmrs APSR_nzcv, FPSCR` to transfer flags.

### 5.3 MIPS32 (MT7628)
- Signed compare: `slt $t0, $a0, $a1` (set‑less‑than) → branch based on $t0.
- Unsigned compare: `sltu $t0, $a0, $a1`.
- Equality/inequality: `beq/bne $a0, $a1, label`.

---

## 6) Common Interview Pitfalls & Fixes

1. **Signed/unsigned mix**: leads to surprising results; keep consistent.
2. **Comparing floats with `==`**: fragile; use tolerance checks.
3. **NaN behavior**: remember `NaN` compares **unequal** to everything.
4. **Struct/array comparisons**: `==` does **not** compare aggregates; it’s a compile error. Use `memcmp` or field‑wise compare.
5. **Pointer comparisons**:
   - Comparing pointers to **different arrays** is only meaningful for equality/inequality; relational order is **undefined** unless within the same array object.

---

## 7) Embedded Notes (Timing & Branching)

- Conditional branches cause **pipeline flushes** on mispredict; keep critical paths branch‑light.
- Prefer **conditional move/select** when available (x86 `cmov`, ARM `csel` in AArch64) to reduce branches.
- In ISR/real‑time code, avoid FP compares where possible on soft‑fp targets.

---

## 8) Snippets (Ready to Use)

### 8.1 Safe signed/unsigned comparison
```c
int32_t  a = -1;
uint32_t b = 1u;
if ((int64_t)a < (int64_t)b) { /* explicitly compare in wider signed domain */ }
```

### 8.2 Epsilon compare for floats
```c
int nearly_equal_float(float a, float b) {
    float diff = fabsf(a - b);
    float tol = FLT_EPSILON * fmaxf(1.0f, fmaxf(fabsf(a), fabsf(b)));
    return diff <= tol;
}
```

---

## 9) Cheat Sheet

- Result type: **int** (0/1).
- Promotions: avoid mixing signed/unsigned; cast intentionally.
- FP: NaN != anything; +0 == −0.
- Use tolerance for FP equality.
- Pointer relational compare valid only within the same array object.
- Branching costs cycles; consider conditional moves.

---

*End of document.*
