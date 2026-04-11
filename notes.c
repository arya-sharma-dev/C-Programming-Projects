#include<stdio.h>
void main()
{
int amount, n500, n100, n50, n20, n10, n5, n1;
clrscr();
printf("enter the total amount:");
scanf("%d",&amount);

n500=amount/500;
amount=amount%500;

n100=amount/100;
amount=amount%100;

n50=amount/50;
amount=amount%50;

n20=amount/20;
amount=amount%20;

n10=amount/10;
amount=amount%10;

n5=amount/5;
amount=amount%5;

n1=amount;

printf("\n total number of notes:");
printf("\n 500: %d",n500);
printf("\n 100: %d",n100);
printf("\n 50 : %d",n50);
printf("\n 20 : %d",n20);
printf("\n 10 : %d",n10);
printf("\n 5  : %d",n5);
printf("\n 1  : %d",n1);
getch();
}
