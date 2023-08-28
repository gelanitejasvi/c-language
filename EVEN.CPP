#include<stdio.h>
#include<conio.h>
void main()
{
   int a,n;
   clrscr();
   printf("n");
   scanf("%d",&n);
   for(a=2; a<=n; a+=2)
   {
   printf("\t%d",a);
   }
   getch();
}