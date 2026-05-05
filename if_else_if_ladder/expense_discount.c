#include<stdio.h>
void main()
{
int quantity;
float price_per_item, total_expense, discount;
clrscr();
printf("enter quantity:");
scanf("%d",&quantity);
printf("enter price per item:");
scanf("%f",&price_per_item);
total_expense = quantity * price_per_item;
if (total_expense>5000)
{
discount=total_expense * 0.10;
total_expense=total_expense-discount;
printf("\ndiscount of 10% applied!");
}
else
{
printf("\nNO discount applied.");
}
printf("\nTotal Expense: Rs%.2f\n",total_expense);
getch();
}
