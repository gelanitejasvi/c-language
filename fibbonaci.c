#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int x=fact(5);
	printf("factorial is:%d",x);
}


/* factorial 5! =5*4*3*2*1
	     5*4!=4*3*2*1
		4*3!=3*2*1
		3*2!=2*1
		2*1!=1
*/