#include<stdio.h>
void main() {
float dummy = 0.0, *ptr = &dummy;
int n, i;
float ln2_sum = 0.0;
clrscr();
printf("enter the value of n :");
scanf("%d",&n);
for ( i = 1; i <= n; i++) {
if (i % 2 != 0) {
ln2_sum = ln2_sum + (1.0/ i);
}
else {
ln2_sum = ln2_sum - (1.0/ i);
}
}
printf("\n the computed value of ln(2) upto %d terms is : %f", n, ln2_sum);
getch();
}
