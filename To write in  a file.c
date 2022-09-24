//To write a content
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
    char s[80];
	fp=fopen("B2.c","w");
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
	}
	printf("\n Enter a few lines of text\n");
	while(strlen(gets(s))>0)
	{
		fputs(s,fp);
		fputs("\n",fp);
	}	
	getch();
	return 0;
}
