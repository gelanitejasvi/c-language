#include<stdio.h>
int main()
{
	char str[20];
	printf("enter string:");
	gets(str);
	printf("your string is:%s",str);
	int i=0;
	while(str[i] !='\0')
	{
	      i++;
	}
	printf("\n string length is :%d",i);
}