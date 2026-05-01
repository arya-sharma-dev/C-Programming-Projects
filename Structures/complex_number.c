#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}
struct Complex subtract(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return temp;
}
struct Complex multiply(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = (n1.real * n2.real) - (n1.imag * n2.imag);
    temp.imag = (n1.real * n2.imag) + (n1.imag * n2.real);
    return temp;
}
struct Complex divide(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    float denominator = (n2.real * n2.real) + (n2.imag * n2.imag);
    if (denominator == 0) {
        printf("Division by zero error!\n");
        temp.real = 0; temp.imag = 0;
        return temp;
    }
    temp.real = ((n1.real * n2.real) + (n1.imag * n2.imag)) / denominator;
    temp.imag = ((n1.imag * n2.real) - (n1.real * n2.imag)) / denominator;
    return temp;
}

int main() {
    struct Complex a, b, result;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &b.real, &b.imag);
    result = add(a, b);
    printf("\nSum: %.2f + %.2fi", result.real, result.imag);
    result = subtract(a, b);
    printf("\nDifference: %.2f + %.2fi", result.real, result.imag);
    result = multiply(a, b);
    printf("\nProduct: %.2f + %.2fi", result.real, result.imag);
    result = divide(a, b);
    printf("\nQuotient: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
