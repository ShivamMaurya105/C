//Wap to print the even numbers between 1 to 20.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("Even numbers between 1 to 20:\n");
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
	return 0;
}
