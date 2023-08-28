#include<stdio.h>
#define n 15
int dis(int a[])
{
	int min,max;
	min=max=a[0];
	for(int i=0; i<n; i++)
	{
		
		if(min>a[i]) 
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
		printf("min is:%d",min);
		printf("\nmax is:%d",max);
		
}
int main()
{
	int arr[n],i;
	for(i=0; i<n; i++)
	{
		printf("enter val:");
		scanf("%d",&arr[i]);
	}
	dis(arr);
}
