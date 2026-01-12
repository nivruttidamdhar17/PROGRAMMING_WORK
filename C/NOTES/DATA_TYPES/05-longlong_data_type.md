# Complete Detailed Notes on the `long long` Data Type in C

---

## 1) What is `long long`?

`long long` is a signed integer type **at least as wide as `long`**, and at least **64 bits** by C standard minimums (C99). It exists to provide a wider integer where `long` may not be 64‑bit.

Typical widths:
- **ILP32 (ARM/MIPS 32‑bit), LP64, LLP64:** `long long` is **64‑bit**.

---

## 2) Ranges & Representation

Two’s complement typical range for 64‑bit `long long`:
```
−9,223,372,036,854,775,808 .. +9,223,372,036,854,775,807
```

Unsigned counterpart `unsigned long long`:
```
0 .. 18,446,744,073,709,551,615
```

Check with `<limits.h>`:
```c
#include <limits.h>
printf("%lld .. %lld\n", LLONG_MIN, LLONG_MAX);
```

---

## 3) Why use `long long`?

- Precise **64‑bit counters**, timestamps, file sizes.
- Implement **fixed‑point** math with larger accumulators.
- Portability across ABIs where `long` might be 32‑bit (ILP32, LLP64).

Prefer **`int64_t`/`uint64_t`** when exact width matters.

---

## 4) Promotions, Casting, and Overflow

- Arithmetic at `long long` width when operands are `long long`.
- Narrowing from `long long` to `int`/`long` may truncate.
- Signed overflow is **UB**; unsigned overflow wraps.

```c
long long a = LLONG_MAX;
long long b = 1;
// a + b => UB
```

---

## 5) Alignment & Structs

- Typical alignment: **8 bytes** for 64‑bit `long long`.
- Mixing small and large fields causes padding; reorder to minimize.

---

## 6) `printf`/`scanf` Specifiers

- `long long`: `%lld` (signed), `%llu` (unsigned)
- Hex: `%llx` / `%llX`

**Always use the `ll` length modifier** for `long long`.

---

## 7) Endianness & Serialization

Use **fixed‑width** types for wire formats and explicit byte ordering.

```c
#include <stdint.h>
void u64_to_le(uint8_t *b, uint64_t v){
    b[0]=v; b[1]=v>>8; b[2]=v>>16; b[3]=v>>24; b[4]=v>>32; b[5]=v>>40; b[6]=v>>48; b[7]=v>>56;
}
```

---

## 8) Best Practices

- Prefer `int64_t`/`uint64_t` in portable APIs.
- Avoid relying on `long` being 64‑bit across platforms.
- Mind alignment in structs; group 64‑bit fields together.

---

## 9) Quick Interview Checks

- Print an `unsigned long long`: `%llu`.
- Is `long long` always 64‑bit? → C guarantees **at least** 64 bits; in practice it’s 64 on mainstream ABIs.

---

