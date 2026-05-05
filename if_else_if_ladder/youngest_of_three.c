#include<stdio.h>
void main()
{
int ram,sulabh,ajay;
clrscr();
printf("enter age of ram");
scanf("%d",&ram);
printf("enter age of sulabh");
scanf("%d",&sulabh);
printf("enter age of ajay");
scanf("%d",&ajay);
if (ram<sulabh && ram<ajay)
{
printf("\nram is the youngest");
}
else if(sulabh<ram && sulabh<ajay)
{
printf("\nsulabh is the youngest");
}
else if(ajay<ram && ajay<sulabh)
{
printf("\najay is the youngest");
}
else
{
printf("\n two or more people share the same youngest age ");
}
