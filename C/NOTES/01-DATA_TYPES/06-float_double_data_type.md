# Deep Dive: `float` and `double` in C

This document gives a **complete, memory-level explanation** of how `float` and `double` work in C, how they are **represented, stored, serialized**, and how to **compute with them safely** in embedded systems. It covers **IEEE‑754 layout**, **special values**, **rounding**, **precision**, **endianness**, **aliasing**, **printf/scanf**, and **best practices**.

> **Note:** While the C standard does not strictly require IEEE‑754, mainstream embedded and desktop toolchains (ARM, MIPS, x86) implement IEEE‑754 binary32 (`float`) and binary64 (`double`). Always confirm your specific compiler/ABI when precision or width is critical.

---

## 1) Sizes and Where They Live

- **Typical sizes** (on most modern platforms):
  - `float`  → 32 bits (4 bytes) — IEEE‑754 **binary32**
  - `double` → 64 bits (8 bytes) — IEEE‑754 **binary64**
- **Memory segments** in embedded firmware:
  - **`.text`** → code
  - **`.rodata`** → FP constants (e.g., `const double pi = ...`)
  - **`.data`** → initialized globals
  - **`.bss`** → uninitialized globals
  - **stack** → local `float`/`double` variables and temporaries
  - **heap** → dynamic allocations

---

## 2) IEEE‑754 Representation (Binary32 and Binary64)

### 2.1 Layout (bit fields)

**binary32 (`float`, 32 bits):**
- **Sign**: 1 bit
- **Exponent**: 8 bits (biased by 127)
- **Fraction (mantissa)**: 23 bits (implicit leading 1 for normalized numbers)

Bit indexing (MSB→LSB):
```
[31]     [30..23]      [22..0]
 sign |  exponent  |   fraction
```

**binary64 (`double`, 64 bits):**
- **Sign**: 1 bit
- **Exponent**: 11 bits (biased by 1023)
- **Fraction (mantissa)**: 52 bits (implicit leading 1 for normalized numbers)

Bit indexing:
```
[63]       [62..52]           [51..0]
 sign |    exponent     |     fraction
```

### 2.2 Value decoding

For both formats (normalized numbers):
```
value = (-1)^sign × 2^(exponent - bias) × (1.fraction)
```
where `fraction` is the binary fraction `0.b1 b2 b3 ...` formed from mantissa bits.

- **Bias**: 127 for `float`, 1023 for `double`.
- **Exponent all zeros** → **subnormals** or **zero** (see below).
- **Exponent all ones** → **NaN** or **Infinity** (see below).

### 2.3 Special cases

- **Zero**: exponent = 0, fraction = 0; sign distinguishes +0 and −0.
- **Subnormals (denormals)**: exponent = 0, fraction ≠ 0; leading 1 is **not** assumed; value:
  ```
  (-1)^sign × 2^(1 - bias) × (0.fraction)
  ```
  Subnormals fill the gap below the smallest normalized value.
- **Infinity**: exponent = all 1s, fraction = 0; sign chooses +∞ or −∞.
- **NaN (Not a Number)**: exponent = all 1s, fraction ≠ 0; signaling v. quiet NaN implementation‑defined. Comparisons with NaN are always false (even `NaN == NaN`).

---

## 3) Precision, Units in Last Place (ULP), and Rounding

- **Precision:**
  - `float` ≈ **6–7 decimal digits** of precision
  - `double` ≈ **15–17 decimal digits** of precision
- **ULP:** Distance between adjacent representable floating values near a given number.
- **Rounding mode:** Usually **round to nearest, ties to even** (IEEE‑754 default). Others (toward ±∞, toward zero) may be supported via FPU control.

**Example:** Why `0.1f` isn’t exact
- `0.1` in decimal has a **non‑terminating binary expansion**, so `float` stores the nearest representable binary32 value. Computations accumulate rounding error.

---

## 4) How the Bits Map to Memory (Endianness)

### 4.1 Endianness
- **Little‑endian** (x86, many ARM/MIPS configurations): least significant byte at lowest address.
- **Big‑endian**: most significant byte at lowest address.

### 4.2 Observing layout

```c
#include <stdint.h>
#include <string.h>

void dump_f32(float f) {
    uint32_t u; memcpy(&u, &f, sizeof u);
    // Print bytes in address order (endianness visible)
    uint8_t *p = (uint8_t*)&u;
    printf("%02X %02X %02X %02X\n", p[0], p[1], p[2], p[3]);
}
```

For the value `1.0f`:
- **binary32 bits**: `0x3F800000` → sign=0, exponent=127, fraction=0 (i.e., 2^(127−127) × 1.0 = 1.0)
- On **little‑endian** memory: bytes appear as `00 00 80 3F` (lowest address holds `0x00`).
- On **big‑endian** memory: bytes appear as `3F 80 00 00`.

Similarly, `double` `1.0` is `0x3FF0000000000000` (endianness changes byte order).

---

## 5) Calculating Values from Raw Bits (Manual Decoding)

