# Loops

**19 programs** — These programs use for, while, and do-while loops to solve mathematical problems, compute series, and build logic. Pattern printing is kept in its own separate folder.

---

## Programs

| File | Description |
|------|-------------|
| print_1_to_10.c | Print numbers from 1 to 10 using a loop |
| sum_natural_numbers.c | Find the sum of first 10 natural numbers |
| factorial.c | Calculate factorial of a number entered by user |
| power.c | Raise one number to the power of another |
| reverse_integer.c | Reverse a given integer — e.g. 1234 becomes 4321 |
| sum_of_digits.c | Find the sum of all digits of an integer |
| prime_check.c | Check whether a given number is prime or not |
| hcf.c | Calculate HCF (Highest Common Factor) of two numbers |
| count_pos_neg_zero.c | Count how many positives, negatives and zeros the user enters |
| max_min_input.c | Find maximum and minimum from numbers entered by user |
| armstrong_numbers.c | Print all Armstrong numbers between 1 and 500 |
| fibonacci_series.c | Print Fibonacci series up to n terms |
| harmonic_series.c | Calculate sum of series — 1 + 1/2 + 1/3 + ... + 1/n |
| log_series.c | Compute natural log of 2 using alternating series |
| sinx_series.c | Compute sin(x) using Taylor series expansion |
| cosx_series.c | Compute cos(x) using Taylor series expansion |
| compound_interest.c | Calculate compound interest using the pow() library function |
| area_triangle_heron.c | Calculate area of a triangle using Heron's formula |
| number_guessing_game.c | Number guessing game — computer picks 1 to 100, player gets high/low hints |

---

## Concepts Used

- `for`, `while`, `do-while` loops
- Mathematical series — sin(x), cos(x), log(2), harmonic
- `pow()`, `sqrt()` from `math.h`
- `rand()` for random number generation
- Loop-based digit and number manipulation

---

## How to Run

```bash
gcc filename.c -o output
./output
```

For programs using math functions:
```bash
gcc filename.c -o output -lm
./output
```
