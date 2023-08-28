#include<stdio.h>
#include<conio.h>
void main()
{
  int a=1,i,n;
  clrscr();
  printf("n");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
  printf("%d", a*i);
  a=a*2;
  }
  getch();
}