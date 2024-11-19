// Day : 107 WAP to compare two string and find it is identical or not?

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100];
	int n;

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

	return 0;
}
