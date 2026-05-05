#include <stdio.h>
void displayRowMultiplication(int mat[4][6]);

int main() {
    int A[4][6] = {
        {1, 2, 3, 4, 5, 6},
        {2, 2, 2, 2, 2, 2},
        {1, 3, 5, 1, 1, 1},
        {10, 1, 2, 1, 1, 1}
    };

    printf("Processing a 4x6 Matrix...\n");
    
    displayRowMultiplication(A);
 
    return 0;
}
void displayRowMultiplication(int mat[4][6]) {
    for (int i = 0; i < 4; i++) {
        long long product = 1; 
        for (int j = 0; j < 6; j++) {
            product *= mat[i][j];
        }
        
        printf("Multiplication of elements in Row %d: %lld\n", i + 1, product);
    }
}
