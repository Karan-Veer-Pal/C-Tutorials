// WAP to writing some contain or text to a fil
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	FILE *fp;
	clrscr();

	fp = fopen("demo.txt","r");
	if(fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	while(1)
	{
		n = fgetc(fp);
		if(feof(fp))
		{
			break;
		}
		printf("%c", n);
	}
	fclose(fp);

	getch();
}