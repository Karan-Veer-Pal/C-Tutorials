// WAP to show the use of static storage class?

#include<stdio.h>
#include<conio.h>

void main()
{
	static int a;
	clrscr();
	printf("The value of a = %d", a);
	getch();
}