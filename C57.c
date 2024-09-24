// Day : 57 WAP using call by value?

#include<stdio.h>

void add(int x, int y);
int main()
{
	int a = 15, b = 10;

	printf("Before function call a=%d, b=%d\n", a,b);
	add(a,b);
	printf("After function call a=%d, b=%d\n", a,b);

	return 0;
}
void add(int x, int y)
{
	x = x+10;
	y = y+10;
	printf("Inside function value of a=%d, b=%d\n", x,y);
}
