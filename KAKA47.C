// WAP to input a string and display them?

#include<stdio.h>
#include<conio.h>


void main()
{
	char st[50];
	clrscr();

	printf("Enter the string:\n");
	gets(st);

	printf("The string is:\n");
	puts(st);

	getch();
}