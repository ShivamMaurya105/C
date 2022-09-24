#include<stdio.h>
#include<conio.h>
int main()
{ int quantity;
   float ppi;
   printf("Enter the value of quantity & ppi");
   scanf("%d",&quantity);
   scanf("%f",&ppi);
   if (quantity>1000)
   {
    discount=(quantity * ppi)*0.1;
     tot=(quantity * ppi)-discount;
    }
   prntf("The total expenses is %f",tot);
   return 0;
}
