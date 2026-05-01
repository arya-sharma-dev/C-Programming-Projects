#include <stdio.h>
void MIX(int A[], int B[], int C[], int M, int N) {
    int left = 0;            
    int right = (M + N) - 1;  
    for (int i = 0; i < M; i++) {
        if (A[i] % 2 == 0) {
            C[left++] = A[i]; 
        } else {
            C[right--] = A[i]; 
        }
    }
    for (int i = 0; i < N; i++) {
        if (B[i] % 2 == 0) {
            C[left++] = B[i]; 
        } else {
            C[right--] = B[i]; 
        }
    }
}

int main() {
    int M, N;

    printf("Enter size of array A: ");
    scanf("%d", &M);
    int A[M];
    printf("Enter elements of array A: ");
    for (int i = 0; i < M; i++) scanf("%d", &A[i]);

    printf("Enter size of array B: ");
    scanf("%d", &N);
    int B[N];
    printf("Enter elements of array B: ");
    for (int i = 0; i < N; i++) scanf("%d", &B[i]);

    int C[M + N]; 
    MIX(A, B, C, M, N);

    printf("\nResultant Array C:\n");
    for (int i = 0; i < (M + N); i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
