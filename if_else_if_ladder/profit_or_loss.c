#include<stdio.h>
void main()
{
float cp,sp,amount;
clrscr();
printf("enter cp ");
scanf("%f",&cp);
printf("enter sp");
scanf("%f",&sp);
if(sp>cp)
{
amount=sp-cp;
printf("\nthe seller made a profit of:Rs.%.2f\n",amount);
}
else if(cp>sp)
{
amount=cp-sp;
printf("\nthe seller incurred a loss of :Rs.%2f.\n",amount);
}
else
{
printf("\nthere is no profit and no loss .\n");
}
getch();
}
