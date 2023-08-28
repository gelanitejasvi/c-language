#include<stdio.h>
int main()
{
   	int a[5],i,sum=0,total=0;
        for(i=0; i<5; i++)
        {
           	printf("enter val a[%d]:",i);
		scanf("%d",&a[i]);
	}
		for(i=0; i<5; i++)
  	{
		printf("%d\n",a[i]);	
                if(i%2==0)
            	sum=sum+a[i];
	        else
               	total=total+a[i];
	}
		printf("even no.sum is:%d",sum);
		printf("\nodd no sum is:%d",total);

}