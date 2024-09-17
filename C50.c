// WAP to find out the length of the string without using library function?

#include<stdio.h>
#include<conio.h>

void main()
{
	char st[50];
	int n, i;
	clrscr();

	printf("Enter any string:");
	gets(st);

	for(i=0; st[i]!='\0'; i++)
	{
		;
	}

	printf("The length of the string is = %d", i);
	getch();
}
