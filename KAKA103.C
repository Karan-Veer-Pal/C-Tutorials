//WAP to copy the string to another string?
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[32], str2[32];
	clrscr();

	printf("Enter the string:\n");
	gets(str1);
	printf("The input string is:\n");
	puts(str1);

	strcpy(str2,str1);

	printf("The copied string is:\n");
	puts(str2);

	getch();
}