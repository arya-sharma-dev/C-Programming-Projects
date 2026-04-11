#include<stdio.h>
void main()
{
char ch;
clrscr();
printf("enter a character:");
scanf("%c",&ch);
printf("the character following '%c'is :%c\n",ch,ch+1);
getch();
}
