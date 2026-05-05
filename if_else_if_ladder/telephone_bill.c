#include<stdio.h>
void main()
{
int calls;
float bill=0;
clrscr();
printf("enter the total numberof calls ");
scanf("%d",&calls);
if ( calls <=100)
{
bill=200;
}
else if( calls <=150)
{
bill=200+(calls - 100 )* 0.60;
}
else if (calls<=200)
{
bill=200+(50*0.60)+(calls-150)*0.50;
}
else
{
bill =200 + (50*0.60)+(50*0.50)+(calls-200)*0.40;
}
printf("total monthly bill: Rs.%.2f\n",bill);
getch();
}
