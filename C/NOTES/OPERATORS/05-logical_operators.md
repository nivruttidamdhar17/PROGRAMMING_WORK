# 5. Logical Operators in C `&&` `||` `!`

### **1. The Core Concept: Boolean Logic in C**

As established, C treats `0` as **False** and anything else as **True**.
However, when these operators **return** a value, they are strict:

* **True:** Always returns `1` (integer).
* **False:** Always returns `0` (integer).

This standardization allows you to do math with logic (e.g., `count += (a > b);`).

---

### **2. Deep Dive: Short-Circuit Evaluation**

This is the defining feature of `&&` and `||` compared to `&` and `|`.

**Rule:** The second operand is **not evaluated** if the result can be determined solely by the first operand.

#### **A. Logical AND (`&&`)**

* **Logic:** True only if **both** sides are True.
* **Short-Circuit:** If the Left side is `False` (0), the result is guaranteed to be `False`. The CPU **skips** evaluating the Right side entirely.
* `0 && (Crash_The_PC())` -> Safe. The crash function is never called.



#### **B. Logical OR (`||`)**

* **Logic:** True if **at least one** side is True.
* **Short-Circuit:** If the Left side is `True` (non-zero), the result is guaranteed to be `True`. The CPU **skips** the Right side.
* `1 || (Crash_The_PC())` -> Safe.



---

### **3. Under the Hood: CPU Branching**

At the CPU level, `&&` and `||` do not act like mathematical additions. They act like **Jump (Branching)** instructions.

Let's trace `if (A && B)` in Assembly (x86 pseudo-code).

**C Code:**

```c
if (check_A() && check_B()) {
    do_action();
}

```

**Assembly Logic:**

```assembly
CALL check_A       ; Run function A
CMP  EAX, 0        ; Did it return 0 (False)?
JE   end_label     ; IF FALSE: Jump to end immediately! (Skip check_B)

CALL check_B       ; If we are here, A was True. Now run B.
CMP  EAX, 0        ; Did B return 0?
JE   end_label     ; IF FALSE: Jump to end.

; If we are here, both were True.
CALL do_action     ; Execute the body.

end_label:
; Continue program...

```

**Key Takeaway:** The compiler turns Logical Operators into **Control Flow** (Jumps), not just Math. This explains why putting expensive calculations on the right side of `||` can optimize performance (if the left side is usually True).

---

### **4. Logical NOT (`!`)**

* **Logic:** Inverts the truthiness.
* **Memory/CPU:**
* Input `0` -> Output `1`.
* Input `Non-Zero` (e.g., 5, -10) -> Output `0`.



**Assembly Optimization:**
The CPU often uses the `TEST` instruction followed by `SETE` (Set byte if Equal/Zero).

```c
int result = !val;

```

```assembly
CMP val, 0      ; Compare val to 0
SETE AL         ; If val was 0 (Equal), set AL register to 1. 
                ; If val was not 0, set AL to 0.

```

---

### **5. Complex Examples & Traps**

#### **Example 1: The Null Pointer Guard**

This is the most common use of short-circuiting in systems programming.

```c
void process(int *ptr) {
    // If ptr is NULL, the left side is False.
    // Short-circuit happens. *ptr (Dereference) is NEVER touched.
    // Result: No Segfault crash.
    if (ptr != NULL && *ptr == 10) {
        printf("Found 10!");
    }
}

```

*If you swapped the order:* `if (*ptr == 10 && ptr != NULL)` -> **CRASH** if ptr is NULL because the CPU tries to read the memory at `*ptr` first.

#### **Example 2: Side Effects in Short-Circuit**

```c
int x = 10;
int y = 20;

if (x > 50 && y++ > 20) {
    // Logic
}
printf("%d", y);

```

* **Question:** What is the value of `y`?
* **Answer:** `20` (unchanged).
* **Why:** `x > 50` is False. Short-circuit kicks in. The expression `y++` is **never executed** by the CPU. The increment is lost.

---

### **6. Tricky Interview Questions**

#### **Q1: The Double Bang (`!!`)**

**Q:** What does `!!x` do?
**A:** It "normalizes" a variable to a pure boolean (0 or 1).

* If `x` is 0: `!0` -> `1` -> `!1` -> `0`.
* If `x` is 523: `!523` -> `0` -> `!0` -> `1`.
* *Usage:* Useful when you need to store a "truth" state in a 1-bit field or return strictly 1/0.

#### **Q2: Order of Precedence vs. Order of Evaluation**

```c
int f1() { printf("High"); return 1; }
int f2() { printf("Low"); return 1; }

int main() {
    if (f1() || f2()) { ... }
}

```

**Q:** Does Precedence guarantee `f1` runs before `f2`?
**A:** No, Precedence dictates *grouping* (where parentheses would go). However, the C standard **specifically guarantees** Left-to-Right evaluation order for `&&` and `||` (and the comma operator).

* So `f1()` is guaranteed to execute first. If it returns 1, `f2` is guaranteed skipped.
* *Note:* This is unlike `+` or `*`, where order of evaluation is unspecified.

#### **Q3: Combining Logical and Bitwise**

