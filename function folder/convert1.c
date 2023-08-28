#include<stdio.h>
float inches()
{
	float inches,cm;
	printf("enter inches:");
	scanf("%f",&inches);
	cm=inches*2.54;
	return cm;
}
	float main()
	{
		 float x;
		 x=inches();
		 printf("inches convert cm:%d",x);
	}