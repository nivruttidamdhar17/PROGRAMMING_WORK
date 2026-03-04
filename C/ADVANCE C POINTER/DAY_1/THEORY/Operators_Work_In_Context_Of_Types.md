# Fundamental CPA Principle

**CPA Principle (Context-Dependent Operator Meaning):**  
The meaning of an operator in C is **always determined by the types of its operands**.

For example:

```c
c = a + b;
```

Here:
- **Operands:** `a`, `b`, `c`
- **Operators:** `=`, `+`

Operators such as `+` and `=` **do not have a unique fixed meaning**. Their actual behavior depends on the data types of the operands involved (`a`, `b`, `c`).

***

## Example 1: Integer Context

```c
int a = 10, b = 20, c;

int main() {
    c = a + b;
}
```

**Underlying operations:**

```
R1 <- a         (mov)
R2 <- b         (mov)
R1 <- R1 + R2   (add)
c  <- R1        (mov)
```

***

## Example 2: Floating Point Context

```c
float a = 3.14, b = 6.28, c;

int main() {
    c = a + b;
}
```

**Translated operations (floating-point registers):**

```
fR1 <- a        (fld)
fR2 <- b        (fld)
fR1 <- fR1 + fR2 (fadd)
c   <- fR1      (fst)
```

The difference between the two examples lies in **type context**—the same operator `+` behaves differently depending on whether the operands are integers or floats.

***

# Data Access Operators

C provides several operators for data access and manipulation.  
They all depend heavily on **type context**.

### List of Data Access Operators

1. Dereference (`*`)
2. Subscript (`[]`)
3. Dot (`.`)
4. Arrow (`->`)
5. Pointer arithmetic (`+`, `-` with pointers)

***

## 1. Dereference Operator (`*`)

### Example

```c
int n = 10;
short s = 5;
char c = 'A';

int nc;
short sc;
char cc;

int* pi;
short* ps;
char* pc;

int main() {
    pi = &n;    // Address of n → pi
    ps = &s;    // Address of s → ps
    pc = &c;    // Address of c → pc

    *pi = 100;
    *ps = 50;
    *pc = 'Z';

    nc = *pi;
    sc = *ps;
    cc = *pc;

    return 0;
}
```

### Rules

1. The dereference operator `*` works **only** on pointer variables.  
   Dereferencing a non-pointer variable results in a compile-time error.

2. The dereference operator performs:
   - Extraction of the **content** of the pointer (the address it holds).
   - Treats that content as a **memory address**.
   - Performs a **read or write** on that memory location.

3. **Type context** determines **how many bytes** should be read or written.

### Memory-Level Analysis

Assume:
```
&n → 1000
&s → 2000
&c → 3000
```

#### Example: `*pi = 100;`
1. Extract content of `pi` → `1000`.
2. Treat this as a memory address → `M[1000]`.
3. Since `*pi = rhs`, it’s a **write operation**.
4. Pointer type = `int` → sizeof(int) = 4.
5. Therefore:  
   `M[1000:1003] <- 100`

***

#### Exercise: Do similar step-by-step analysis for:
- `*ps = 50;`
- `*pc = 'Z';`

***

#### Example: `sc = *ps;`

Let address of `ps` = 2000, and address of `sc` = 5000.

1. Extract address from `ps` → 2000.  
2. Treat as memory `[M[2000]]`.  
3. Since `lhs = sc = *ps`, this is a **read** operation.  
4. Pointer type = `short` → sizeof(short) = 2.  
5. `sc = *ps;` →  
   `M[5000:5001] <- M[2000:2001]`

***

#### Exercise
Explain similarly:

- `nc = *pi;`
- `cc = *pc;`

***

## 2. Subscript Operator (`[]`)

### Example

```c
int ia[5] = {100, 200, 300, 400, 500};
short sa[5] = {10, 20, 30, 40, 50};
```

Assume:
```
Base address of ia = 1000
Base address of sa = 2000
```

#### Memory Layouts

| **ia** (int) | Address | Value |
|---------------|----------|-------|
| ia | 1000 | 100 |
| ia | 1004 | 200 |
| ia | 1008 | 300 |
| ia | 1012 | 400 |
| ia | 1016 | 500 |

| **sa** (short) | Address | Value |
|----------------|----------|-------|
| sa | 2000 | 10 |
| sa | 2002 | 20 |
| sa | 2004 | 30 |
| sa | 2006 | 40 |
| sa | 2008 | 50 |

***

### Syntax

`array[index];`

Left operand → must be of array (or pointer) type.  
Right operand → must be an integer.

### Access Patterns

```c
ia[i] = n;   // Write
nc = ia[i];  // Read

sa[i] = s;   // Write
sc = sa[i];  // Read
```

***

### Detailed Analysis of `ia[i] = n;`

