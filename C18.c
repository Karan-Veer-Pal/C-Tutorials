// Day : 18 WAP to find the biggest number in three variables?

#include<stdio.h>

int main()
{
	float a,b,c;
	
	printf("Enter the value of a,b and c: \n");
	scanf("%f%f%f", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is biggest");
		}
		else
		{
			printf("c is biggest");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is biggest");
		}
		else
		{
			printf("c is biggest");
		}
	}

	return 0;
}
