#include<stdio.h>
void cash()
{
	int cash;
	printf("enter rupees:");
	scanf("%d",&cash);
	
	printf("\n2000 X %d",cash/2000);
	cash=cash%2000;

	printf("\n500 X %d",cash/500);
	cash=cash%500;

	printf("\n200 X %d",cash/200);
	cash=cash%200;

	printf("\n100 X %d",cash/100);
	cash=cash%100;

	printf("\n50 X %d",cash/50);
	cash=cash%50;

	printf("\n20 X %d",cash/20);
	cash=cash%20;

	printf("\n10 X %d",cash/10);
	cash=cash%10;
}
	int main()
	{
		cash();
	}