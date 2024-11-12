// Day : 101 WAP to find out the length of the string?

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int n;

	printf("Enter the string:\n");
	gets(str);
	printf("The string is:\n");
	puts(str);

	n=strlen(str);
	printf("The length of the string is:%d\n",n);

	return 0;
}
