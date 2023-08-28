#include<stdio.h>
#include<conio.h>
void main()
{
   int a,sum=0;
   clrscr();
   for(a=1;a<=10;a++)
   {
     sum+=a;
     printf("%d",a);
   }
   printf("\nsum:%d",sum);
   getch();
}