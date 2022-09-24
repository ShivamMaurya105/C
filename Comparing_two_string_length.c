//Comparing two string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char A[10];
	char B[10];
	int i=0,str1,str2;
	printf("Enter first string\n");
	gets(A);
	printf("Enter second string\n");
	gets(B);
	str1=strlen(A);
	str2=strlen(B);
	if(str1>=str2)
	{
		while(A[i]!='\0')
		{
			if(A[i]==B[i])
			{
			i=i+1;
		    }
		else
		{
			printf("Not equal");
			break;
		}
	}
		if(A[i=='\0'])
		{
			printf("Equal");
		}
	}
	else
	{
		while(B[i]!='\0')
		{
			if(B[i]==A[i])
			{
				i=i+1;
			}
			else
			{
				printf("Not equal");
				break;
			}
		}
	}
	if(B[i]=='\0')
	{
		printf("Equal");
	}
	return 0;
}
