#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,h;
   clrscr();
   printf("enter base:");
   scanf("%d:",&b);
   printf("enter height:");
   scanf("%d:",&h);
   a=1/2*b*h;
   printf("area of triangle:%d",a);
   getch();
}