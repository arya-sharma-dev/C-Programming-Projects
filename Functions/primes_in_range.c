#include <stdio.h>

void displayPrimes(int start, int end);

int main() {
    int num1, num2;

    printf("Enter the first number (start of range): ");
    scanf("%d", &num1);
    printf("Enter the second number (end of range): ");
    scanf("%d", &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("\nPrime numbers between %d and %d are:\n", num1, num2);
    
    displayPrimes(num1, num2);
    
    printf("\n");

    return 0;
}

void displayPrimes(int start, int end) {
    int i, j, is_prime;

    for (i = start; i <= end; i++) {
      
        if (i < 2) continue;

        is_prime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
}
