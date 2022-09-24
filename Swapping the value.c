//Wap to swap the values of two variables using function call by value
#include<stdio.h>
#include<conio.h>
void swap(float,float);             
int main()
{
	float a,b;
	printf("Enter the value of a and b\n");
	scanf("%f%f",&a,&b);
	printf("\nThe value of a and b before swapping is %f and %f\n",a,b);
	swap(a,b);
	
	return 0;
}
void swap(float x,float y)
{
	float temp;
	temp=x;
	x=y;
	y=temp;
	printf("The value of a and b after swapping is %f and %f",x,y);
}
