// Day : 08 WAP to demontrate type conversion?

#include<stdio.h>

int main()
{
	float a = 4.5, b = 5.5, c;
	
	c = a+b;
	printf(" The value of c is %f \n ", c);
	c = (int)a+b;
	printf(" The value of c is %d \n ", (int)c);

	return 0;
}
