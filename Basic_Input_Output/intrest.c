#include <stdio.h>
#include <conio.h>

void main() {
    float principal, rate, time, interest;
    clrscr();

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("\nSimple Interest = %.2f\n", interest);

    getch();
}
