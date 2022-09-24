//Passing an entire array to a function
#include<stdio.h>
#include<conio.h>
void display(int*);
void display(int* a)
	{
		int i;
	for(i=0;i<=4;i++)
	{
		printf("%d",*(a+1));
	}
}
	int main()
	{
		int A[15],i;
		printf("Enter the array element\n");
		for(i=0;i<=4;i=i+1);
		{
			scanf("%d",&A[i]);
		}
		display(A);
		return 0;
	}
