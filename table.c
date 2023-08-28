#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter n:");
    scanf("%d",&n);
hello:
    if(i<=10)
    {
        printf("%d X %d =%d\n",n,i,n*i);
        i++;
        goto hello;
    }
}