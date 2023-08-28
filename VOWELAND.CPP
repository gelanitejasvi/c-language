#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("enter ch:");
  scanf("%c",&ch);
  if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u')
  {
    printf("vowel char is:%c",ch);
    }
    else
    {
      printf("cosonant char is:%c",ch);
      }
  getch();
}
