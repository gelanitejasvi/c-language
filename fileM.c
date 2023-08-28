#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("abc.txt","w+");
   // fp = fopen("D:/tejasvi/Data structure/abc.txt","w+");
    fprintf(fp,"welcome to skill qode,decode your skill hear..\n");
    fputs("your are entering learning c language now..\n",fp);
    fputs("we are enjoying every thing..\n",fp);
    fclose(fp);
}
/*
    r= open a text file to read mode
    w= open a text file to write mode
    a= open a text file to append mode
*/