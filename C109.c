// Day : 109 WAP to convert lowercase and uppercase letter?

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100];

	printf("Enter any string for lowercase:\n");
	gets(str1);
	printf("Enter any string for uppercase:\n");
	gets(str2);

	printf("The string for lowercase is:\n");
	puts(str1);
	printf("The string for uppercase is:\n");
	puts(str2);

	strlwr(str1);
	strupr(str2);

	printf("The lowercase string is:\n");
	puts(str1);
	printf("The uppercase string is:\n");
	puts(str2);

	return 0;
}
