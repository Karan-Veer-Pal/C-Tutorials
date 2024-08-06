// Day : 10 WAP to find the biggest number?

#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter the value of a and b \n :");
	scanf("%d %d" , &a, &b);
	if(a>b)
	{
		printf("a is biggest no. %d", a);
	}
	else
	{
		printf("b is biggest no. %d", b);
	}

	return 0;
}
