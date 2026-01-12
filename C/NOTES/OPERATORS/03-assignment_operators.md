# Assignment & Compound Assignment Operators in C (Embedded + Memory + Assembly)

### **1. The Core Concept: L-value vs. R-value**

Before understanding `=`, you must understand *why* `a = 10` works but `10 = a` fails.

* **L-value (Locator Value):** An object that has an identifiable location in memory (an address). It can appear on the **Left** or Right of an assignment. (e.g., variables, array elements, dereferenced pointers).
* **R-value (Data Value):** A temporary value that does not have a persistent memory address. It can only appear on the **Right** side. (e.g., constants like `10`, results of math like `a + b`).

**The Operator Rule:**
The Assignment operator requires an **L-value** on the left and an **R-value** (or L-value converted to value) on the right.

---

### **2. Basic Assignment: `=`**

It copies the *value* from the right side into the *memory location* of the left side.

#### **Deep Dive: The Return Value**

In C, an assignment is an **expression**, not just a statement. **It returns the assigned value.**

* **Code:** `x = (y = 10);`
* **Logic:** `y = 10` happens first. It updates `y` and "returns" `10`. Then `x` is assigned `10`.

#### **CPU & Memory Level (`MOV` Instruction)**

Let's analyze `int a = b;` (assuming 32-bit `int`s).

1. **Memory Read:** The CPU places the address of `b` on the address bus. The memory controller sends the data (value of `b`) to the CPU.
2. **Register Storage:** The value is stored in a register (e.g., `EAX`).
3. **Memory Write:** The CPU places the address of `a` on the address bus and the value from `EAX` on the data bus to write it.

**Assembly (x86):**

```assembly
MOV EAX, [b]   ; Fetch 'b' from RAM to Register
MOV [a], EAX   ; Flush Register value to 'a' in RAM

```

---

### **3. Arithmetic Compound Assignments (`+=`, `-=`, `*=`, `/=`, `%=`)**

These are often called "syntactic sugar," but they have a massive **hidden advantage** regarding memory evaluation.

#### **The Concept**

`a += b` is roughly equivalent to `a = a + b`.

#### **The Deep Difference: "Evaluate Once"**

The most critical difference between `A += B` and `A = A + B` is that in compound assignment, **the Left Side (L-value) is evaluated only once.**

**Complex Example:**

```c
int arr[5] = {10, 20, 30, 40, 50};
int i = 1;

// Case 1: Compound Assignment
arr[i++] += 10; 
// Logic: 
// 1. Determine address of arr[i] (arr[1]). 
// 2. Increment i (i becomes 2).
// 3. Add 10 to arr[1].
// Result: arr[1] is 30. i is 2.

// Case 2: Expanded Assignment
i = 1; // reset
arr[i++] = arr[i++] + 10; 
// Logic: UNDEFINED BEHAVIOR.
// You are modifying 'i' twice in one statement. 
// Even if it worked, 'i' might increment twice, accessing arr[1] and arr[2].

```

**Takeaway:** Compound operators are safer when the destination involves side effects (like pointer increments `*p++ += 5`).

#### **CPU Optimization (Read-Modify-Write)**

For `a += 5;`, the CPU doesn't always need to load, add, and store separately. Modern CISC architectures (like x86) have specific instructions to do this directly in memory.

**Assembly for `a += 5`:**

```assembly
ADD [a], 5   ; "Add 5 directly to the value at memory address 'a'"

```

*Note: This is faster and produces smaller code size than `a = a + 5`.*

---

### **4. Bitwise Compound Assignments (`<<=`, `>>=`, `&=`, `^=`, `|=`)**

These operators modify the variable by applying bitwise logic to its own bits.

#### **Details per Operator:**

1. **`&=` (Bitwise AND Assignment):**
* **Logic:** `x &= mask`.
* **Use Case:** Clearing specific bits (turning them to 0).
* *Example:* `x &= 0xFF` keeps the lower 8 bits, zeroes the rest.


2. **`|=` (Bitwise OR Assignment):**
* **Logic:** `x |= mask`.
* **Use Case:** Setting specific bits (turning them to 1).
* *Example:* `x |= 1` forces the last bit to 1 (making the number odd).


3. **`^=` (Bitwise XOR Assignment):**
* **Logic:** `x ^= mask`.
* **Use Case:** Toggling bits (flipping 0 to 1, or 1 to 0).
* *Example:* `x ^= 1` flips the last bit.


4. **`<<=` and `>>=` (Shift Assignments):**
* **Logic:** Shifts bits left or right and updates.
* **Math Equivalent:** `x <<= 1` is `x * 2`. `x >>= 1` is `x / 2`.



#### **CPU Level (Logic Instructions)**

The CPU uses logic gates (AND, OR, XOR) in the ALU.
**Assembly for `a |= 2` (Set 2nd bit):**

```assembly
OR [a], 2    ; Perform logical OR on memory location 'a' with literal 2.

```

---

### **5. Complex Examples & Memory Analysis**

#### **Example 1: The Chained Assignment Trap**

```c
int a, b, c;
a = b = c = 10;

```

