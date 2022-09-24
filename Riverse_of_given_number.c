//To find the reverse of a given no
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,rev=0,d;
	printf("Enter a number : \n");
	scanf("%d",&n);
	while(n>0)
	{
		   d=n%10;
		   rev=rev*10+d;
		   n=n/10;
	}
	
	printf(" the reverse is %d",rev);
	return 0;
}

