#include<stdio.h>
void main(){
float r, area;
const float PI = 3.14;
clrscr();
printf("Enter radius of the circle: ");
scanf("%f", &r);
area = PI * r * r;
printf("Area=%.2f\n", area);
getch();
}
