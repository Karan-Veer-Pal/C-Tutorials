// Day : 27 WAP to print decending order by using while loop?

#include<stdio.h>

int main()
{
	int i, n;
	
	printf("Enter the value of n is :");
	scanf("%d", &n);
	i=n;
	while(i>0)
	{
		printf("%d \n", i);
		i--;
	}

	return 0;
}
