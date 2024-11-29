//WORNGXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//WAP to check whether a given character is present in a string or not?
#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
	int i;
	clrscr();

	printf("Enter any string:\n");
	gets(str);
	printf("The string is:\n");
	puts(str);

	for(i=0; str!='\0'; i++)
	{
		printf("str[%d]=%s\n", i, str);
	}


	getch();
}
