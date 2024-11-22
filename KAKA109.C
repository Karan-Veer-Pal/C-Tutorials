//WAP to access the address of the variable?
#include<stdio.h>
#include<conio.h>

void main()
{
	int *ptr, a;
	a=&ptr;
	clrscr();

	printf("The address of the variable a is:%u\n", a);


	getch();
}