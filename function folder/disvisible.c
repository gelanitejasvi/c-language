#include<stdio.h>
void add()
{
	int a;
	printf("enter a:");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("disvisible by 5 :%d",a);
	}
	else
	{
		printf("undisvisible by 5:%d",a);
	}
}
 	int main()
	{
		printf("\n");
		add();
		add();
		add();
		printf("\n\n\n\n");
	}