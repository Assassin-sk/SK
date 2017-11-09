#include<stdio.h>
#include<stdlib.h>
struct book
{
	int pages;
	float price;
	char auth[20];
}b,b3;
struct book display(struct book);
void main()
{
	printf("Enter the pages, price and author of the book:\n");
	scanf("%d%f%s",&b.pages,&b.price,b.auth);
	printf("\n---------------------------------------------\n");
	b3=display(b);
	printf("\n---------------------------------------------\n");
	printf("\nModified info:\n");
	printf("PAGES\tPRICE\t\tAUTHOR\n");
	printf("%d\t%f\t%s\n",b3.pages,b3.price,b3.auth);
		
}
struct book display(struct book b2)
{
	printf("\n");
	printf("PAGES\tPRICE\t\tAUTHOR\n");
	printf("%d\t%f\t%s\n",b2.pages,b2.price,b2.auth);
	printf("\n------------------------------------------\n");
	printf("Enter the info to modify:\n");
	scanf("%d%f%s",&b2.pages,&b2.price,b2.auth);
	return(b2);
}

