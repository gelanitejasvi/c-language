#include<stdio.h>
#include<conio.h>
void main()
{
  char ch,ascii;
  clrscr();
  printf("enter char:");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
  {
   ascii=ch+32;
   printf("\n small char is:%c",ascii);
  }
  else if(ch>='a' && ch<='z')
  {
  ascii=ch-32;
  printf("\n capital char is:%c",ascii);
  }
  getch();
}