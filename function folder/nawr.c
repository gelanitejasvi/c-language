#include<stdio.h>
int add()
{
	int a,b,t;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	t=a+b;
	return t;
}
	int main()
{
	int x;
	printf("\n");
	x=add();
	printf("addition of a and b is:%d \n\n",x);
	printf("\n");
}