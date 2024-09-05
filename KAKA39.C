// WAP to show the use of extern storage class?

#include<stdio.h>
#include<conio.h>

void main()
{
	extern int a;
	clrscr();
	printf("The value of a = %d", a);
	getch();
}