* **Working:** Parsed Right-to-Left.
1. `c = 10` (Returns 10).
2. `b = 10` (Returns 10).
3. `a = 10`.


* **Memory:** All three memory addresses receive the value 10 sequentially.

#### **Example 2: Pointer Aliasing (Deep Concept)**

Aliasing happens when two pointers point to the same address. Assignment operators must handle this gracefully.

```c
void update(int *p, int *q) {
    *p += *q; 
}
// Calling: 
int x = 10;
update(&x, &x); 

```

* **Memory Operation:**
1. CPU loads `*p` (which is `x`, 10).
2. CPU loads `*q` (which is also `x`, 10).
3. Adds them (20).
4. Stores 20 back to `*p` (`x`).


* Even though it looks like adding two different things, the CPU simply fetches from the address.

---

### **6. Tricky Interview Questions**

#### **Q1: The Boolean Toggle**

**Q:** How do you toggle a variable `flag` between 0 and 1 efficiently using assignment operators?
**A:** `flag ^= 1;`

* **Why:** XOR with 1 flips the bit.
* If `0` (binary `0`): `0 ^ 1 = 1`
* If `1` (binary `1`): `1 ^ 1 = 0`


* **CPU:** Single instruction (`XOR`), incredibly fast.

#### **Q2: Self-Assignment**

**Q:** What happens in `x ^= x;`?
**A:** `x` becomes 0.

* **Why:** Any number XORed with itself is 0.
* **Optimization:** This is actually a common assembly trick (`XOR EAX, EAX`) to set a register to zero because it is faster than `MOV EAX, 0`.

#### **Q3: Truncation in Assignment**

**Q:** What is the value of `x`?

```c
int x;
float f = 5.9;
x = f;

```

**A:** `x` is 5.

* **Deep Reason:** Implicit Type Casting. When assigning Float to Int, the decimal part is **truncated** (chopped off), not rounded.
* **CPU:** Uses `CVTTSS2SI` (Convert with Truncation Scalar Single-Precision to Signed Integer).

---

### **Summary Table**

| Operator | Evaluates Left Side... | CPU Instruction Example | Primary Use Case |
| --- | --- | --- | --- |
| `=` | Once | `MOV` | Setting initial values. |
| `+=` | Once | `ADD` | Accumulators, Counters. |
| `&=` | Once | `AND` | Masking (Clearing) bits. |
| ` | =` | Once | `OR` |
| `^=` | Once | `XOR` | Toggling bits. |
| `<<=` | Once | `SAL`/`SHL` | Fast multiplication by . |



---
---
---
---
---




# Assignment & Compound Assignment Operators in C (Embedded + Memory + Assembly)

This document covers **assignment** (`=`) and **compound assignment** operators:

```
=   +=   -=   *=   /=   %=   <<=   >>=   &=   ^=   |=
```

with **exact semantics**, **promotions/conversions**, **read‑modify‑write behavior**, **undefined/implementation‑defined cases**, **volatile/MMIO notes**, **memory‑level effects**, and **assembly examples** for x86‑64, ARM Thumb‑2, and **MIPS32 (MT7628)**.

---

## 1) Semantics & Associativity

- **Simple assignment `=`**: evaluates RHS, **converts to the type of LHS**, and stores the result into LHS. Expression value is the stored LHS; type is the type of LHS.
- **Compound assignment** `op=` (e.g., `+=`) is equivalent to `x = x op y`, **except** it may evaluate `x` only once and apply appropriate **usual arithmetic conversions**.
- **Associativity**: assignment operators are **right‑to‑left**.
  ```c
  a = b = c; // b=c; then a=b;
  ```

### 1.1 LHS requirements
- LHS must be a **modifiable lvalue**.
- Not allowed: assigning to array names, const objects, or non‑lvalues.

---

## 2) Promotions, Conversions & the Subtle Difference in `op=`

### 2.1 Usual arithmetic conversions
- For `x op= y`, both operands are converted as in `x op y` (integer promotions, balancing to common type). The **final result is converted back** to the type of `x` and stored.

### 2.2 Example
```c
short s = 30000;  // 16-bit
s += 10000;       // compute in int (promoted), result 40000 -> narrowed to short (overflow, implementation-defined for signed)
```

### 2.3 Mixed signed/unsigned (pitfall)
```c
unsigned u = 1;
int      i = -2;
u += i;           // computes in unsigned domain; result wraps
```
**Always keep types consistent** in compound assignments.

### 2.4 Shift assignments & usual conversions
- `x <<= y`, `x >>= y` convert `y` to an **unsigned integer type** used for the shift count; **negative counts or counts ≥ width** are **Undefined Behavior (UB)**.

---

## 3) Read‑Modify‑Write (RMW) & Volatile/MMIO

- Compound assignment is conceptually **RMW**: read `x`, compute `x op y`, write back.
- For **`volatile`** objects (e.g., MMIO registers), the read and write **must occur**.
- Side effects on read (e.g., status consumed) or write (e.g., clearing bits) mean `x op= y` can be **unsafe** unless the register is documented to allow RMW.

