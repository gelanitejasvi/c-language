#include<stdio.h>
int product(int a,int b)
{
	int t;
	t=a*b;
	return t;
}
	int main()
	{
		int x,y,p;
		printf("enter x and y:");
		scanf("%d%d",&x,&y);
		p=product(x,y);
		printf("product of a and b is:%d",p);
	}