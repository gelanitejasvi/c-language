#include<stdio.h>
void add()
{
	int a,b;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("small:%d",a);
	}
	else
	{
		printf("smallest:%d",b);
	}
}

	int main()
{
	add();
	add();
	add();
	add();
	printf("\n\n\n\n\n");
}
	