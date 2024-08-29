// WAP to demonstrate of function with argument with return a value?

#include<stdio.h>
#include<conio.h>

int Sum(int x, int y);
void main()
{
	int a, b, c;
	clrscr();
	printf("Enter the value of a and b:");
	scanf("%d %d", &a, &b);
	c = Sum(a,b);
	printf("The sum is = %d", c);
	getch();
}
int Sum(int x, int y)
{
	int z;
	z = x+y;
	return z;
}
