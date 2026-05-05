
#include<stdio.h>

void main()
{
float a1,a2,a3,sum;
clrscr();
printf("enter the three angles of the triangle \n");
scanf("%f %f %f", &a1, &a2, &a3);
sum = a1+a2+a3;
if (sum==180 && a1>0 && a2>0 && a3>0)
{
printf("the triangle is valid \n");
}
else
{
printf("the triangle is not valid \n");
}
getch();
}
