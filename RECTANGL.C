#include<stdio.h>
#include<conio.h>
void main()
{
   int a,w,l;
   clrscr();
   printf("enter w:");
   scanf("%d",&w);
   printf("enter l:");
   scanf("%d",&l);
   a=w*l;
   printf("area of rectangle:%d",a);
   getch();
}