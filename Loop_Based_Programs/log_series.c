#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    if ( n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += 1.0 / i;
        } else {
            sum -= 1.0 / i;
        }
    }
   printf("the computed natural logarithm of 2 for %d terms is: %lf\n", n, sum);
    return 0;
}
