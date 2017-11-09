#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct info
{
	char name[20];
	int yr,emp;
};
struct info c1;
struct info c2;
int i;
void display(struct info,struct info,struct info *,struct info *);
void main()
{
	int n;
	printf("\nEnter the name,year of establishment and number of employee of the company:\n");
	scanf("%s%d%d",c1.name,&c1.yr,&c1.emp);
	printf("\n------------------------------------------\n");
	printf("\nEnter the data of the second company:\n  ");
	printf("\nEnter the name,year of establishment and number of employee of the company:\n");
	scanf("%s%d%d",c2.name,&c2.yr,&c2.emp);
	printf("\n------------------------------------------\n");
	display(c1,c2,&c1,&c2);
	printf("\n------------------------------------------\n");	
	printf("The modified info of company:\n");
	printf("Company 1:\n");
	printf("%s  %d  %d\n",c1.name,c1.yr,c1.emp);
	printf("Company 2:\n");
	printf("%s  %d  %d\n",c2.name,c2.yr,c2.emp);
}
void display(struct info c3,struct info c4,struct info *c5,struct info *c6)
{	
	char a[30],x[30];
	int b,c,y,z;
	printf("The information of the first company:\n");
	printf("NAME\tYEAR\tNo.of EMP\n");
	printf("%s\t%d\t%d\n",c3.name,c3.yr,c3.emp);
	printf("The information of the second company:\n");
	printf("NAME\tYEAR\tNo.of EMP\n");
	printf("%s\t%d\t%d\n",c4.name,c4.yr,c4.emp);
	printf("\n------------------------------------------\n");
	printf("Enter info of company 1 to modify:\n");
	scanf("%s%d%d",&a,&b,&c);
	printf("Enter info of company 2 to modify:\n");
	scanf("%s%d%d",&x,&y,&z);	
	printf("Modified info of company:\n");
	strcpy(c5->name,a);
	c5->yr=b;
	c5->emp=c;
	strcpy(c6->name,x);
	c6->yr=y;
	c6->emp=z;
}
