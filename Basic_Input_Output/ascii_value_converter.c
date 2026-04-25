#include <stdio.h>
#include <conio.h>

void main() {
char ch;

clrscr();

printf("Enter any character: ");
scanf("%c", &ch);
printf("\n The ASCII vale of %c is: %d", ch, ch);
printf("\n\n Press any key to exit...");
getchar();
getchar();
}
