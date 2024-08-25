// Day : 29 WAP with using continue statement?

#include<stdio.h>

int main()
{
	int i, n;
	
	//printf("Enter the value of n is:");
	//scanf("%d", &n);
	for(i=0 ; i<=10; i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("%d \n", i);
	}

	return 0;
}
