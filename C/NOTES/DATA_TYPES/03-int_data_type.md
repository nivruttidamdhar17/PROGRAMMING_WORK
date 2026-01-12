# Complete Detailed Notes on the `int` Data Type in C (Embedded)

---

## 1) What is `int`?

`int` is the primary signed integer type intended to map efficiently to the target CPU’s natural word size. The C standard does not fix its exact bit-width; it only guarantees the ordering:

```
sizeof(char) ≤ sizeof(short) ≤ sizeof(int) ≤ sizeof(long)
```

In practice:
- **8/16‑bit MCUs (AVR, PIC, MSP430):** `int` is typically **16 bits (2 bytes)**.
- **32‑bit MCUs/SoCs (ARM Cortex‑M, MIPS MT7628/MT7621, x86):** `int` is typically **32 bits (4 bytes)**.

> On MIPS‑based MT7628/MT7621 (32‑bit): `sizeof(int) == 4`.

---

## 2) ABI Models & Portability

Common data model ABIs:
- **ILP32:** `int`, `long`, and pointers are 32‑bit (typical on 32‑bit embedded targets: ARM/MIPS).
- **LP64:** `int` is 32‑bit; `long` and pointers are 64‑bit (Linux/x86_64, many UNIX‑likes).
- **LLP64:** `int` and `long` are 32‑bit; `long long` and pointers are 64‑bit (Windows 64‑bit).

**Implication:** Libraries that require fixed widths should use `<stdint.h>` types (`int32_t`, `uint32_t`) rather than plain `int`.

---

## 3) Size, Range, Representation

Assuming two’s complement (ubiquitous in modern MCUs):

- **16‑bit `int`:** range `−32768 .. +32767`
- **32‑bit `int`:** range `−2,147,483,648 .. +2,147,483,647`

Query limits via `<limits.h>`:
```c
#include <limits.h>
printf("%d .. %d\n", INT_MIN, INT_MAX);
```

Unsigned counterpart ranges:
- **`unsigned int` (16‑bit):** `0 .. 65535`
- **`unsigned int` (32‑bit):** `0 .. 4294967295`

---

## 4) Signed vs Unsigned: Choosing Correctly

- Use **`int` (signed)** for values that may be negative (deltas, error codes, signed math).
- Use **`unsigned int`** for counts, bit masks, sizes, timer ticks, register fields.
- For exact widths and protocol/reg definitions, prefer **`int32_t`/`uint32_t`**.

---

## 5) Integer Promotions & Usual Arithmetic Conversions

Types narrower than `int` (e.g., `char`, `short`) are **promoted to `int`** (or `unsigned int`) before arithmetic.

```c
short a = 30000, b = 10000;
int r = a + b;       // r = 40000 (safe)
short s = a + b;     // narrowing back to short may overflow
```

**Mixing signed/unsigned:**
```c
int si = -1;
unsigned int ui = 1;
printf("%u\n", si + ui); // result is unsigned due to usual conversions
```
Keep expressions consistently signed or unsigned unless deliberate.

---

## 6) Overflow & Undefined Behavior (UB)

- **Signed overflow is UB** — do not rely on wraparound.
- **Unsigned overflow is well‑defined** (wrap modulo 2^n).

```c
int x = INT_MAX; x++;         // UB
unsigned int u = UINT_MAX; u++; // becomes 0
```

If wraparound is intended, use `unsigned` or add range checks.

---

## 7) Casting: Upcast/Downcast & Signed/Unsigned Conversions

### Widening casts (safe):
`int` → `long`/`long long` (no information loss).

### Narrowing casts (risky):
`long` → `int` may truncate; check ranges before narrowing.

### Signed ↔ Unsigned:
```c
int s = -42;
unsigned int u = (unsigned int)s; // modulo 2^32 reinterpretation on 32‑bit
```
This yields a large positive value (e.g., `4294967254`).

### Pointer aliasing caution:
Reading an `int` via an unrelated pointer type (e.g., `float*`) is **undefined behavior**. Use `memcpy` or access through `unsigned char*` for raw bytes.

---

## 8) Endianness & `int`

Inspect bytes with `unsigned char*`:
```c
int x = 0x11223344;
unsigned char *p = (unsigned char*)&x;
// Little‑endian: 44 33 22 11
// Big‑endian:    11 22 33 44
```
Networking uses big‑endian; convert explicitly (manual shifts or host APIs on hosted platforms).

---

## 9) Alignment & Struct Padding

Typical alignment:
- 16‑bit `int`: align to 2
- 32‑bit `int`: align to 4

