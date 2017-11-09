#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void main(int a,char *argv[])
{
	FILE *p;
	int n;
	char str[20],c,ch;
	p=fopen("argv[1]","r");
	if(p==NULL)
	{
		printf("\nThe file not exist\n");
	}
	else
	{
		while((c=fgetc(p))!=EOF)
		{
			printf("%c",c);
		}
		
	}n=fclose(p);
	if(n==0)
	{
		printf("\nFile closed sucessfully\n");
	}
	else
	{
		printf("Error while closing file\n");
	}

}
