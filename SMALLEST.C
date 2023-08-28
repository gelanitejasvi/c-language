//find out largest among them a,b,c.
#include<stdio.h>
#include<conio.h>

int main()
{
  int a,b,c;
  clrscr();
  printf("enter a,b and c:");
  scanf("%d%d%d",&a,&b,&c);
  if(a<b&& a<c)
  {
    printf("smallest no:%d",a);
  }
  else if(b<c)
  {
    printf("smaller no:%d",b);
  }
  else{
	printf("small no:%d",c);
  }
  getch();
}