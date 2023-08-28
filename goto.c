#include<stdio.h>
int main()
{
    int i=1;
    hello:
        if(i<=15)
        {
            printf("%d ",i);
            i++;
            goto hello;
        }
}