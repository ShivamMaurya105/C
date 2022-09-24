//Wap to read a file
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("Factorial of given number.c","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	fclose(fp);
	getch();
	return 0;
}
