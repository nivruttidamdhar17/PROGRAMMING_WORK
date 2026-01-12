# Complete Detailed Notes on the `long` Data Type in C

---

## 1) What is `long`?

`long` is a signed integer type wider than or equal to `int`. The C standard guarantees:

```
sizeof(int) ≤ sizeof(long)
```

Exact width depends on the **data model/ABI**:
- **ILP32 (typical 32‑bit embedded: ARM/MIPS):** `long` is **32‑bit** (same as `int`).
- **LP64 (Linux/x86_64, many UNIX‑likes):** `long` is **64‑bit**.
- **LLP64 (Windows 64‑bit):** `long` is **32‑bit** (but pointers are 64‑bit).

> On **MT7628/MT7621 (MIPS, ILP32)**: `sizeof(long) == 4` bytes.

---

## 2) Ranges & Representation

Assuming two’s complement:
- **32‑bit `long`:** `−2,147,483,648 .. +2,147,483,647` (same as 32‑bit `int`).
- **64‑bit `long`:** `−9,223,372,036,854,775,808 .. +9,223,372,036,854,775,807`.

Check with `<limits.h>`:
```c
#include <limits.h>
printf("%ld .. %ld\n", LONG_MIN, LONG_MAX);
```

Unsigned counterpart: `unsigned long` doubles the positive range.

---

## 3) Why use `long`?

- On ILP32: rarely needed (same width as `int`). Use it when the **ABI or API** expects `long` (POSIX `strtol`, `lseek`, etc.).
- On LP64: `long` is 64‑bit; useful for larger counters, file sizes, timestamps.
- For **portable exact widths**, prefer `<stdint.h>`: `int32_t`/`int64_t`.

---

## 4) Promotions, Casting, and Overflow

- Arithmetic with `long` uses at least `long` width.
- Casting **from wider to narrower** (e.g., `long`→`int`) may **truncate**.
- **Signed overflow** remains **undefined behavior**; **unsigned** wraps.

```c
long a = LONG_MAX;
long b = 1;
// a + b is UB (signed overflow)
```

---

## 5) Alignment & Structs

Typical alignments:
- 32‑bit `long`: align to 4
- 64‑bit `long`: align to 8

Layout impact:
```c
struct S {
    char c;
    long l; // alignment may insert padding
};
```

---

## 6) `printf`/`scanf` Specifiers

- `long`: `%ld` (signed), `%lu` (unsigned)
- Hex: `%lx` / `%lX`

**Always match** the format length modifier `l` with `long`.

---

## 7) Endianness & Serialization

When serializing `long`, **do not assume width** across platforms. Prefer fixed‑width types:
```c
void u64_to_be(uint8_t *buf, uint64_t v) {
    buf[0]=v>>56; buf[1]=v>>48; buf[2]=v>>40; buf[3]=v>>32;
    buf[4]=v>>24; buf[5]=v>>16; buf[6]=v>>8;  buf[7]=v;
}
```

---

## 8) Best Practices

- On embedded ILP32, `long` == `int` in width; use `<stdint.h>` for clarity.
- Avoid cross‑platform ambiguity; document assumptions or use fixed‑width types.
- Mind alignment/padding when mixing `char` with `long` in structs.

---

## 9) Quick Interview Checks

- What is `sizeof(long)` on ILP32? → 4 bytes.
- On LP64? → 8 bytes.
- Correct printf for `unsigned long`? → `%lu`.

---

*End of document.*
