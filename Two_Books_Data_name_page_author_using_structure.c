//Wap to enter the data of two books like name,pages,author etc using structure and display it.
#include<stdio.h>
#include<conio.h>
int main()
{
	struct books
	{
		char name[50];
		int pages;
		char author[50];
	};
	struct books b1,b2;
	printf("Enter the data of first book\n");
	printf("Enter book name\n");
	gets(b1.name);
	printf("Enter the pages\n");
	scanf("%d",&b1.pages);      
	fflush(stdin);
	printf("Enter author\n");
	gets(b1.author);
	{
		printf("Enter the data of second book\n");
		printf("Enter the book name\n");
		gets(b2.name);
		printf("Enter the pages\n");
		scanf("%d",&b2.pages);
		fflush(stdin);
		printf("Enter the author\n");
		gets(b2.author);
		printf("The data of books\n");
		printf("%s\t%d\t%s\n",b1.name,b1.pages,b1.author);
	    printf("%s\t%d\t%s",b2.name,b2.pages,b2.author);
	    
	    return 0;
	}
}
