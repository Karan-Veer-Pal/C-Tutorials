// WAP using call by value?

#include<stdio.h>
#include<conio.h>

void add_(int x, int y);
void main()
{
	int a = 15, b = 10;
	clrscr();

	printf("Before function call a=%d, b=%d\n", a,b);
	add_(a,b);
	printf("After function call a=%d, b=%d\n", a,b);

	getch();
}
void add_(int x, int y)
{
	x = x+10;
	y = y+10;
	printf("Inside function value of a=%d, b=%d\n", x,y);
}