#include<stdio.h>
void main()
{
int num,absolutevalue;
clrscr();
printf("enter any number:");
scanf("%d",&num);
if (num < 0)
{
absolutevalue=-num;
printf("the absolute value is %d\n",absolutevalue);
}
else
{
printf("the absolute value is %d\n",num);
}
getch();
}

