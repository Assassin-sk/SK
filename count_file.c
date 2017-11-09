#include<stdio.h>
#include<stdlib.h>
int main(int argv,char*av[])
{
	int c=0,b=0,t=0,n=0;
	FILE *fp;
	char ch;
	fp=fopen(av[1],"r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		else
		{
			if(ch!=' ' && ch!='\n')
			c++;
			if(ch==' ')
				b++;
			if(ch=='\t')
				t++;
			if(ch=='\n')
				n++;
		}
	}
		printf("\n Number of characters are: %d\nNumber of blank spaces: %d\nNumber of  lines are: %d\nNumber of are tabs: %d\n",c,b,n,t);
	fclose(fp);
	return 0;
}

