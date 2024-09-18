// WAP to copy the string in one to another without using library function?

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char st1[50], st2[50];
	int i;
	clrscr();

	printf("Enter any string:");
	gets(st1);

	for(i=0; st1[i]!='\0'; i++)
	{
		st2[i] = st1[i];
	}
	st2[i] = '\0';

	printf("After copy the second string is:");
	puts(st2);

	getch();
}