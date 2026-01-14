# 6. Bitwise Operators in C (Embedded Focus)

### **Bitwise Operators: `&` `|` `^` `~` `<<` `>>`**

This is the most powerful section of C. While other languages hide the hardware, C hands you the keys to the engine room. These operators work directly on the **binary bits** (0s and 1s) stored in memory, making them the primary tools for systems programming, cryptography, and embedded systems.

---

### **1. The Core Concept: The "Parallel" Operation**

Unlike logical operators (`&&`, `||`) which make decisions, Bitwise operators perform math on **every bit independently and simultaneously**.

If you have a 32-bit integer, the CPU's ALU (Arithmetic Logic Unit) contains 32 parallel circuits to perform the operation on all 32 bits in a **single clock cycle**. This makes bitwise operations the fastest instructions a CPU can execute.

---

### **2. The Operators Deep Dive**

Let's analyze using 8-bit examples for clarity.
Assume `A = 12` (`0000 1100`) and `B = 10` (`0000 1010`).

#### **A. Bitwise AND (`&`) - The "Masker"**

* **Logic:** Returns 1 only if **both** bits are 1.
* **Deep Use Case:** **Masking**. We use it to force specific bits to 0 (turn them off) or to "read" specific bits.
* **Example:**
```text
  0000 1100  (A)
& 0000 1010  (B)
-----------
  0000 1000  (Result: 8)

```



#### **B. Bitwise OR (`|`) - The "Setter"**

* **Logic:** Returns 1 if **either** bit is 1.
* **Deep Use Case:** **Setting flags**. We use it to force specific bits to 1 (turn them on) without affecting others.
* **Example:**
```text
  0000 1100  (A)
| 0000 1010  (B)
-----------
  0000 1110  (Result: 14)

```



#### **C. Bitwise XOR (`^`) - The "Toggler"**

* **Logic:** Returns 1 if bits are **different**. (Exclusive OR).
* **Deep Use Case:** **Toggling**. If you XOR a bit with `1`, it flips. If with `0`, it stays same. Also used heavily in Cryptography and Hash functions.
* **Example:**
```text
  0000 1100  (A)
^ 0000 1010  (B)
-----------
  0000 0110  (Result: 6)

```



#### **D. Bitwise NOT (`~`) - The "Inverter"**

* **Logic:** Flips every bit. 0 becomes 1, 1 becomes 0.
* **Deep Concept:** `~x` is mathematically equal to `-(x + 1)` in Two's Complement representation.
* **Example:** `~12`
```text
~ 0000 1100
-----------
  1111 0011  (Result: -13 in signed 8-bit)

```



---

### **3. The Shift Operators (`<<` `>>`)**

These move bits left or right. This is where the hardware architecture becomes very visible.

#### **Left Shift (`<<`)**

* **Action:** Moves bits left. Fills new empty spots on the right with **0**.
* **Math Equivalent:** `x << n` multiplies `x` by .
* **Overflow:** Bits shifted off the left edge are **lost forever**.

#### **Right Shift (`>>`) - The Dangerous One**

* **Action:** Moves bits right. Bits falling off the right edge are lost.
* **Math Equivalent:** `x >> n` divides `x` by  (integer division).
* **The Trap (Sign Extension):** How does the CPU fill the empty spots on the left?
* **Unsigned Type:** Fills with **0** (Logical Shift).
* **Signed Type (Negative Value):** Implementation Defined (usually fills with **1s** to preserve the negative sign). This is called **Arithmetic Shift**.



---

### **4. Under the Hood: CPU Instructions**

The x86 architecture has dedicated instructions that correspond 1:1 with C operators.

| C Operator | x86 Instruction | Description |
| --- | --- | --- |
| `&` | `AND` | Bitwise AND. Updates flags (Zero Flag if result is 0). |
| ` | ` | `OR` |
| `^` | `XOR` | Bitwise XOR. |
| `~` | `NOT` | One's Complement Negation. |
| `<<` | `SHL` / `SAL` | Shift Logical/Arithmetic Left (Identical behavior). |
| `>>` (Unsigned) | `SHR` | Shift **Logical** Right (fills with 0). |
| `>>` (Signed) | `SAR` | Shift **Arithmetic** Right (fills with Sign Bit). |

