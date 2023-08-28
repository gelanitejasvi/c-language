#include<stdio.h>
int main()
 {   
    for(int i=1; i<=15; i++)
    {
        if(i==5 || i==12)
       {
         continue;
       }
    
    printf("%d ",i);
}
 }