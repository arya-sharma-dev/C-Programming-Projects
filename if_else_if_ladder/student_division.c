#include<stdio.h>
void main()
{
float s1, s2, s3, s4, s5, total, percentage;
clrscr();
printf("enter marks for five subjects ");
scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
percentage=total/5;
printf("percentage %.2f%%\n",percentage);
if(percentage>=60)
{
printf("division : frist division\n");
}
else if(percentage>=50)
{
printf("division : second division\n");
}
else if(percentage>=40)
{
printf("division : third division\n");
}
else
{
printf("division  : fail \n");
}
getch();
}











