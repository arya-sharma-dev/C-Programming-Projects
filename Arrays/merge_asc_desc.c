#include <stdio.h>
void mergeArrays(int A[], int M, int B[], int N, int C[]) {
    int i = 0;        
    int j = N - 1;    
    int k = 0;          
    while (i < M && j >= 0) {
        if (A[i] <= B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j--];
        }
    }
    while (i < M) {
        C[k++] = A[i++];
    }
    while (j >= 0) {
        C[k++] = B[j--];
    }
}

int main() {
    int M, N;
    printf("Enter size of Array A: ");
    scanf("%d", &M);
    int A[M];
    printf("Enter %d elements for Array A (in Ascending order): ", M);
    for (int i = 0; i < M; i++) scanf("%d", &A[i]);

    printf("Enter size of Array B: ");
    scanf("%d", &N);
    int B[N];
    printf("Enter %d elements for Array B (in Descending order): ", N);
    for (int i = 0; i < N; i++) scanf("%d", &B[i]);
    int C[M + N];
    mergeArrays(A, M, B, N, C);
    printf("\nMerged Array C (Ascending Order):\n");
    for (int i = 0; i < M + N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
