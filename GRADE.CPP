#include<stdio.h>
#include<conio.h>

void main()
{
  float pr,total,grade,a,b,c,d,marks,maths,eng,sci,fail;
  clrscr();
  printf("enter maths,sci,eng:");
  scanf("%f%f%f",&maths,&sci,&eng);
  total=maths+sci+eng;
  printf("total is:%f",total);
  pr=total/300*100;
  printf("pr is:%f",pr);
  if(pr>=75)
  {
  printf("a:");
  }
  else if(pr>=45)
 {
  printf("c:");
 }
 else if(pr>=35)
 {
  printf("d:");
 }
 else if(pr<35)
 {
  printf("fail:");
 }
 getch();
}