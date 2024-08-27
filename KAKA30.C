// WAP to demonstrate of a function with no argument with return a value?

#include<stdio.h>
#include<conio.h>

int Sum();
void main()
{
	int n;
	clrscr();
	n = Sum();
	printf("The sum is = %d", n);
	getch();
}
int Sum()
{
	int x, y, z;
	printf("Enter the value of x and y:");
	scanf("%d %d", &x, &y);
	z = x+y;
	return z;
}