### 5.1 Decode `float` (binary32) from a `uint32_t`

```c
#include <stdint.h>
#include <math.h>

double f32_decode_to_double(uint32_t u) {
    int sign = (u >> 31) & 1;
    int exp  = (u >> 23) & 0xFF;     // 8 bits
    uint32_t frac = u & 0x7FFFFF;    // 23 bits

    if (exp == 0xFF) { // Inf or NaN
        if (frac == 0) return sign ? -INFINITY : INFINITY;
        return NAN; // any non-zero fraction -> NaN
    }

    double m;
    int e;
    if (exp == 0) {
        // subnormal or zero
        if (frac == 0) return sign ? -0.0 : 0.0;
        m = (double)frac / (double)(1u << 23); // 0.fraction
        e = 1 - 127; // bias
    } else {
        m = 1.0 + (double)frac / (double)(1u << 23); // 1.fraction
        e = exp - 127;
    }

    double val = ldexp(m, e); // m × 2^e
    return sign ? -val : val;
}
```

> Use `double` return to avoid rounding during decode; it re‑creates the mathematical value implied by the bit fields.

### 5.2 Decode `double` (binary64) from a `uint64_t`

Analogous logic with 11‑bit exponent, 52‑bit fraction, and bias 1023.

---

## 6) Serialization: Converting FP to Bytes (and Back)

### 6.1 Safe bitwise reinterpretation

**Never type‑pun with pointer casts** (e.g., `(uint32_t*)&f`) — that violates **strict aliasing** and may cause UB under optimization. Use `memcpy` or access through `unsigned char*`.

```c
#include <stdint.h>
#include <string.h>

uint32_t f32_to_u32(float f) {
    uint32_t u; memcpy(&u, &f, sizeof u); return u;
}

float u32_to_f32(uint32_t u) {
    float f; memcpy(&f, &u, sizeof f); return f;
}
```

### 6.2 Byte order for wires/files

When writing to a wire/protocol, **choose an order** (commonly big‑endian) and encode explicitly:

```c
void f32_to_be(uint8_t *b, float f) {
    uint32_t u; memcpy(&u, &f, 4);
    b[0] = (uint8_t)(u >> 24);
    b[1] = (uint8_t)(u >> 16);
    b[2] = (uint8_t)(u >> 8);
    b[3] = (uint8_t)(u);
}

float be_to_f32(const uint8_t *b) {
    uint32_t u = ((uint32_t)b[0] << 24) |
                 ((uint32_t)b[1] << 16) |
                 ((uint32_t)b[2] << 8)  |
                 (uint32_t)b[3];
    float f; memcpy(&f, &u, 4); return f;
}
```

Repeat analogously for `double` with 8 bytes.

---

## 7) Ranges, Limits, and Epsilon

Header `<float.h>` exposes limits:

- `FLT_MAX`, `FLT_MIN`, `FLT_EPSILON`
- `DBL_MAX`, `DBL_MIN`, `DBL_EPSILON`

**Interpretation:**
- `*_MAX` → largest finite representable value
- `*_MIN` → smallest positive **normalized** value (not subnormal)
- `*_EPSILON` → difference between 1.0 and the next representable value

**Subnormal minimums** (smallest positive values including subnormals) can be computed as:
- **binary32**: `2^(1 - 127) × 2^(-23)` = `2^(-149)`
- **binary64**: `2^(1 - 1023) × 2^(-52)` = `2^(-1074)`

---

## 8) Rounding, Accumulated Error, and Numerical Stability

- FP operations **round** to the nearest representable result.
- Naive summations of many small terms can accumulate error; use **Kahan summation** for improved stability.

```c
double kahan_sum(const double *a, size_t n) {
    double sum = 0.0, c = 0.0;
    for (size_t i = 0; i < n; ++i) {
        double y = a[i] - c;
        double t = sum + y;
        c = (t - sum) - y;
        sum = t;
    }
    return sum;
}
```

- Conversions `double`→`float` can overflow to **Inf** and lose precision; prefer to keep calculations in `double` until the final step.

---

## 9) Comparisons: Avoid `==` Without Tolerance

Use **epsilon‑based** comparison:

```c
#include <float.h>
#include <math.h>

int nearly_equal_float(float a, float b) {
    // Relative + absolute tolerance
    float diff = fabsf(a - b);
    float tol = FLT_EPSILON * fmaxf(1.0f, fmaxf(fabsf(a), fabsf(b)));
    return diff <= tol;
}
```

---

## 10) `printf`/`scanf` and Variadic Promotion

- In variadic functions (`printf`), `float` arguments are **promoted to `double`**.
- Use `%f` to print `float` or `double`. For `long double`, use `%Lf`.

Examples:
```c
float  f = 1.23f;   printf("%f\n", f); // promoted to double
double d = 1.23;    printf("%f\n", d);
long double q = 1.23L; printf("%Lf\n", q);
```

