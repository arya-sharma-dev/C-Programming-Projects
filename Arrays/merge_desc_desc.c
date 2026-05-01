#include <stdio.h>
void mergeDescending(int X[], int M, int Y[], int N, int Z[]) {
    int i = 0; 
    int j = 0; 
    int k = 0; 
    while (i < M && j < N) {
        if (X[i] >= Y[j]) {
            Z[k++] = X[i++];
        } else {
            Z[k++] = Y[j++];
        }
    }
    while (i < M) {
        Z[k++] = X[i++];
    }
    while (j < N) {
        Z[k++] = Y[j++];
    }
}

int main() {
    int M, N;
    printf("Enter size of Array X: ");
    scanf("%d", &M);
    int X[M];
    printf("Enter %d elements for X (Descending order): ", M);
    for (int i = 0; i < M; i++) scanf("%d", &X[i]);
    printf("Enter size of Array Y: ");
    scanf("%d", &N);
    int Y[N];
    printf("Enter %d elements for Y (Descending order): ", N);
    for (int i = 0; i < N; i++) scanf("%d", &Y[i]);
    int Z[M + N];
    mergeDescending(X, M, Y, N, Z);
    printf("\nMerged Array Z (Descending Order):\n");
    for (int i = 0; i < M + N; i++) {
        printf("%d ", Z[i]);
    }
    printf("\n");

    return 0;
}
