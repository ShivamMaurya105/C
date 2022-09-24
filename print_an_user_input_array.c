//program to print an user input array
#include<stdio.h>
#include<conio.h>
int main()
{int abc[10],i;
   printf("Enter the elements of an array\n");
   for(i=0;i<10;i++)
   {
   	  scanf("%d",&abc[i]);
   }
   
   printf("The array elements is:");
   
   for(i=0;i<10;i++)
   {
   	printf("%d\n",abc[i]);
   }
   
   return 0;
   
   
   
   
}

/*abc[10]

abc[0] abc[1] abc[2] abc[3] abc[4] abc[5] abc[6] abc[7] abc[8] abc[9]

&abc[0] &abc[1] &abc[2] &abc[3] &abc[4] &abc[5] &abc[6] &abc[7] &abc[8] &abc[9]*/

