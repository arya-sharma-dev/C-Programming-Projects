#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, s, area;
    printf("enter the lengths of three sides:");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("the area of the triangle is : %.2f\n", area);
    return 0;
}
