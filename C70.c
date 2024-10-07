// Day : 70 WAP to demonstrate a right shift and left shift?

#include<stdio.h>

int main()
{
	int a = 212, i;

	for(i=0; i<=2; i++)
	{
		printf("Right shift by %d:%d\n",i,a>>i);
	}
	
	printf("\n");
	
	for(i=0; i<=2; i++)
	{
		printf("Left shift by %d:%d\n", i,a<<i);
	}
	
	return 0;
}
