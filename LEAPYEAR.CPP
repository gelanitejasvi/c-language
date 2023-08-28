#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("enter a:");
  scanf("%d",&a);
  if(a%4==0)
  {
  printf("leap year:%d",a);
  }
  else
  {
  printf("no leap year:%d",a);
  }
  getch();
}