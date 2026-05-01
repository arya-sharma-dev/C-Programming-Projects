#include<stdio.h>
void main(){
int n1, n2, a, b, temp;
clrscr();
printf("enter two numbers");
scanf("%d %d", &n1 ,&n2);
a = n1;
b = n2;
while (b != 0) {
temp = b;
b = a % b;
a = temp;
}
printf(" HCF of %d and %d is: %d", n1, n2, a);
getch();
}
