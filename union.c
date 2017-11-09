#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union student
{
	int roll;
	char name[10];
	
}u;
void main()
{
	printf("Enter the name of the student:\n");
	scanf("%s",u.name);
	printf("The name of the student:\n%s\n",u.name);
	printf("Enter the roll no. of student\n");
	scanf("%d",&u.roll);
	printf("The roll no. of student\n%d\n",u.roll);
	printf("\nThe size of the union is %d",sizeof(u));
}

