#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void main(int a,char *ar[])
{
	FILE *p,*q;
	int n;
	char ch;
	p=fopen(ar[1],"r");
	q=fopen(ar[2],"w");	
	if(p==NULL)
	{
	printf("\nfile not exist\n");	
	}
	else
	{
		while((ch=fgetc(p))!=EOF)
		{
			printf("%c",ch);
			fputc(tolower(ch),q);
		}
		if(fputc(tolower(ch),q))
		printf("\nOperation done successfully\n");
	}n=fcloseall();
	if(n==0)
	{
		printf("\nAll file closed\n");
	}
	else
	{
		printf("\nError while closing the files\n");
	}
}
