#include<stdio.h>
int main()
{
	char str[20],a[20];
	int i,j,k;
	printf("enter str:");
	gets(str);
	for(i=0; str[i]!='\0'; i++);
	k=i;
	for(j=0; j<i;j++)
	{
	   a[j]=str[--k];
	}
         a[j]='\0';
	printf("\nstring in reverse:%s",a);
}