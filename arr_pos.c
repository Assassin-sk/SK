#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,a[30],pos,ele;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the element in the array:\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("The elements in the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Enter the position in which you are going to insert the element:\n");
	scanf("%d",&pos);
	printf("Enter the element:\n");
	scanf("%d",&ele);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}a[pos-1]=ele;
	printf("The elements in the array are:\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",a[i]);
	}
}
