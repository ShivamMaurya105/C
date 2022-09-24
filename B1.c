//Wap to find the factorial of a given number.
#include<stdio.h>
#include<conio.h>
int main()
{ int n,i;
long int fac=1;
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=n;i>1;i=i-1)
{ 
   fac=fac*i;
}
printf("\n The Factorial of %d is %ld",n,fac);
	getch();
	return 0;
}
//5!=5*4*3*2*1
