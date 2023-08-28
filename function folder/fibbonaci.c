#include<stdio.h>
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
        else
	     return(fib(n-1)+fib(n-2));

}
void main()
{
	int i,a;
	printf("enter n number:");
	scanf("%d",&a);
	for(i=1; i<a; i++)
	{
		printf("%d ",fib(i));
	}	

}