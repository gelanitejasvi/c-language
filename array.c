#include<stdio.h>
int main()
{
     int a[5],b[5],i;
     for(i=0;i<5;i++)
     {
       printf("enter val a[%d]:",i);
       scanf("%d",&a[i]);
     }
     printf("\n");  
     for(i=0;i<5;i++)
     {
       printf("enter val b[%d]:",i);
       scanf("%d",&b[i]);
     }
      printf("\na\tb\ttotal\n");

     for(i=0; i<5; i++)
   {
     printf("%d\t%d\t%d\n" ,a[i],b[i],a[i]+b[i]);
    }
     
}