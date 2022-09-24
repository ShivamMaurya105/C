//Wap for comparing two strings
#include<stdio.h>
#include<conio.h>
int main()
{
	char A[10];
	char B[10];
	int i=0;
	printf("Enter first string\n");
	gets (A);
	printf("Enter second string\n");
	gets (B);
	while (A[i] !='\0')
	{
		if(A[i]==B[i])
		{
			i=i+1;
		}
		else
		{
			printf("The entered string are not equal");
			break;
		}
		if(A[i]=='\0')
		{
			printf("The entered string are equal");
		}
	}
	return 0;
	
}
