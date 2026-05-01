#include <stdio.h>
void acceptElements(int arr[], int n);
void displayElements(int arr[], int n);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void bubbleSort(int arr[], int n);

int main() {
    int arr[100], n = 0, choice;

    while (1) {
        printf("\n--- MENU ---");
        printf("\na. Accept elements of an array");
        printf("\nb. Display elements of an array");
        printf("\nc. Sort using Insertion Sort");
        printf("\nd. Sort using Selection Sort");
        printf("\ne. Sort using Bubble Sort");
        printf("\nf. Exit");
        printf("\nEnter your choice: ");
        scanf(" %c", &choice); 
            
        switch (choice) {
            case 'a':
                printf("Enter number of elements: ");
                scanf("%d", &n);
                acceptElements(arr, n);
                break;
            case 'b':
                if (n == 0) printf("Array is empty!\n");
                else displayElements(arr, n);
                break;
            case 'c':
                insertionSort(arr, n);
                printf("Sorted using Insertion Sort.\n");
                break;
            case 'd':
                selectionSort(arr, n);
                printf("Sorted using Selection Sort.\n");
                break;
            case 'e':
                bubbleSort(arr, n);
                printf("Sorted using Bubble Sort.\n");
                break;
            case 'f':
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
void acceptElements(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void displayElements(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
