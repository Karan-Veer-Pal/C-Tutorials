// Day : 31 WAP to demonstration of a function with no argument with return a value?

#include<stdio.h>

int Sum();
int main()
{
	int n;
	
	n = Sum();
	printf("The sum is = %d", n);

	return 0;
}
int Sum()
{
	int x, y, z;
	
	printf("Enter the value of x and y:");
	scanf("%d %d", &x, &y);
	z = x+y;
	
	return z;
}