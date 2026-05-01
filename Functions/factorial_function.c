#include <stdio.h>
long long calculateFactorial(int n);

int main() {
    int num;
    long long result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = calculateFactorial(num);
        printf("The factorial of %d is: %lld\n", num, result);
    }

    return 0;
}

long long calculateFactorial(int n) {
    long long fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i; 
    }
    
    return fact;
}
