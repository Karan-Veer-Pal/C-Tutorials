//WAP to adding two string without using function?
#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[100], str2[100];
	int i, j;
	clrscr();

	printf("Enter the first string:\n");
	gets(str1);

	printf("Enter the second string:\n");
	gets(str2);

	printf("The first string is:\n");
	puts(str1);

	printf("The second string is:\n");
	puts(str2);

	for(i=0; str1[i]!='\0'; i++)
	{
		;
	}

	for(j=0; str2[j]!='\0'; j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';

	printf("The adding string is:\n");
	puts(str1);


	getch();
}
