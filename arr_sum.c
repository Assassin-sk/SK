#include<stdio.h>
#include<stdlib.h>
void sum(int [],int);
void main()
{
	int a[50],i,n;
	printf("Enter the number of element:\n");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(a,n);
}
void sum(int b[50],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum=sum+b[i];
	}
	printf("The sum of the element is %d\n",sum);
}
