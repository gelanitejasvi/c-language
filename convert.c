#include<stdio.h>
int feet()
{
	int feet,inches;
	printf("enter feet :");
	scanf("%d",&feet);
	inches=feet*12;
	return inches;
}
	int main()
	{
		int x;
		x=feet();
		printf("feet convert into inches:%d\n\n",x);
	}