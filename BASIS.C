#include<stdio.h>
#include<conio.h>

 void main()
{
  float basis,hra,da,gross;
  clrscr();
  printf("enter basis:");
  scanf("%f",&basis);
  if(basis<=5000)
  {hra=0.08*basis;
  da=0.20*basis;}
  else if(basis<=10000)
  {hra=0.12*basis;
  da=0.30*basis;}
  else if(basis<=15000)
  {hra=0.15*basis;
  da=0.40*basis;}
  else if(basis<15000)
  {hra=0.20*basis;
  da=0.50*basis;}
  gross=basis+hra+da;
  printf("basis:%f",gross);
  getch();
}