//WAP to compare two string and find it is identical or not?
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[100], str2[100];
	int n;
	clrscr();

	printf("Enter the first string:\n");
	gets(str1);
	printf("Enter the second string:\n");
	gets(str2);

	printf("The first string is:\n");
	puts(str1);
	printf("The second string is:\n");
	puts(str2);

	n = strcmp(str1,str2);
	if(n==0)
	{
		printf("The string is identical\n");
	}
	else
	{
		printf("The string is not identical\n");
	}

	getch();
}
