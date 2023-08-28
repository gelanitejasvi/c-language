#include<stdio.h>
void add()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("voting:%d",age);
	}
	else
	{
		printf("no voting:%d",age);
	}
}
 	int main()
	{
		printf("\n");
		add();
		add();
		add();
		printf("\n");
	}	