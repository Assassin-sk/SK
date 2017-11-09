#include<stdio.h>
#include<stdlib.h>
struct department
{
	int yr,s;
	char name[20];
}d[10];
int n,i;
struct department display(struct department *);
void main()
{
	printf("Enter the number of departments:  ");
	scanf("%d",&n);
	printf("\nEnter the name, year of establishment and number of students of all departments:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d",d[i].name,&d[i].yr,&d[i].s);
	}
	display(d);
}
struct department display(struct department *d1)
{
	printf("\n-------------------------------------------\n");
	printf("Deparment information\n");	
	printf("\n-------------------------------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t%d\t\t%d\n",d1->name,d1->yr,d1->s);
		d1++;
	}
}

