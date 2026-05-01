#include<stdio.h>
void main()
{
int num, remainder;
long reverse= 0;
 clrscr ();
 printf ("enter an integer number");
 scanf("%d", &num );
 while (num !=0){
 remainder = num %10;
 reverse = reverse *10 + remainder;
 num = num / 10 ;
 }
 printf ("\n the reversed number is : %1d", reverse );
 getch();
 }
