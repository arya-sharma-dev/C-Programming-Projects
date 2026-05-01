#include <stdio.h>

double power(double n, int p);

int main() {
    double base;
    int exp;
    char choice;

    printf("Enter the base number (n): ");
    scanf("%lf", &base);
    printf("Do you want to enter an exponent? (y/n): ");
    scanf(" %c", &choice); 

    if (choice == 'y' || choice == 'Y') {
        printf("Enter the exponent (p): ");
        scanf("%d", &exp);
        printf("Result: %.2f raised to the power of %d is %.2f\n", base, exp, power(base, exp));
    } else {
        printf("Using default exponent (2)...\n");
        printf("Result: %.2f squared is %.2f\n", base, power(base, 2));
    }

    return 0;
}
double power(double n, int p) {
    double result = 1.0;

    for (int i = 0; i < p; i++) {
        result *= n;
    }
    
    return result;
}
