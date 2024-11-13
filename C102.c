// Day : 102 bWAP to add two string?

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100];

	printf("Enter the first string:\n");
	gets(str1);

	printf("Enter the second string:\n");
	gets(str2);

	printf("The first string is:\n");
	puts(str1);

	printf("The second string is:\n");
	puts(str2);

	strcat(str1,str2);
	printf("The adding is string is:\n");
	puts(str1);

	return 0;
}
