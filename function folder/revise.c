#include<stdio.h>
void main()
{
	int a,i,rev=0;
	printf("enter a:");
	scanf("%d",&a);
	while(a!=0)
	{
		i=a%10;
		rev=rev*10+i;
		a/=10;
	}
	printf("revise no.is:%d",rev);
}