*Deep Insight:* Notice `SHR` vs `SAR`. The compiler chooses which instruction to use based on whether you declared your variable as `int` or `unsigned int`. This is why types matter!

---

### **5. Complex Examples & Memory Manipulation**

#### **Example 1: Packing Data (The "Embedded" Way)**

Imagine you need to send a Date (Day, Month, Year) to a device, but you only have 2 bytes (16 bits) of bandwidth.

* Day (1-31): Needs 5 bits.
* Month (1-12): Needs 4 bits.
* Year (0-99): Needs 7 bits.
* Total: 16 bits.

```c
unsigned short pack_date(int day, int month, int year) {
    unsigned short data = 0;
    
    // 1. Place Year (7 bits) at the bottom
    data |= (year & 0x7F); // 0x7F is 01111111 (Safety Mask)
    
    // 2. Place Month (4 bits) shifted left by 7
    data |= ((month & 0x0F) << 7);
    
    // 3. Place Day (5 bits) shifted left by 11 (7+4)
    data |= ((day & 0x1F) << 11);
    
    return data;
}

```

**Memory Level:** You have compressed 3 distinct integers (usually taking 12 bytes) into 2 bytes perfectly.

#### **Example 2: XOR Swap (The Magic Trick)**

Swapping two variables without a temporary variable.

```c
int a = 5, b = 9;
a ^= b;
b ^= a;
a ^= b;

```

**Why it works:** XOR is reversible. `(A ^ B) ^ B` = `A`.
**CPU Level:** While clever, this is actually **slower** on modern CPUs than using a temp variable because of "instruction dependency" (the CPU must finish the first line before starting the second).

---

### **6. Tricky Interview Questions**

#### **Q1: Checking for Power of 2**

**Q:** Write a fast one-liner to check if `x` is a power of 2 (e.g., 2, 4, 8, 16).
**A:** `bool isPowerOf2 = (x > 0) && ((x & (x - 1)) == 0);`

* **Deep Explanation:**
* Power of 2 in binary has exactly one `1` bit (e.g., 8 is `1000`).
* `x - 1` flips all bits up to that `1` (e.g., 7 is `0111`).
* `1000 & 0111` is `0000`.
* Any non-power of 2 will leave a remainder.



#### **Q2: The "Undefined" Shift**

**Q:** What is the result of `1 << 33` on a 32-bit machine?
**A:** **Undefined Behavior.**

* The C standard says if you shift by a number greater than or equal to the width of the type, the result is garbage.
* **Hardware Reality:** Intel CPUs mask the shift count. They actually do `1 << (33 % 32)`, so `1 << 1` = 2. But you cannot rely on this; the compiler might assume code is dead and remove it.

#### **Q3: `~` vs `!**`

**Q:** If `x = 0`, what is `!x` and what is `~x`?
**A:**

* `!0` (Logical NOT) = `1` (True).
* `~0` (Bitwise NOT) = `1111...1111` (All ones).
* In signed integer math, `~0` is **-1**.



---

### **Summary Table: Operator Group 6**

| Operator | Name | Logic | Key Use Case | CPU Instruction |
| --- | --- | --- | --- | --- |
| **`&`** | AND | Both 1? | Masking (Clearing bits). | `AND` |
| **` | `** | OR | Either 1? | Setting bits. |
| **`^`** | XOR | Different? | Toggling / Comparison. | `XOR` |
| **`~`** | NOT | Flip All | Inversion. | `NOT` |
| **`<<`** | Left Shift | Move Left | Multiply by 2. | `SHL` |
| **`>>`** | Right Shift | Move Right | Divide by 2 / Sign Extend. | `SHR` (Unsigned) / `SAR` (Signed) |


