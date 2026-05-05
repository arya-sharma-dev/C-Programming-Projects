#include<stdio.h>
void main()
{
char ch;
clrscr();
printf("enter any character");
scanf("%c",&ch);
if (ch>='A'&& ch<='Z')
{
printf("%c is a capital letter \n",ch);
}
else if (ch>='a' && ch<='z')
{
printf("%c is a small case letter \n",ch);
}
else if (ch>='0' && ch<='9')
{
printf("%c is a digit \n",ch);
}
else
{
printf("%c is a special symbol \n",ch);
}
getch();
}
