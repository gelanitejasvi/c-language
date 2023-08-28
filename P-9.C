#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,a=11;
   clrscr();
   for(i=1; i<=5; i++)
   {
    for(j=1; j<=5; j++)
    {
    printf("%d ",a++);
    }
    printf("\n ");
    a=a+5;
    }
    getch();
   }