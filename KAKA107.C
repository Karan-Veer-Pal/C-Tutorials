//WAP to compare two string and find it is identical or not remind that without using function?
#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[100], str2[100];
	int n, i;
	clrscr();

	printf("Enter the first string:\n");
	gets(str1);
	printf("Enter the second string:\n");
	gets(str2);

	printf("The first string is:\n");
	puts(str1);
	printf("The second string is:\n");
	puts(str2);

	i=0;
	while(str1[i]==str2[i])
	{
		if(str1[i]=='\0' || str2[i]=='\0')
		{
			break;
		}
		i++;
	}
	if(str1[i]=='\0' && str2[i]=='\0')
	{
		printf("The string is identical\n");
	}
	else
	{
		printf("The string is not identical");
	}

	getch();
}