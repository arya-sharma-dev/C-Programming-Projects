#include<stdio.h>
void main(){
int num, p = 0, n = 0, z = 0;
char choice;
clrscr();
do {
printf("enter a number: ");
scanf("%d",&num);
if ( num > 0) {
p++;
}
else if (num < 0) {
n++;
}
else {
z++;
}
printf("do you want to enter another number ? (Y/N): ");
scanf(" %c", &choice);
}while ( choice == 'Y' || choice == 'y');
printf("\n--- results ---");
printf("\npositive numbers: %d",p);
printf("\nnegative numbers: %d",n);
printf("\nzeros: %d",z);
getch();
}
