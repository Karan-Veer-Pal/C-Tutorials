// Day : 26 WAP to print a table of given number?

#include<stdio.h>

int main()
{
	int i, n;
	
	printf("Enter the value of n is :\n ");
	scanf("%d", &n);
	for(i=1; i<=10; i++)
	{
		printf("%d \n", i*n);
	}

	return 0;
}