---
---
---
---
---

Operators:
```
&   |   ^   ~   <<   >>
```
This document explains **every operator** with **embedded-friendly patterns**, **complex problem breakdowns**, and **many examples with solutions**. We keep CPU details minimal and assume a typical 32‑bit little‑endian host where needed.

---

## 1) Quick Meaning

- `&` (AND): keeps bits set in **both** operands.
- `|` (OR): sets bits that are set in **either** operand.
- `^` (XOR): sets bits that differ; toggles bits.
- `~` (NOT): flips **all** bits.
- `<<` (left shift): moves bits **left**, fills right with zeros.
- `>>` (right shift): moves bits **right**; for **unsigned** → zero-fill; for **signed negative** → **implementation‑defined** (arithmetic vs logical). **Use unsigned** for portable shifts.

---

## 2) Integer Promotions & Safety Rules

- Operands undergo **integer promotions** and usual conversions before operation.
- **Shift count** must be **0 ≤ n < width** of the promoted left operand. Otherwise: **Undefined Behavior (UB)**.
- Prefer **`uint32_t/uint64_t`** for register/mask work.

---

## 3) Common Embedded Tasks (Solved with Bitwise Ops)

### 3.1 Set, Clear, Toggle, Test a Bit
```c
#define BIT(n)        (1u << (n))
#define SET(v,n)      ((v) |= BIT(n))
#define CLR(v,n)      ((v) &= ~BIT(n))
#define TOG(v,n)      ((v) ^= BIT(n))
#define TST(v,n)      (((v) & BIT(n)) != 0)
```
**Explanation**: `SET` uses OR, `CLR` uses AND with inverted mask, `TOG` uses XOR, `TST` uses AND.

### 3.2 Extract/Insert a Field (bit slice)
```c
#define FIELD_MASK(width, pos)   (((1u << (width)) - 1u) << (pos))
#define GET_FIELD(v, width, pos) (((v) >> (pos)) & ((1u << (width)) - 1u))
#define SET_FIELD(v, f, width, pos) \
    ( (v) = ((v) & ~FIELD_MASK(width,pos)) | (((f) & ((1u << (width)) - 1u)) << (pos)) )
```
**Use case**: reading/writing register fields, protocol header subfields.

### 3.3 Combine Flags Into One Word
```c
enum { F_RX=1u<<0, F_TX=1u<<1, F_ERR=1u<<2 };
uint32_t status = F_RX | F_TX;       // set two flags at once
if ((status & (F_RX | F_ERR)) != 0) { /* either RX or ERR active */ }
```

### 3.4 Align Up/Down to Power of Two
```c
uint32_t align_up_pow2(uint32_t x, uint32_t a) { // a must be power of 2
    return (x + (a - 1u)) & ~(a - 1u);
}
uint32_t align_dn_pow2(uint32_t x, uint32_t a) { // a power of 2
    return x & ~(a - 1u);
}
```
**Explanation**: masking clears lower bits to align boundary.

### 3.5 Compute Parity (odd number of set bits)
```c
int parity_u32(uint32_t x) {
    x ^= x >> 16; x ^= x >> 8; x ^= x >> 4; x &= 0xFu; // fold
    return (0x6996u >> x) & 1u; // lookup nibble parity
}
```

### 3.6 Branchless Min/Max (integer)
```c
uint32_t max_u32(uint32_t a, uint32_t b) {
    uint32_t m = (a - b) >> 31;      // 0xFFFFFFFF if a<b, else 0
    return a - (m & (a - b));        // select b when a<b
}
```
*(For clarity/safety in production, prefer straightforward comparisons; branchless tricks help in tight loops.)*

