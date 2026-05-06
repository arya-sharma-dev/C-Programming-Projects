# 2D Arrays & Matrix Operations

**7 programs** — These programs use two-dimensional arrays to perform matrix operations like addition, multiplication, transpose, diagonal sums, and special element access.

---

## Programs

| File | Description |
|------|-------------|
| matrix_menu.c | Menu-driven program — input matrix, display, find sum, row/column sum, transpose |
| diagonal_sum.c | Find the sum of left diagonal and right diagonal of a square matrix |
| row_multiplication.c | Display the multiplication of all elements in each row of matrix A[4][6] |
| upper_half_matrix.c | Print only the upper triangular half of a matrix |
| middle_row_col.c | Display the middle row and middle column of a square matrix |
| add_matrices.c | Add two matrices A and B of size m×n and store result in matrix C |
| multiply_matrices.c | Multiply matrix A (N×L) with matrix B (L×M) and display the result |

---

## Concepts Used

- 2D array declaration — `int a[10][10]`
- Nested loops for row and column traversal
- Matrix addition — add element by element
- Matrix multiplication — row × column dot product
- Transpose — swap rows and columns — `a[i][j]` becomes `a[j][i]`
- Diagonal elements — left: `a[i][i]`, right: `a[i][n-1-i]`
- Upper triangular matrix — elements where column index >= row index
- Passing 2D arrays to functions

---

## How to Run

```bash
gcc filename.c -o output
./output
```
