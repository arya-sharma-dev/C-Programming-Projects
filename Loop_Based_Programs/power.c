#include<stdio.h>
void main(){
int base, exponent,result=1, n=1;
clrscr();
printf("enter the base number =");
scanf("%d",&base);
printf("enter the exponentnumber=");
scanf("%d",&exponent);
while (n <= exponent){
	result = result*base;
	n++;
	}
printf("\n%draised to the power of %d is : %d",base, exponent, result);
getch();
}
