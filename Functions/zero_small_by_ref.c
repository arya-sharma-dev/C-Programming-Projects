#include <stdio.h>

void zero_small(int *ptr1, int *ptr2);

int main() {
    int x, y;
    printf("Enter the first integer: ");
    scanf("%d", &x);
    printf("Enter the second integer: ");
    scanf("%d", &y);

    printf("\nBefore function call: x = %d, y = %d\n", x, y);
    zero_small(&x, &y);

    printf("After function call:  x = %d, y = %d\n", x, y);
    printf("(The smaller value has been set to 0)\n");

    return 0;
}
void zero_small(int *ptr1, int *ptr2) {
    if (*ptr1 < *ptr2) {
        *ptr1 = 0; 
    } else if (*ptr2 < *ptr1) {
        *ptr2 = 0; 
    } else {
        printf("Both numbers are equal.\n");
    }
}