For scanning (`scanf`):
```c
scanf("%f", &f);   // expects float*
scanf("%lf", &d);  // expects double*
```

---

## 11) FPU, Soft‑FP, and Performance Considerations

- **Soft‑FP** targets (no hardware FPU) emulate FP in software → larger code and slower operations.
- **Hard‑FP** targets (FPU present) execute FP instructions directly.
- On many MCUs, `float` is faster than `double`; on powerful SoCs both are fast.
- Minimize FP in **real‑time** paths; prefer integer/fixed‑point where feasible.

---

## 12) Aliasing, Type‑Punning, and Safety

- **Do not** read/write `float` as `uint32_t` via pointer casts (UB under strict aliasing).
- Use **`memcpy`** or access through `unsigned char*` when reinterpreting bytes.
- For performance or compactness, **unions** are common in practice, but note: reading a different member than was last written is **implementation‑defined** in C. Prefer `memcpy` in standards‑strict code.

---

## 13) Memory Alignment and Struct Packing

- Typical alignments: `float` → 4 bytes; `double` → 8 bytes on many ABIs.
- Mixing `char` with `double` inserts padding to satisfy alignment.

```c
struct S {
    char   c;   // 1
    double d;   // 8; likely 7 bytes padding before d on 64-bit alignment ABIs
};
```

Reorder to minimize padding:
```c
struct T {
    double d;  // 8
    char   c;  // 1
    char   k;  // 1
};
```

---

## 14) Practical Guidance & Best Practices

1. **Prefer `double`** for internal computations when precision matters; convert to `float` only at IO boundaries if needed.
2. **Define byte order** when serializing; always convert to a chosen endianness.
3. **Use epsilon comparisons** for equality checks.
4. **Avoid type‑punning through pointer casts**; use `memcpy`.
5. **Measure** on your target (Soft‑FP vs Hard‑FP) to decide between `float` and `double`.
6. **Check for NaN/Inf** explicitly if inputs may be untrusted (sensor spikes, protocol payloads).

---

## 15) Quick Reference Tables (Binary32 / Binary64)

### 15.1 Exponent ranges
- `float` exponent field: 8 bits → values 0..255
  - decoded exponent (E): `-126 .. +127` for normalized numbers (1..254)
- `double` exponent field: 11 bits → values 0..2047
  - decoded exponent (E): `-1022 .. +1023` for normalized numbers (1..2046)

### 15.2 Smallest positive values
- `float` (subnormal min): `2^(-149)` ≈ `1.4e-45`
- `double` (subnormal min): `2^(-1074)` ≈ `4.9e-324`

---

## 16) Example: Manual Construction of `float` Bits

Construct a `float` for the value `1.5f`:

- Mathematical value: `1.5` = `1 + 1/2` = `1.1₂`
- For `float`:
  - Sign = 0
  - Exponent = `bias + 0` = `127` → `0x7F`
  - Fraction: represent `.1₂` in the 23-bit mantissa ⇒ first bit `1`, rest zeros
- Bits: `0 | 01111111 | 10000000000000000000000`
- Hex: `0x3FC00000`

Check on little‑endian: bytes `00 00 C0 3F`.

---

## 17) Example: Reading the Fields from a `double`

```c
#include <stdint.h>
#include <string.h>
#include <stdio.h>

void explain_double(double d) {
    uint64_t u; memcpy(&u, &d, 8);
    unsigned sign = (u >> 63) & 1u;
    unsigned exp  = (u >> 52) & 0x7FFu;   // 11 bits
    uint64_t frac = u & 0xFFFFFFFFFFFFFul; // 52 bits
    printf("sign=%u exp=%u frac=0x%013llX\n", sign, exp, (unsigned long long)frac);
}
```

Use this to print the raw fields for debugging numeric issues.

---

## 18) FAQ

**Q: Why does `float` print weird values like `0.3000000119`?**  
A: Decimal fractions such as 0.3 usually have **no exact binary representation**, so the nearest representable binary value is used, producing slight deviations.

**Q: Why does `float` comparison fail sometimes?**  
A: Rounding and binary representation cause small errors; use tolerance‑based comparisons.

**Q: Is `double` always 64 bits?**  
A: On most platforms yes, but some small embedded compilers map `double` to 32 bits. Check your toolchain docs and `sizeof(double)`.

**Q: How do I safely reinterpret `float` bits?**  
A: Use `memcpy` to/from `uint32_t`. Avoid pointer casts.

---

## 19) Checklist (Interview & Practical)

- [ ] Explain IEEE‑754 layout for `float`/`double`.
- [ ] Describe subnormals, NaN, and infinities.
- [ ] Compute value from raw bit fields (bias, mantissa).
- [ ] Discuss endianness and show bytes for common values.
- [ ] Serialize/deserialize with explicit byte order.
- [ ] Use epsilon for comparisons; know why `0.1` isn’t exact.
- [ ] Avoid aliasing UB; use `memcpy` for type‑punning.
- [ ] Consider FPU availability and performance.

---

*End of document.*
