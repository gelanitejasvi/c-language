#include<stdio.h>
float celsius()
{
	float celsius,fahrenheit;
	printf("enter celsius:");
	scanf("%f",&celsius);
	fahrenheit=33.8*celsius;
}
	float main()
	{
		float x;
		x=celsius();
		printf("celsius to fahrenheit:%f",x);
	}
		