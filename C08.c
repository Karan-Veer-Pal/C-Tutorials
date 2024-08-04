// WAP to declare type conversion?
#include<stdio.h>
#include<conio.h>
void main()
{
	float a = 4.5, b = 5.5, c;
	clrscr();
	c = a+b;
	printf(" The value of c is %f \n ", c);
	c = (int)a+b;
	printf(" The value of c is %d \n ", (int)c);
	getch();
}
