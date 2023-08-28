#include<stdio.h>
int main()
{
    int maths[5],sci[5],eng[5],total,i;
    float pr;
    	for(i=0; i<5; i++)
  	{
     		printf("enter val maths[%d]:",i);
     		scanf("%d",&maths[i]);
  	}
  	printf("\n");
   	for(i=0; i<5; i++)
  	{
     		printf("enter val sci[%d]:",i);
     		scanf("%d",&sci[i]);
  	}
   	printf("\n");
   	for(i=0; i<5; i++)
  	{
     		printf("enter val eng[%d]:",i);
     		scanf("%d",&eng[i]);
  	}

	printf("\nmaths\tsci\teng\ttotal\tpr\tgrade");
  	for(i=0;i<5;i++)
 	{
   		total=maths[i]+sci[i]+eng[i];
   		pr=total/3;
		printf("\n%d\t%d\t%d\t%d\t%.2f\t",maths[i],sci[i],eng[i],total,pr);

 		if(maths[i]<35 || sci[i]<35 || eng[i]<35)
 		{
  			printf("fail");
 		}
 		else if(pr>=80)
		{
 			printf("A");
		}
  		else if(pr>=50)
		{
  			printf("B");
		}
  		else if(pr>=40)
		{
  			printf("C");
		}
		else
		{
  			printf("D:");
		}
 	}
 
}