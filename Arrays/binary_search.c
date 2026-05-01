#include <stdio.h>
int binarySearch(int AR[], int searchNum, int N) {
    int low = 0;
    int high = N - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (AR[mid] == searchNum) {
            return 1; 
        }
        if (AR[mid] < searchNum) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return 0;
}

int main() {
    int N, searchNum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int AR[N];
    printf("Enter %d integers in ascending order:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &AR[i]);  
    }
    printf("Enter the number to search: ");
    scanf("%d", &searchNum);
    int result = binarySearch(AR, searchNum, N);
    if (result == 1) {
        printf("Result: 1 (Number %d is present in the array)\n", searchNum);
    } else {
        printf("Result: 0 (Number %d is absent from the array)\n", searchNum);
    }

    return 0;
}
