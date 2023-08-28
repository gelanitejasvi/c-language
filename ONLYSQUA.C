#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,sp=15;
    clrscr();
    for(i=1; i<=sp; i++)
    {
       for(j=1; j<=sp; j++)
       {
	  if(j==1 ||j==sp ||i==1 ||i==sp)
	  printf("* ");
	  else
	     printf("  ");
	  }
	     printf("\n ");
	  }
	  getch();
       }