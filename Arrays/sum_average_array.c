#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("\n--- Results ---\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
