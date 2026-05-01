#include<stdio.h>
void main(){
int num, remainder, sum = 0;
clrscr();
printf("enter an integer");
scanf("%d",&num);
if( num < 0) num = -num;
while (num != 0)
{
remainder = num %10;
sum = sum + remainder;
num= num/ 10;
}
printf("the sum of the digits is :%d",sum);
getch();
}
