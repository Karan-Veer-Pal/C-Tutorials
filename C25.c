// Day : 25 WAP to find even number by using for loop with if statement?

#include<stdio.h>

int main()
{
	int i, n;
	
	printf("Enter the value of n is : \n");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d \n", i);
		}
	}

	return 0;
}
