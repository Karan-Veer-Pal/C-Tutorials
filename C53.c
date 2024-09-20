// Day : 53 WAP to compare two string without using library function?

#include<stdio.h>
#include<string.h>

int main()
{
	char st1[50], st2[50];
	int n, i, j;

	printf("Enter first string:");
	gets(st1);

	printf("Enter second string:");
	gets(st2);

	i=0;
	while(st1[i] == st2[i])
	{
		if(st1[i] == '\0' || st2[i] == '\0')
		{
			break;
		}
		i++;
	}
	if(st1[i] == '\0' && st2[i] == '\0')
	{
		printf("string is identical");
	}
	else
	{
		printf("string is not identical");
	}

	return 0;
}
