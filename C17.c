// Day : 17 WAP to find the biggest number in four variables?

#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("Enter the value of a,b,c and d:");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is biggest");
			}
			else
			{
				printf("d is biggest");
			}
		}

	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is biggest");
			}
			else
			{
				printf("d is biggest");
			}
		}
	}
	if(c>d)
	{
		printf("c is biggest");
	}
	else
	{
		printf("d is biggest");
	}
	
	return 0;
}
