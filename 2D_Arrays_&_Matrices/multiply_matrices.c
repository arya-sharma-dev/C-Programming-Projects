#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Error! Column of A must equal Row of B.\n");
        return 1;
    }

    int A[r1][c1], B[r2][c2], Result[r1][c2];
    printf("\nEnter elements for Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEnter elements for Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            Result[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++) {      
        for (int j = 0; j < c2; j++) {    
            for (int k = 0; k < c1; k++) { 
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
