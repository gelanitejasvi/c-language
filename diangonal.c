#include<stdio.h>
void main()
{
		int a[5][5],i,j;
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
			    printf("enter a[%d][%d]:",i,j);
			    scanf("%d",&a[i][j]);
			}
		}
		for(i=0; i<3; i++)
		{
			for(j=0;j<3;j++)
			{
			   if(a[i]==a[j]%2)
			   sum=sum+a[i][j];
			   
			   if(a[i]<a[j])
			   sum=sum+a[i][j];
			   
			   if(a[i]>a[j])
			   sum=sum+a[i][j];
			}
		printf("\n Total of diagonal:%d",sum);
		printf("\n Total of upper triangle:%d",sum);
		printf("\n Total of lower triangle:%d",sum);
		}
		printf("\n");
}	