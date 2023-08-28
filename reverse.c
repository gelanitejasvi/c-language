#include<stdio.h>
int main()
{
	char str[15];
	int i;
	printf("enter string:");
	gets(str);
	printf("your string is:%s",str);
	for(i=0; str[i]; i++);
	printf("\nstring in reverse order:");
	for(i=i; i>=0; i--)
	printf("%c",str[i]);
	
} 
