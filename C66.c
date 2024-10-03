// WAP to writing some contain or text to a file?
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	FILE *fp;
	clrscr();

	fp = fopen("demo.txt","a+");
	if(fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Enter the value of n:\n");
	scanf("%d", &n);


	fprintf(fp,"%d",n);
	fclose(fp);
	getch();
}
