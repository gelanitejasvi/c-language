#include<stdio.h>     //product bill
struct product
{
    int no;
    char name[10];
    int rate,qty,amount;
    float bill, gst,discount,netbill;
};
int main()
{
    struct product a[5];
    int i;
    for(i=0; i<2; i++)
    {
        printf("enter no:");
        scanf("%d",&a[i].no);
        printf("enter name:");
        scanf("%s",&a[i].name);
        printf("enter rate:");
        scanf("%d",&a[i].rate);
        printf("enter qty:");
        scanf("%d",&a[i].qty);
      
    }
    printf("no\tname\trate\tqty\tamount\tbill\tgst\tdiscount\tnetbill");
    for(i=0; i<2; i++)
    {
          a[i].amount=(a[i].rate*a[i].qty);
        a[i].discount=a[i].amount*0.05;
        a[i].bill= a[i].amount- a[i].discount;
        a[i].gst =a[i].bill*0.18;
         a[i].netbill= a[i].bill+a[i].gst;
       
        printf("\n%d\t%s\t%d\t%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f",a[i].no,a[i].name,a[i].rate,a[i].qty,a[i].amount,a[i].bill,a[i].gst,a[i].discount,a[i].netbill);
        printf("\n");
    }
}