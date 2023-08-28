#include<stdio.h>
#define n 5
int dis(int a[])
{
	for(int i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
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