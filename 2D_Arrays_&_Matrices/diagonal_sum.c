#include <stdio.h>
void inputMatrix(int n, int mat[n][n]);
int leftDiagonalSum(int n, int mat[n][n]);
int rightDiagonalSum(int n, int mat[n][n]);

int main() {
    int n;

    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    int A[n][n];

   
    inputMatrix(n, A);

    
    printf("\nSum of Left Diagonal: %d", leftDiagonalSum(n, A));
    printf("\nSum of Right Diagonal: %d\n", rightDiagonalSum(n, A));

    return 0;
}
void inputMatrix(int n, int mat[n][n]) {
    printf("Enter elements for %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
int leftDiagonalSum(int n, int mat[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i]; 
    }
    return sum;
}
int rightDiagonalSum(int n, int mat[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        // Logic: j = (n - 1) - i
        sum += mat[i][n - 1 - i];
    }
    return sum;
}
