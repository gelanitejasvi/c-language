#include<stdio.h>
int main()
{
	int i,j;
	char str[30];
	printf("str:");
	gets(str);
	j=0;	
	while(str[j]!='\0')
	{
		j++;
	}
	i=j-1;
	while(i>=0)
	{
		printf("%c",str[i]);
		i--;
	}
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("\n string length is:%d",i);
}