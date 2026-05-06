# C Programming Projects

A collection of C programs written while learning programming from scratch.
This repository documents my hands-on journey through core programming concepts —
from basic input/output to functions, arrays, and beyond.

---

## About This Repository

Each program in this repo solves a specific problem or demonstrates a key concept
in C programming. The goal is to build strong fundamentals through practical,
working code rather than just theory.

---

## Projects Overview

| # | Project | Description |
|---|---------|-------------|
| 01 | Hello World | Prints "Hello, World!" to the console — the classic first program |
| 02 | Marks Display Table | Displays subject marks in a formatted table using `printf` |
| 03 | Sum of Two Numbers | Takes two numbers as input and prints their sum |
| 04 | Temperature Converter | Converts temperature from Fahrenheit to Celsius |
| 05 | Simple Interest Calculator | Calculates simple interest given principal, rate, and time |
| 06 | ASCII Value Finder | Accepts a character and displays its ASCII value |
| 07 | Swap Two Variables | Swaps the values of two variables using a temporary variable |

---

## Topics Covered

- Variables, data types, and basic syntax
- Input/output with `scanf` and `printf`
- Arithmetic, relational, and logical operators
- Conditional statements (`if`, `else`, `else if`)
- Loops (`for`, `while`, `do-while`)
- Functions and modular programming
- Arrays (1D and 2D)
- Strings and string operations
- Structures (`struct`)
- Characters and ASCII values

---

## How to Run

### Prerequisites
- GCC compiler installed (`gcc --version` to check)
- A terminal / command prompt

### Steps

```bash
# 1. Clone the repository
git clone https://github.com/arya-sharma-dev/C-Programming-Projects.git

# 2. Navigate into the project folder
cd C-Programming-Projects

# 3. Enter the specific project folder
cd FolderName        # e.g., cd 01_HelloWorld

# 4. Compile the program
gcc FileName.c -o FileName

# 5. Run the compiled program
./FileName           # On Linux/Mac
FileName.exe         # On Windows
```

> **Note:** For programs using math functions (e.g., `pow`, `sqrt`), add the `-lm` flag:
> ```bash
> gcc FileName.c -o FileName -lm
> ```

---

## Folder Structure