### 3.7 Packing/Unpacking Bytes
```c
uint32_t pack_be(uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3) {
    return ((uint32_t)b0<<24) | ((uint32_t)b1<<16) | ((uint32_t)b2<<8) | (uint32_t)b3;
}
void unpack_be(uint32_t v, uint8_t *b0, uint8_t *b1, uint8_t *b2, uint8_t *b3) {
    *b0 = (v>>24)&0xFF; *b1=(v>>16)&0xFF; *b2=(v>>8)&0xFF; *b3=v&0xFF;
}
```

---

## 4) Advanced Patterns (Make Big Problems Simple)

### 4.1 Fixed‑Point Math (Q Form)
Use shifts to scale integers as fractions.
```c
// Q15: 1.15 fixed-point multiply → result Q30, rescale to Q15
int16_t q15_mul(int16_t a, int16_t b) {
    int32_t p = (int32_t)a * (int32_t)b; // 2.30
    return (int16_t)(p >> 15);           // back to 1.15
}
```

### 4.2 Fast Division/Modulo by Power of Two
```c
uint32_t div_pow2_u32(uint32_t x, unsigned n) { return x >> n; }
uint32_t mod_pow2_u32(uint32_t x, unsigned n) { return x & ((1u<<n)-1u); }
```

### 4.3 Rolling Checksums / Bitwise Hashing
```c
uint32_t rotl32(uint32_t x, unsigned r) {
    r &= 31u; return (x<<r) | (x>>(32u-r)); // rotate left
}
```

### 4.4 State Machines With Bitsets
```c
#define S_IDLE  (1u<<0)
#define S_BUSY  (1u<<1)
#define S_ERR   (1u<<2)
uint32_t st = S_IDLE;
// Transition: IDLE→BUSY
if (st & S_IDLE) { st = (st & ~S_IDLE) | S_BUSY; }
```

### 4.5 Boolean Normalization
```c
int b = !!(x & MASK); // convert test to 0/1
```

---

## 5) Pitfalls & How to Avoid

- **Signed right shift** of negative values is **implementation‑defined**. Use **unsigned** types for portable bit shifts.
- **Shift count** outside range → **UB**. Always mask count: `n &= 31u` for 32‑bit.
- **Operator precedence**: `&`/`^`/`|` bind **lower** than `==`/`!=`? (No; equality is lower than bitwise). Use parentheses.
- **Aliasing**: bitwise ops work on integers; for raw bytes of structures, use `memcpy` or `unsigned char*` views—avoid type punning via pointer casts.

---

## 6) Worked Examples (Step‑by‑Step)

### Example A: Parse a 32‑bit Register
Register layout:
- bits 0..2: MODE (3 bits)
- bit  3   : ENABLE
- bits 8..15: LENGTH (8 bits)
```c
uint32_t reg = READ();
unsigned mode   = (reg >> 0) & 0x7u;
unsigned enable = (reg >> 3) & 0x1u;
unsigned length = (reg >> 8) & 0xFFu;
```
Set MODE=5, ENABLE=1, LENGTH=42:
```c
reg &= ~((0x7u<<0) | (1u<<3) | (0xFFu<<8));
reg |= (5u<<0) | (1u<<3) | (42u<<8);
WRITE(reg);
```

### Example B: Circular Buffer Indexing (power‑of‑2 length)
```c
#define BUF_LEN 64u // power of 2
uint32_t head = 0;
head = (head + 1u) & (BUF_LEN - 1u); // cheap wrap
```

### Example C: Fast Masked Compare
Check if exactly bits (2 and 5) are set and nothing else:
```c
uint32_t v;
if ((v & ((1u<<2)|(1u<<5))) == ((1u<<2)|(1u<<5))) {
    if ((v & ~((1u<<2)|(1u<<5))) == 0u) {
        /* only those bits set */
    }
}
```

---

## 7) Cheat Sheet

- Use **unsigned fixed‑width types**.
- Mask counts for shifts: `n &= (width-1)`.
- Pack/unpack with shifts/OR; slice with masks/AND.
- Align with `& ~(a-1)` when `a` is power of two.
- Avoid signed right shifts; avoid out‑of‑range shift counts (UB).

---

*End of document.*
