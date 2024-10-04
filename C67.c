// WAP to writing some contain or text to a file?
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	FILE *fp;
	clrscr();

	fp = fopen("demo.txt","r+");
	if(fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	scanf(fp,"%d", &n);


	printf("The value of n=%d",n);
	getch();
}
