# Sorting

**1 program — 3 sorting algorithms inside** — This program implements all three classic sorting algorithms in C as a menu-driven program. User can choose which sorting algorithm to run.

---

## Programs

| File | Description |
|------|-------------|
| bubble_selection_insertion_sort.c | Menu-driven program with Bubble Sort, Selection Sort and Insertion Sort |

---

## Sorting Algorithms Covered

| Algorithm | How it Works | Time Complexity |
|-----------|-------------|-----------------|
| Bubble Sort | Compares adjacent elements and swaps if out of order — repeats until sorted | O(n²) |
| Selection Sort | Finds the minimum element and places it at the correct position in each pass | O(n²) |
| Insertion Sort | Picks each element and inserts it into its correct position in the sorted part | O(n²) |

---

## Concepts Used

- Sorting logic using nested loops
- Swapping elements using a temp variable
- Menu-driven program using `switch`
- Understanding time complexity of basic sorting algorithms

---

## How to Run

```bash
gcc bubble_selection_insertion_sort.c -o output
./output
```
