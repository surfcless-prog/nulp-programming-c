# C Formatting & Input/Output Lab Work

A C program demonstrating advanced string/number formatting with `printf()`, formatted input parsing with `scanf()`, and table generation with automatic VAT calculations.

## 📌 Tasks Overview

* **Task 1: Integer Formatting & Length Modifiers**
  Demonstrates alignment (`%-8d`), zero-padding (`%06d`), explicit signs (`%+d`), precision (`%06.4d`), and length modifiers (`%hd` for `short`, `%lld` for `long long`).

* **Task 2: Unsigned & Non-Decimal Bases**
  Displays integers in unsigned (`%u`), octal (`%o`), and hexadecimal (`%x`, `%X`) formats using prefixes (`#`), padding, and handling of negative values.

* **Task 3: Floating-Point Formatting**
  Explores fixed-point (`%f`), exponential (`%e`/`%E`), compact (`%g`/`%G`), and precision/width flags on `double` and `long double` (`%Lf`).

* **Task 4: Character & String Formatting**
  Demonstrates width and precision limits on characters (`%c`) and strings (`%s`), escaped percent signs (`%%`), and capturing the return value of `printf()`.

* **Task 5: Formatted Input Parsing (`scanf`)**
  * **5a:** Fixed-width date parsing (`%2d%2d%4d`).
  * **5b:** Literal character matching for coordinates `(x,y)`.
  * **5c:** Auto-base detection using `%i` (octal `0...`, hex `0x...`, decimal).
  * **5d:** Field assignment suppression (`%*2d`) and width specifiers.

* **Task 6: Receipt & Invoice Generator**
  Reads product details (hex code, name, quantity, price), calculates total costs and 20% VAT, and formats the output into an aligned text table.

## 🛠 Compilation & Execution

```bash
# Compile with MSVC (Windows) or GCC
gcc main.c -o output_program

# Run the executable
./output_program
```