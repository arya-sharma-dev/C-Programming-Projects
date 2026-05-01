#include <stdio.h>
void inputMatrix(int m, int n, int mat[m][n]);
void displayMatrix(int m, int n, int mat[m][n]);
int sumElements(int m, int n, int mat[m][n]);
void rowSum(int m, int n, int mat[m][n]);
void columnSum(int m, int n, int mat[m][n]);
void transposeMatrix(int m, int n, int mat[m][n]);
int main() {
    int m, n, choice;

    printf("Enter number of rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    int A[m][n]; 

    do {
        printf("\n--- Matrix Operations Menu ---\n");
        printf("1. Input elements into matrix\n");
        printf("2. Display elements of matrix\n");
        printf("3. Sum of all elements\n");
        printf("4. Display row-wise sum\n");
        printf("5. Display column-wise sum\n");
        printf("6. Create and display transpose (Matrix B)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputMatrix(m, n, A); break;
            case 2: displayMatrix(m, n, A); break;
            case 3: printf("Total Sum: %d\n", sumElements(m, n, A)); break;
            case 4: rowSum(m, n, A); break;
            case 5: columnSum(m, n, A); break;
            case 6: transposeMatrix(m, n, A); break;
            case 7: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
void inputMatrix(int m, int n, int mat[m][n]) {
    printf("Enter elements for %dx%d matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void displayMatrix(int m, int n, int mat[m][n]) {
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
int sumElements(int m, int n, int mat[m][n]) {
    int sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sum += mat[i][j];
    return sum;
}
void rowSum(int m, int n, int mat[m][n]) {
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) sum += mat[i][j];
        printf("Sum of Row %d: %d\n", i + 1, sum);
    }
}
void columnSum(int m, int n, int mat[m][n]) {
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) sum += mat[i][j];
        printf("Sum of Column %d: %d\n", j + 1, sum);
    }
}
void transposeMatrix(int m, int n, int mat[m][n]) {
    int B[n][m];
    printf("Transpose Matrix B (%dx%d):\n", n, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[j][i] = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
}
