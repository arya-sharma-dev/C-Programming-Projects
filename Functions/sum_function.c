#include <stdio.h>
int calculateSum(int a, int b);

int main() {
    int num1, num2, sum;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    sum = calculateSum(num1, num2);

    printf("\nResults from main():\n");
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

int calculateSum(int a, int b) {
    return a + b;
}
