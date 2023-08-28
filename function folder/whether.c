#include<stdio.h>
void add()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);
	if(a>=40)
	{
		printf("pass:%d",a);
	}
	else
	{
		printf("fail:%d",a);
	}
}
	int main()
	{
		printf("\n");
		add();
		add();
		add();
		add();
		add();
		printf("\n \n");
	}