**Q:** What is result of `1 && 2` versus `1 & 2`?
**A:**

* `1 && 2`: Logical AND. `True && True` -> Result **1**.
* `1 & 2`: Bitwise AND. `0001 & 0010` -> Result **0**.
* *Trap:* Mistyping `&&` as `&` is a classic bug that compiles perfectly but breaks logic.

---

### **Summary Table: Operator Group 5**

| Operator | Name | Logic | Return Value | CPU Action |
| --- | --- | --- | --- | --- |
| **`&&`** | Logical AND | Both True? | 1 or 0 | Jump to End if Left is False. |
| **`||`** | Logical OR | Either True? |
| **`!`** | Logical NOT | Invert | 1 or 0 | Compare with 0, Set Flag. |


---
---
---
---
---

# Logical Operators in C (Embedded + Short‑Circuit + Assembly)

Operators:
```
&&   ||   !
```
This document explains **semantics**, **short‑circuit evaluation**, **promotions**, **common pitfalls**, **assembly/branch behavior** (x86‑64/ARM/MIPS32), and **embedded considerations**.

---

## 1) Semantics & Short‑Circuit

- **Logical NOT `!`**: yields `1` if operand is zero; otherwise `0`. Operand undergoes **integer promotions**.
- **Logical AND `&&`**: evaluates **LHS**; if LHS is **0**, RHS is **not evaluated**; result is 0. Otherwise, evaluates RHS; result is 1 if RHS ≠ 0.
- **Logical OR `||`**: evaluates **LHS**; if LHS ≠ 0, RHS is **not evaluated**; result is 1. Otherwise, evaluates RHS; result is 1 if RHS ≠ 0.
- Result type is **int** (0 or 1).

**Key property**: **short‑circuiting** ensures RHS may be skipped based on LHS.

---

## 2) Promotions & Conversions

- Operands are converted to **scalar truthiness** via **integer promotions**.
- Non‑integer scalars (pointers, floats) are also tested for zero/non‑zero after conversions.
- Beware of **side effects** in RHS that may never occur due to short‑circuit.

---

## 3) Common Idioms & Pitfalls

### 3.1 Safe dereference
```c
if (p && *p == 42) { /* RHS dereferenced only if p != NULL */ }
```

### 3.2 Accidentally using bitwise instead of logical
```c
if (mask & FLAG) { /* OK: bitwise test */ }
if (a & b) { /* tests bits; not the same as logical && */ }
```
- `&`/`|` work on bit patterns; `&&`/`||` on boolean truth values.

### 3.3 Side effects in RHS
```c
int ready();
int consume();
if (ready() && consume()) { /* consume() not called if ready()==0 */ }
```
- Know that RHS might be skipped.

### 3.4 Double negation as boolean cast
```c
int b = !!x; // normalize x to 0/1
```

---

## 4) Memory‑Level & Endianness

- Logical ops operate on **values** in registers; memory endianness is irrelevant.
- For `!`, the operand is promoted/read, then result `0/1` is stored.

---

## 5) Assembly Intuition

### 5.1 x86‑64
- `&&`/`||` commonly compile to **`cmp/test` + conditional branch** or **`setcc`/`cmov`** sequences.
  ```asm
  ; rdi = lhs, rsi = rhs
  test rdi, rdi
  je   L_false           ; for &&
  test rsi, rsi
  setne al               ; al = 1 if rhs != 0
  movzx eax, al
  ; similarly for || with inverted first branch
  ```
- `!x`: `test rdi, rdi` then `sete al` (set if equal to zero).

### 5.2 ARM Thumb‑2
- `cmp r0, #0` then conditional branch `beq/bne` and set result.
- Or use conditional select (`csel`) in AArch64 to reduce branches.

### 5.3 MIPS32 (MT7628)
- `beq $a0, $zero, L_skip` for `&&`/`||` short‑circuit patterns; set result register accordingly.

---

## 6) Embedded Notes (Timing, Branch Prediction)

- Short‑circuit introduces **branches**; mispredictions cost cycles.
- Prefer **branchless** forms (`setcc`, `cmov`, bitwise normalizations) in hot paths when supported.
- In ISR/critical sections, avoid calling heavy RHS functions that may be skipped/unpredictable.

---

## 7) Snippets (Ready to Use)

### 7.1 Normalizing to 0/1 without branches (x86)
```c
static inline int boolize_int(int x) {
    // Using !!x in C is simplest; compilers emit efficient setcc
    return !!x;
}
```

### 7.2 Guarded evaluation
```c
if (ptr && ptr->len > 0) { /* safe access */ }
```

### 7.3 Combine bit test and logical
```c
if ((reg & READY_MASK) && (reg & ERROR_MASK) == 0) { /* ... */ }
```

---

## 8) Cheat Sheet

- `!x` → 1 if x==0 else 0.
- `lhs && rhs` → RHS skipped if lhs==0.
- `lhs || rhs` → RHS skipped if lhs!=0.
- Result type always **int** (0/1).
- Avoid mixing logical and bitwise unintentionally.
- Branches cost cycles; use branchless idioms when possible.

---

*End of document.*
