#include<stdio.h>
#include<math.h>
double factorial(int num){
    if (num == 0)return 1;
    double fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= 1;
    }
    return fact;
}
int main () {
    double x, sum = 0;
    int n, sign = 1;
    printf("enter the value of x(in degrees): ");
    scanf("%lf", &x);
    printf("enter the positive integer n (max power):");
    scanf("%d", &n);
    double x_rad = x * (M_PI / 180.0);
    printf("\ncalculating terms...\n");
    for(int i = 1; i <= n; i += 2){
        double term = pow(x_rad, i)/factorial(i);
        sum += sign * term;
        printf("term x^%d/%d! = %f\n", i, i, sign * term);
        sign *= -1;
    }
    printf("\napproximate sin (%f) up to x^%d is : %f\n", x, n, sum);
    printf("actual value using math.h: %f\n", cos(x_rad));
    return 0;
}
