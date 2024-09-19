// Day : 52 WAP to string concatination without using library function?

#include<stdio.h>
#include<string.h>

int main()
{
	char st1[50], st2[50];
	int i, j;

	printf("Enter first string:");
	gets(st1);

	printf("Enter second string:");
	gets(st2);


	for(i=0; st1[i]!='\0'; i++)
	{
		;
	}
	for(j=0; st2[j]!='\0'; j++)
	{
		st1[i] = st2[j];
		i++;
	}

	st1[i] = '\0';

	printf("After concatination the string is:");
	puts(st1);

	return 0;
}
