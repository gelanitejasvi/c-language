#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,sp=5;
     clrscr();
     for(i=1; i<=5; i++)
     {
	for(j=1; j<=sp; j++)
	{
	  printf(" ");
	}
	for(j=1; j<=i; j++)
     {
	 printf("* ");
     }
     sp--;
     printf("\n ");
    }
     sp=sp+2;
     for(i=4; i>=1; i--)
     {
	for(j=1; j<=sp; j++)
	{
	  printf(" ");
	  }
	  for(j=1; j<=i; j++)
	  {
	     printf("* ");
	     }
	     sp++;
	     printf("\n ");
	  }
	  getch();
	}



