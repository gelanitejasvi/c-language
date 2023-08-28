#include<stdio.h>
#include<conio.h>

int main()
{
  int age;
  clrscr();
  printf("enter age:");
  scanf("%d",&age);
  if(age>=18){
	     printf("voting:%d",age);
	     }
  else{
       printf("no voting:%d",age);
       }
  getch();
}