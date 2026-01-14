# Complete Detailed Notes on the `short` Data Type in C (Embedded)

---

## 1. What is `short`?

`short` (a.k.a. `short int`) is a signed integer type that the C standard guarantees to be **at least 16 bits**. The standard also guarantees ordering:

```
sizeof(char) ≤ sizeof(short) ≤ sizeof(int) ≤ sizeof(long)
```

Aliases that refer to the same type:

```c
short
short int
signed short
signed short int
```

And their unsigned counterparts:

```c
unsigned short
unsigned short int
```

---

## 2. Typical Sizes Across Architectures

While the C standard does not fix exact sizes, in embedded practice `short` is almost always **16 bits (2 bytes)**:

- **8‑bit MCUs (AVR, PIC)** → `short` = 2 bytes
- **16‑bit MCUs (MSP430, PIC24)** → `short` = 2 bytes (matches word size)
- **32‑bit MCUs (ARM Cortex‑M, MIPS like MT7628/MT7621)** → `short` = 2 bytes

> On your MT7628 (MIPS, 32‑bit): `sizeof(short)` = **2**.

---

## 3. Ranges (Assuming 16-bit `short`)

- **signed short**: `−32768` to `+32767`
- **unsigned short**: `0` to `65535`

These come from two's complement representation and the number of bits:

```
signed:  −2^(n−1) .. 2^(n−1)−1
unsigned: 0 .. 2^n−1
```

For `n = 16`, that yields the ranges above.

---

## 4. Signed vs Unsigned: When to Use Which

- Use **`unsigned short` / `uint16_t`** for quantities that cannot be negative:
  - ADC readings (10/12 bits), PWM duty cycles
  - Timers, counters
  - Network port numbers, protocol length fields

- Use **`signed short` / `int16_t`** when you need negative values:
  - Sensor offsets, temperature deltas
  - Fixed‑point DSP computations (Q15 formats)

---

## 5. Integer Promotions (Critical for Correctness)

Like `char`, **`short` is promoted to `int` (or `unsigned int`)** in expressions before arithmetic is performed.

```c
short a = 30000;
short b = 10000;
short c = a + b;  // a and b promoted to int; result 40000; narrowing back to short may overflow
```

**Implications:**
- Intermediate results are computed at `int` width.
- Assigning the result back to `short` can overflow or wrap unexpectedly.

**Mitigation:**
- Widen before arithmetic or use wider destination:
  ```c
  int c = (int)a + (int)b; // or use int32_t
  ```
- Validate ranges before narrowing back to `short`.

---

## 6. Alignment and Padding

Most embedded architectures align `short` to **2‑byte boundaries**:

- Unaligned access may be slower, or on some MCUs cause a bus fault.
- Structures can include padding to satisfy alignment.

```c
struct A {
    char c;   // 1 byte
    short s;  // 2 bytes; often 1 byte padding after c on 32‑bit targets
};
// Typical sizeof(A) on a 32‑bit target: 4 bytes (1 + 1 pad + 2)
```

Design structs to minimize padding:

```c
struct B {
    short s;  // 2
    char  c;  // 1
    char  d;  // 1
};
// Often sizeof(B) = 4 without extra padding
```

---

## 7. Endianness (Byte Order) for `short`

Reading a 16‑bit quantity as bytes exposes endianness:

```c
unsigned short x = 0x1234;
unsigned char *p = (unsigned char*)&x;
```

- **Little‑endian:** `p[0]=0x34`, `p[1]=0x12`
- **Big‑endian:**   `p[0]=0x12`, `p[1]=0x34`

> Networking uses big‑endian ("network byte order"). Your SoC endianness determines in‑memory layout; be careful when parsing protocol fields.

---

## 8. Fixed‑Width Types: Prefer `int16_t`/`uint16_t`

`short` is usually 16 bits, but the **only guaranteed 16‑bit types** are `int16_t` and `uint16_t` from `<stdint.h>`.

**Best practice (embedded):**
- Use `uint16_t`/`int16_t` in public interfaces, drivers, and protocol code.
- Use `short` only for local variables when portability is not a concern.

---

## 9. Typical Embedded Uses

1. **ADC readings / sensor values:**
   ```c
   uint16_t adc = read_adc(); // 0..4095 for 12‑bit ADC
   ```
2. **Timers/counters:**
   ```c
   volatile uint16_t tick_count;
   ```
3. **Network fields (ports, lengths):**
   ```c
   uint16_t port = (buf[0] << 8) | buf[1]; // big-endian
   ```
4. **DSP fixed‑point (Q15):**
   ```c
   int16_t q15_mul(int16_t a, int16_t b) {
       // widen to 32 bits, multiply, and rescale
       int32_t prod = (int32_t)a * (int32_t)b; // 1.15 x 1.15 => 2.30
       return (int16_t)(prod >> 15);           // back to 1.15
   }
   ```

---

## 10. Common Pitfalls & How to Avoid Them

1. **Assuming `short` is always 16 bits** on non‑embedded platforms (it usually is, but only `int16_t` is guaranteed).
2. **Overflow when narrowing** results from `int` back to `short` after arithmetic.
3. **Unaligned access** of `short` fields on architectures that fault on misalignment.
4. **Endianness mistakes** when reading/writing over the wire or to hardware registers.
5. **Mixing signed/unsigned** in expressions causing unexpected promotions.

---

## 11. Code Snippets (Ready to Use)

**A. Safe addition with range check**
```c
#include <stdint.h>
#include <stdbool.h>

bool add_short_safe(int16_t a, int16_t b, int16_t *out) {
    int32_t sum = (int32_t)a + (int32_t)b; // widen
    if (sum < INT16_MIN || sum > INT16_MAX) return false; // overflow check
    *out = (int16_t)sum;
    return true;
}
```

**B. Reading big‑endian 16‑bit value from buffer**
```c
#include <stdint.h>

static inline uint16_t be16_read(const uint8_t *buf) {
    return (uint16_t)((uint16_t)buf[0] << 8 | (uint16_t)buf[1]);
}
```

**C. Writing big‑endian 16‑bit value to buffer**
```c
#include <stdint.h>

static inline void be16_write(uint8_t *buf, uint16_t v) {
    buf[0] = (uint8_t)(v >> 8);
    buf[1] = (uint8_t)(v & 0xFF);
}
```

**D. Packed struct example (be cautious, compiler/ABI dependent)**
```c
#include <stdint.h>
#pragma pack(push, 1)
struct proto_hdr {
    uint8_t  ver;
    uint16_t len; // 2-byte aligned may be packed by pragma
};
#pragma pack(pop)
```

---

## 12. Interview Q&A (Concise)

- **Q:** What is the size of `short` on your MCU?  
  **A:** Typically 2 bytes (MT7628: 2 bytes).
- **Q:** What are the ranges of signed/unsigned `short`?  
  **A:** −32768..32767 and 0..65535 (for 16‑bit).
- **Q:** Explain integer promotion for `short`.  
  **A:** Operands are promoted to `int` before arithmetic; beware of narrowing back.
- **Q:** Why prefer `uint16_t` over `unsigned short` in embedded?  
  **A:** Portability and guaranteed width.
- **Q:** How does endianness affect reading `short` from bytes?  
  **A:** Byte order flips between little/big‑endian; use helper functions.

---

## 13. Summary Checklist

- [ ] Know typical size (16 bits) and ranges.  
- [ ] Understand promotions and overflow when narrowing back.  
- [ ] Align `short` to 2 bytes and design structs to minimize padding.  
- [ ] Handle endianness correctly for protocol fields.  
- [ ] Prefer `int16_t`/`uint16_t` for portable APIs.

---

