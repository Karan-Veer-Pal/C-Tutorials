// Day : 113 Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position for slice?

#include<stdio.h>

void slice(char *str, int m, int n);
int main()
{
	char st[]="systumhai";

	slice(st,2,12);
	printf("%s", st);

	return 0;
}
void slice(char *str, int m, int n)
{
	int i=0;
	while((m+i)<n)
	{
		str[i]=str[i+m];
		i++;
	}
	str[i]='\0';
}
