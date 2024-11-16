// Day : 105 WAP to copy the string to another without using library function?

#include<stdio.h>

int main()
{
	char str1[32], str2[32];
	int i;

	printf("Enter the string is:\n");
	gets(str1);
	printf("The string is:\n");
	puts(str1);

	for(i=0; str1[i]!='\0'; i++)
	{
		str2[i]=str1[i];
	}
	str2[i]!='\0';
	printf("The copied string is:\n");
	puts(str2);

	return 0;
}