**Safer register idiom:**
```c
#define REG32(addr) (*(volatile uint32_t *)(addr))
uint32_t r = REG32(0x1000);   // explicit read
r |= (1u << 5);               // modify in CPU
REG32(0x1000) = r;            // explicit write
```

---

## 4) Undefined / Implementation‑Defined Cases

- **Signed overflow** in `+=`, `-=`, `*=` is **UB**.
- **Integer divide/mod by zero** in `/=`, `%=` is **UB**.
- **Shift** by negative or ≥ width in `<<=`/`>>=` is **UB**.
- **Right shift of signed negative** with `>>=` can be **implementation‑defined** (arithmetic vs logical). Prefer **unsigned** for bit shifts.

---

## 5) Memory‑Level Effects & Endianness

- Assignment writes a **new bit pattern** to the LHS memory, respecting **endianness** (byte order). Arithmetic occurs in registers; memory holds the final converted value.
- For compound assignment on integers: read bytes → widen/promote → compute → narrow/store bytes.
- For floating point compound assignment: compute in FP (FPU/soft‑fp) → store IEEE‑754 bit pattern.

---

## 6) Assembly Intuition (x86‑64, ARM, MIPS32)

### 6.1 Simple assignment `=`
- **Register to register**: `mov rdest, rsrc`
- **Immediate to memory**: `mov dword ptr [x], imm32`

### 6.2 Compound `+=` / `-=` / `*=` / `/=` / `%=`
- **x86‑64** (typical forms):
  ```asm
  add dword ptr [x], 1    ; x += 1
  sub dword ptr [x], 1    ; x -= 1
  imul dword ptr [x], ebx ; x *= ebx  (compilers often do: mov -> imul -> mov)
  ; division often: mov -> cdq -> idiv r/m -> store back
  ```
- **ARM Thumb‑2**:
  ```asm
  adds r0, r0, r1   ; x += y (registers)
  subs r0, r0, r1   ; x -= y
  muls r0, r0, r1   ; x *= y
  sdiv r0, r0, r1   ; x /= y (if available)
  ```
- **MIPS32 (MT7628)**:
  ```asm
  lw   $t0, x       ; load
  addu $t0, $t0, $t1; x += y
  sw   $t0, x       ; store back
  ; multiply: mult $t0, $t1; mflo $t0; sw $t0, x
  ; divide:   div  $t0, $t1; mflo $t0; sw $t0, x
  ```

### 6.3 Bitwise compound `&=`, `|=`, `^=` and shifts `<<=`, `>>=`
- **x86‑64**:
  ```asm
  and dword ptr [x], ebx  ; x &= ebx
  or  dword ptr [x], ebx  ; x |= ebx
  xor dword ptr [x], ebx  ; x ^= ebx
  shl dword ptr [x], cl   ; x <<= cl (count in CL)
  sar dword ptr [x], cl   ; x >>= cl (arithmetic)
  ```
- **ARM Thumb‑2**: `ands/orrs/eors`, `lsls/lsrs/asrs`
- **MIPS32**: `and/or/xor`, `sll/srl/sra`

---

## 7) Common Interview Pitfalls & Fixes

1. **Assuming `x op= y` and `x = x op y` always identical**: they differ when `x` has side effects (e.g., volatile/MMIO or complicated lvalues). `op=` evaluates LHS **once**.
2. **Mixed signed/unsigned in compound ops**: leads to surprises; keep types consistent.
3. **Shifts with invalid counts**: UB; always bound the count.
4. **`/=` and `%=` on integers**: guard against zero; for floats, `/= 0.0` yields Inf/NaN.
5. **RMW on MMIO registers without documentation**: can be dangerous.

---

## 8) Embedded Best Practices

- Use **fixed‑width types** (`uint32_t`, `int32_t`) in RMW operations.
- Prefer **unsigned** for bitwise compound ops and shifts.
- For MMIO, use explicit **read‑modify‑write** sequences and masks; avoid blind `x |= y` if register read has side effects.
- Consider **critical sections** / **atomics** when multiple contexts can modify the same object.

---

## 9) Snippets (Ready to Use)

### 9.1 Safe masked set/clear
```c
uint32_t set_bits(uint32_t v, uint32_t mask) { return v | mask; }
uint32_t clr_bits(uint32_t v, uint32_t mask) { return v & ~mask; }
```

### 9.2 Bound shift count
```c
uint32_t safe_lshift(uint32_t v, unsigned n) {
    n &= 31u; // limit to 0..31
    return v << n;
}
```

### 9.3 RMW on volatile register (explicit)
```c
volatile uint32_t *REG = (volatile uint32_t *)0x1000;
uint32_t r = *REG;
r |= (1u << 7);
*REG = r;
```

---

## 10) Cheat Sheet

- Assignment is **right‑to‑left**.
- `op=` applies usual conversions once; evaluates LHS **once**.
- Signed overflow UB; integer divide/mod by zero UB.
- Shifts: invalid counts UB; right shift of signed negative is implementation‑defined.
- Prefer unsigned for bitwise ops; fixed‑width types for registers.
- For MMIO, use explicit RMW and masks.

---

*End of document.*
