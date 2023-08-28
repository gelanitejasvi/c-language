#include<stdio.h>
int fun(int n)
{
	printf("winding phase:%d\n",n);
	if(n<3)
	{
		fun(++n);
	}
	printf("unwinding phase:%d\n",n);
}
	int main()
	{
		fun(1);
	}



/* n=1 => wp 1     uwp 2
   n=2 => wp 2     uwp 3
   n=3 => wp 3     uwp 3
*/