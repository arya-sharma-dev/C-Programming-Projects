#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array needs at least 2 elements to perform a swap.\n");
        return 0;
    }
 
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
    printf("\nArray after swapping first and last elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
