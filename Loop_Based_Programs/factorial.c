#include<stdio.h>
void main()
{
int num ,i,factorial=1;
clrscr();
printf("enter a positive integer ");
scanf("%d", &num);
for(i=1; i<=num; i++){
factorial=factorial*i;
}
printf("factorial of %d=%d",num,factorial);
getch();
}

