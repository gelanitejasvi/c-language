#include<stdio.h>
int main()
{
	char s1[20],s2[20],s3[20];
	int i,j=0;
	printf("enter s1:");
	gets(s1);
	printf("enter s2:");
	gets(s2);
	while(s1[i]!='\0')
	{
		s3[j]=s1[i];
		i++;
		j++;
	}
	i=0;
	while(s2[i]!='\0')
	{
		s3[j]=s2[i];
		i++;
		j++;
	}
	s3[j]='\0';
	printf("\nstringmerge:%s",s3);
}