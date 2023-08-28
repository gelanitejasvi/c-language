#include<stdio.h>
void main()
{
		int a[3][3],b[3][3],i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("enter val a[%d][%d]:",i,j);
				scanf("%d",&a[j][i]);
			}
		}
  		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("enter val b[%d][%d]:",i,j);
				scanf("%d",&b[j][i]);
			}
		} 
		printf("\n"); 
               for(j=0;j<3;j++)
		{
			for(i=0;i<3;i++)
			{
				printf("%d",a[i][j]);
			}
		}
	{
		printf("\t");
		for(i=0;i<3;i++)
			{
				printf("%d",b[i][j]);
			}
		printf("\t");
                for(i=0;i<3;i++)
		{
			printf("%d",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
