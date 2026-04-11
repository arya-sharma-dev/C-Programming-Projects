#include<stdio.h>
void main()
{
float basicsalary,hra,da,gross_salary;
clrscr();
printf("enter basicsalary of the employee");
scanf("%f",&basicsalary);
if (basicsalary < 1500)
{
hra=basicsalary * 0.10;
da=basicsalary * 0.90;
}
else
{
hra=500;
da=basicsalary * 0.98;
}
gross_salary=basicsalary+hra+da;
printf("basicsalary: %.2f\n",basicsalary);
printf("hra        : %.2f\n",hra);
printf("da         : %.2f\n",da);
printf("________________\n");
printf("gross_salary: %.2f\n",gross_salary);
getch();
}
