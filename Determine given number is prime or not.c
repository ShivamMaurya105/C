//WAP to determine a given number is prime or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=2;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("%d is not a prime number",n);
			break;
		}
		i=i+1;
	}
	if(i==n)
	{
		printf("%d is a prime number",n);
	}
	getch();
	return 0;
}