```c
struct S {
    char c;  // 1
    int  i;  // 4; 3 bytes padding before i on 32‑bit
}; // sizeof(S) often 8
```
Reorder fields to reduce padding.

---

## 10) Bitfields with `int` (Use Carefully)

```c
struct BF {
    unsigned int f1 : 5;
    unsigned int f2 : 3;
};
```
Bitfield layout, allocation unit, and endianness are **implementation‑defined**. Avoid bitfields for wire protocols; use masks/shifts.

---

## 11) `volatile int` (ISRs & HW Registers)

`volatile` prevents the compiler from removing/access reordering of loads/stores:
```c
volatile int flag; // set in ISR, polled in main loop
```
It does **not** make operations atomic; use critical sections or atomics (`<stdatomic.h>`) where needed.

---

## 12) `printf`/`scanf` Specifiers

- `int`: `%d` (signed), `%u` (unsigned)
- `long`: `%ld`/`%lu`
- `long long`: `%lld`/`%llu`

Always match specifiers to type and signedness (mismatch is UB).

---

## 13) Limits & Fixed‑Width Types

Headers:
- `<limits.h>`: `INT_MIN`, `INT_MAX`, `UINT_MAX`
- `<stdint.h>`: `int32_t`, `uint32_t`, `INT32_MAX`, `UINT32_MAX`

Prefer fixed‑width types when size matters (drivers, protocols, serialization).

---

## 14) Performance Notes (Embedded)

- On 8/16‑bit MCUs, 32‑bit `int` arithmetic may be slower.
- On 32‑bit MCUs, `int` (32‑bit) matches word size and is fastest.
- Avoid FP (`float/double`) unless necessary; prefer integer/fixed‑point math.

---

## 15) Common Pitfalls & Remedies

1. Assuming `int` is always 32‑bit → use `<stdint.h>` types when width matters.
2. Relying on signed wrap → UB; switch to unsigned or check ranges.
3. Mixing signed/unsigned unintentionally → surprising conversions; keep consistent.
4. Wrong `printf` specifier → UB; always match `%d/%u`, `%ld/%lu`, etc.
5. Endianness mistakes → define byte‑order handling explicitly.
6. Bitfields for protocols → avoid; use masks/shifts in explicit integer types.

---

## 16) Ready‑to‑Use Snippets

**A) Safe add with overflow detection (32‑bit `int`)**
```c
#include <limits.h>
#include <stdbool.h>

bool add_int_safe(int a, int b, int *out) {
    if ((b > 0 && a > INT_MAX - b) ||
        (b < 0 && a < INT_MIN - b)) {
        return false; // would overflow
    }
    *out = a + b;
    return true;
}
```

**B) Endian‑safe 32‑bit serialization**
```c
#include <stdint.h>

void u32_to_be(uint8_t *buf, uint32_t v) {
    buf[0] = (uint8_t)(v >> 24);
    buf[1] = (uint8_t)(v >> 16);
    buf[2] = (uint8_t)(v >> 8);
    buf[3] = (uint8_t)(v);
}

uint32_t be_to_u32(const uint8_t *buf) {
    return ((uint32_t)buf[0] << 24) |
           ((uint32_t)buf[1] << 16) |
           ((uint32_t)buf[2] << 8)  |
           (uint32_t)buf[3];
}
```

**C) Keep signedness consistent**
```c
uint32_t len = 10;
int32_t  diff = -2;
int32_t total = diff + (int32_t)len; // explicit, predictable
```

**D) Safe reinterpretation (avoid aliasing UB)**
```c
#include <stdint.h>
#include <string.h>

float reinterpret_u32_as_float(uint32_t u) {
    float f; memcpy(&f, &u, sizeof f); return f;
}
```

---

## 17) Interview Quick Checks

- What is `sizeof(int)` on your target? → 4 bytes on MIPS MT7628.
- What happens on signed overflow? → Undefined behavior.
- Why prefer `uint32_t` over `unsigned int`? → Guaranteed width and portability.
- Explain integer promotions. → Narrow types promote to `int`/`unsigned int` before arithmetic.
- Print an `unsigned int`. → `%u`.
- Handle endianness? → Byte swaps/manual shifts; network order is big‑endian.

---

## 18) Summary

- `int` size varies by architecture (16 or 32 bits commonly).
- Signed overflow = UB; unsigned overflow wraps.
- Beware promotions and signed/unsigned mixing.
- Prefer fixed‑width types where size matters.
- Manage alignment, padding, and endianness explicitly.
- Match `printf` formats to types.

---
