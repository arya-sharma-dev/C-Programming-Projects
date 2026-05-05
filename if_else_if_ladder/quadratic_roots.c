#include<stdio.h>
void main()
{
float a,b,c,D,r1,r2;
clrscr();
printf("enter a, b, and c");
scanf("%f %f %f",&a, &b, &c);
D=(b*b)-4*a*c;
printf("Discriminant = %.2f\n",D);
if(D>0)
{
r1=(-b+sqrt(D)/(2*a));
r2=(-b-sqrt(D)/(2*a));
printf("roots are  %.2fand %.2f",r1,r2);
}
else if(D==0)
{
r1= -b/(2*a);
printf("root is    %.2f",r1);
}
else
{
printf("roots are imaginary ");
}
getch();
}
