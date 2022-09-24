//To copy the content of programs
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("Factorial of given number.c","r");
	if(fs==NULL)
	{
		puts("cannot open source file");
		exit(1);
	}
	ft=fopen("B1.c","w");
	if(ft==NULL)
	{
		puts("cannot open target file");
		fclose(fs);
		exit(1);
	}
	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch,ft);
		}
	}
	fclose(fs);
	fclose(ft);
	getch();
	return 0;
}
