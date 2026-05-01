#include<stdio.h>
void main () {
long num, max = 1, min = 1;
char choice;
int first = 1;
clrscr();
do {
printf("\n enter a number :");
scanf("%ld", &num);
if ( first == 1) {
max = num;
min = num;
first = 0;
}
else {
if (num > max) {
max = num;
}
if (num < min) {
min = num;
}
}
printf(" do you want to enter another? (y/n);");
scanf(" %c", &choice);
}
while (choice == 'y' || choice == 'Y');
printf("\n--- final results ---");
printf("\nmaximum number : %ld",max);
printf("\nminimum number : %ld",min);
getch();
}

