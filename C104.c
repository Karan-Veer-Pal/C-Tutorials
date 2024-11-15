// Day : 104 WAP to copy the string to another string?

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[32], str2[32];

	printf("Enter the string:\n");
	gets(str1);
	printf("The input string is:\n");
	puts(str1);

	strcpy(str2,str1);

	printf("The copied string is:\n");
	puts(str2);

	return 0;
}
