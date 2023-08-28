#include<stdio.h>
float feet()
{
	float inches,feet;
	printf("enter inches :");
	scanf("%f",&inches);
	feet=inches*2.54;
	return feet;
}
	float main()
	{
		float x;
		x=inches();
		printf("inches convert into feet:%d\n\n",x);
	}