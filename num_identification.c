#include<stdio.h>
void main()
{
int num;
clrscr();
printf("enter a number:");
scanf("%d",&num);

(num >= 0) ? printf("the number is positive"):printf("the number is negative");
getch();
}
