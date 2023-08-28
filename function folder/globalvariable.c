#include<stdio.h>
int m,s,e,t;
float per;
void dis()
{
	printf("maths marks:%d\n",m);
	printf("science marks:%d\n",s);
	printf("english marks:%d\n",e);
	printf("total marks:%d\n",t);
	printf("percentage:%2f\n",per);
}
void clac()
{
	t=m+s+e;
	per=(float)t/3;
	dis();
}
void setdata()
{
	printf("enter maths marks:");
	scanf("%d",&m);
	printf("enter science marks:");
	scanf("%d",&s);
	printf("enter english marks:");
	scanf("%d",&e);
	clac();
}
int main()
{
	setdata();
}