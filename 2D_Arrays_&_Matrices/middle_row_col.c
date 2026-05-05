#include <stdio.h>
void displayMiddle(int size, int matrix[size][size]) {
    int mid = size / 2;
    printf("Middle Row : ");
    for (int j = 0; j < size; j++) {
        printf("%d ", matrix[mid][j]);
    }
    printf("\n");
    printf("Middle column : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][mid]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the size of the square matrix (odd number): ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd dimension (e.g., 3, 5, 7).\n");
        return 1;
    }

    int A[n][n];
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    displayMiddle(n, A);

    return 0;
}
