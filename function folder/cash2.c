#include<stdio.h>
void con()
{
	int i,amt,notes;
	int a[]={2000,500,200,100,50,20,10};
	printf("amt:");
	scanf("%d",&amt);
	
	printf("\n");
	
	for(i=0; i<8; i++)
	{
		notes=amt/a[i];
	
	if(notes)
	{
		amt=amt%a[i];
	
	printf("%d X %d =%d \n",notes,a[i],notes*a[i]);
	}
	}
}
 	int main()
	{
		con();
	}