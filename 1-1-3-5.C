#include <stdio.h>
#include <conio.h>

void main()
{
   int a=1,b=1,c,n,i;
   clrscr();
   printf("n");
   scanf("%d",&n);
   printf("%d%d",a,b);
   for(i=1;i<=n;i++)
   {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    }
    getch();
   }