#include<stdio.h>
void main()
{
int a,b,c,max;
clrscr();
printf("enter the number a");
scanf("%d",&a);
printf("enter the number b");
scanf("%d",&b);
printf("enter the number c");
scanf("%d",&c);
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("\n the largest number is:%d",max);
getch();
}
