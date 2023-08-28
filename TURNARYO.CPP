#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b, c;
 clrscr();
 printf("enter a,b, c:");
 scanf("%f%f%f",&a,&b,&c);
 printf("%f is largest among",(a>b ?(a>c ?a:c):b>c ? b:c));
 getch();
}