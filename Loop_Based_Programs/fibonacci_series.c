#include<stdio.h>
void main() {
long int n, i;
long int t1 = 0, t2 = 1, next_term;
clrscr();
printf(" enter the number of terms :");
scanf("%ld",&n);
printf("\nfibonacci series upto %ld terms:\n",n);
for (i = 1; i <= n; i++) {
printf("%ld, ", t1);
next_term = t1 + t2;
t1 = t2;
t2 = next_term ;
}
getch();
}
