#include <stdio.h>
void Upper_half(int N, int A[N][N]) {
    printf("Upper Half of the Array:\n");
    
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < i; k++) {
            printf("  "); 
        }

        for (int j = i; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 5; 
    int A[5][5] = {
        {2, 3, 1, 5, 0},
        {7, 1, 5, 3, 1},
        {2, 5, 7, 8, 1},
        {0, 1, 5, 0, 1},
        {3, 4, 9, 1, 5}
    };

    Upper_half(n, A);

    return 0;
}
