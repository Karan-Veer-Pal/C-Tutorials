// Day : 73 WAP to check a string is palinfrom or not?

#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	int i, len, flag = 0;

	printf("Enter the string:\n");
	gets(str);

	len = strlen(str);

	for(i=0; i<len; i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag++; // flag = 1;
			break;
		}
	}
	if(flag==0)
	{
		printf("The given string is palindrom!");
	}
	else
	{
		printf("The given string is not palindrom!");
	}

	return 0;
}
