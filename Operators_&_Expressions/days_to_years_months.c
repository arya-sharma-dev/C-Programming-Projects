#include<stdio.h>
void main()
{
int totaldays,years,months,days,remainingdays;
clrscr();
printf("enter total number of days ");
scanf("%d", &totaldays);
years=totaldays/365;
remainingdays=totaldays%365;
months=remainingdays/30;
days=remainingdays%30;
printf("%d years, %dmonths, %days\n",years,months,days);
getch();
}