Assume:
```
Address of ia -> 1000
i = 2
Address of n -> 5000 (content 3000)
```

1. Target address = Base + (i × sizeof(array_element))  
   = 1000 + (2 × 4) = 1008  
   → Target address = `M[1008]`.

2. Operation = write.  
3. Pointer type = int → sizeof(int) = 4.  
4. Action:  
   `M[1008:1011] <- M[5000:5003]`  
   `M[1008:1011] <- 3000`

Memory after assignment:

```
ia:
1000: [100]
1004: [200]
1008: [3000]
1012: [400]
1016: [500]
```

***

### Detailed Analysis of `nc = ia[i];`

Assume:
```
Address of ia -> 1000
i = 2
Address of nc -> 6000 (initially 0)
```

1. Target address = 1000 + (2 × 4) = 1008.  
2. Operation = read.  
3. sizeof(int) = 4.  
4. Action:  
   `M[6000:6003] <- M[1008:1011]`  
   `M[6000:6003] <- 3000`

Thus, `nc` now becomes 3000.  
Array `ia` remains unchanged.

***

**Exercise:**  
Perform similar detailed analysis for:  
- `sa[i] = s;`  
- `sc = sa[i];`

***

## 3. Dot Operator (`.`)

### Syntax
```
X.Y
```
Where:
- `X` must be a structure or union variable.
- `Y` must be a valid member of that structure or union.

***

### Example

```c
struct A {
    int a;
    char b;
    float c;
};

struct A inA;

int nc;
char cc;
float fc;

int main() {
    inA.a = 100;     // Exercise
    inA.b = 'A';     // Exercise
    inA.c = 3.14f;   // Detailed below

    nc = inA.a;      // Exercise
    cc = inA.b;      // Exercise
    fc = inA.c;      // Exercise
}
```

***

### Offset Concept

**Offset:**  
Distance (in bytes) from the base address of a structure instance to a particular member inside the structure.

Assuming:
```c
Offset(a) = 0
Offset(b) = 4
Offset(c) = 8
```

***

### Example: `inA.c = 3.14f;`

1. Base address of `inA` = `M[10000]`  
   → Target address = base + offset(c) = 10000 + 8 = `M[10008]`.
2. Operation type = write.  
3. Member type = float → sizeof(float) = 4.
4. Write operation: `M[10008:10011] <- 3.14f`.

**Memory Before:**
```
inA:
a: 0
b: '\0'
c: 0.0
```

**Memory After:**
```
inA:
a: 0
b: '\0'
c: 3.14f
```

***

**Exercise:** Analyze the following similarly:
- `fc = inA.c;`
- `inA.a = 100;`
- `nc = inA.a;`
- `inA.b = 'A';`
- `cc = inA.b;`

***

## 4. Arrow Operator (`->`)

### Example

```c
struct A {
    int a;
    char b;
    float c;
};

struct A inA;
struct A* pA;

int nc;
char cc;
float fc;

int main() {
    pA = &inA;

    pA->a = 100;   // Exercise
    pA->b = 'A';   // Exercise
    pA->c = 3.14f; // Exercise

    nc = pA->a;    // Exercise
    cc = pA->b;    // Exercise
    fc = pA->c;    // Exercise

    return 0;
}
```

Relationship:
```
pA->c == (*pA).c
```

That means:
```
Take address in pA → base address of inA
Offset of member c → 8
Target address = address in pA + 8 = M[10008]
```

This shows `->` is simply shorthand for dereferencing followed by a dot (`(*pA).member`).

***

## 5. Pointer Arithmetic and Type Context

```c
int*    pi = (int*)10000;
char*   pc = (char*)20000;
float*  pf = (float*)30000;
struct A* pA = (struct A*)40000;
```

### Pointer Addition

| Expression | Resulting Address |
|-------------|------------------|
| `pi + 1` | 10000 + 1 × 4 = **10004** |
| `pc + 1` | 20000 + 1 × 1 = **20001** |
| `pf + 1` | 30000 + 1 × 4 = **30004** |
| `pA + 1` | 40000 + 1 × 12 = **40012** |

### Pointer Subtraction

| Expression | Resulting Address |
|-------------|------------------|
| `pi - 1` | 10000 - 4 = **9996** |
| `pc - 1` | 20000 - 1 = **19999** |
| `pf - 1` | 30000 - 4 = **29996** |
| `pA - 1` | 40000 - 12 = **39988** |

### Generic Formula

Let `T` be a data type, and `pT` be a pointer to it holding address `x`.

\[
\begin{align*}
pT + 1 &= x + sizeof(T) \\
pT - 1 &= x - sizeof(T) \\
pT + k &= x + k \times sizeof(T) \\
pT - k &= x - k \times sizeof(T)
\end{align*}
\]

This arithmetic is essential in pointer-based array traversal and structure navigation.

***
