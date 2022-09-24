//Wap to design a calculator using switch case statement.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,rslt,i;
	char ch='y';
	while(ch=='y')
	{
	printf("Enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("Enter your choice:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			rslt=a+b;
			printf("The addition of %d and %d is %d",a,b,rslt);
			break;
		case 2:
			rslt=a-b;
			printf("The subtraction of %d and %d is %d",a,b,rslt);
			break;
		case 3:
			rslt=a*b;
			printf("The multiplication of %d and %d is %d",a,b,rslt);
			break;
		case 4:
			rslt=a/b;
			printf("The division of %d and %d is %d",a,b,rslt);
		    break;
		default:
			printf("Wrong choice");
	}
	printf("Enter your chice: y for continue and any other character for exit.\n");
	fflush(stdin);
	scanf("%c",&ch);
}
	getch();
	return 0;
	
}
