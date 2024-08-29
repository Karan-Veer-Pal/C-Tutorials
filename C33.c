// Day : 33 WAP to demonstrate of function with argument with return a value?

#include<stdio.h>

int Sum(int x, int y);
int main()
{
	int a, b, c;
	
	printf("Enter the value of a and b:");
	scanf("%d %d", &a, &b);
	
	c = Sum(a,b);
	printf("The sum is = %d", c);
	
	return 0;
}
int Sum(int x, int y)
{
	int z;
	z = x+y;
	
	return z;
}
