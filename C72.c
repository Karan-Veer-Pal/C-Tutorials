// Day : 72 WAP to demonstrate the area is defined and not?

#include<stdio.h>

#define area 5000
int main()
{
	#ifdef area
	{
		printf("Area is defined!");
	}
	#else
	{
		printf("Area is not defined!");
	}
	#endif

	return 0;
}
