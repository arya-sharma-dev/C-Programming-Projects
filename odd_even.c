#include<stdio.h>
void main()
{
int num;
clrscr();
printf("enter a number to check even or odd");
scanf("%d",&num);

(num %2 ==0)?printf("the number is even"):printf("the number is odd");
getch();
}
