# C Fundamentals: Bitwise Operations, Formatting & Floating-Point Numbers

A C program demonstrating bitwise manipulation, `printf` format specifiers, byte comparisons, and floating-point operations.

## 📌 Tasks Overview

* **Task 1: Bitwise Operations**  
  Demonstrates bitwise shifts (`>>`), bitwise AND (`&`), bitwise OR (`|`), and bitwise NOT (`~`) on hex values.

* **Task 2: Format Specifiers**  
  Explores various `printf` formatting options for integer (`%d`, `%x`, `%o`, `%c`) and `long double` types (`%Lf`, `%LE`, `%Lg`, custom precision, and width alignment).

* **Task 3: Expressions & Byte Extraction**  
  * Evaluates expressions combining arithmetic and bitwise left-shift (`<<`).
  * Extracts upper (`>> 8`) and lower (`& 255`) bytes from a 16-bit integer (`0xade5`) and compares them.

* **Task 4: Floating-Point Processing**  
  Prompts user for two floating-point numbers, finds the smaller value, and extracts its first fractional digit using `fabs()` and `fmod()`.

## 🛠 Compilation & Execution

```bash
# Compile using GCC
gcc -std=c11 main.c -o program -lm

# Run
./program
```