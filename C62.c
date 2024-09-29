// WAP to change the value of a variable to ten times of its current value. Write a function and pass the value by value and reference?

#include<stdio.h>
#include<conio.h>

void callbyvalue(int x, int y);
void callbyreference(int *x, int *y);
void main()
{
	int a, b;
	clrscr();

	printf("Enter the value of a and b:\n");
	scanf("%d%d", &a, &b);

	printf("Before the function calling a=%d and b=%d\n", a, b);
	callbyvalue(a,b);
	printf("After the function calling of call by value a=%d and b=%d\n", a, b);

	callbyreference(&a,&b);
	printf("After the function calling of call by reference a=%d and b=%d\n", a, b);

	getch();
}
void callbyvalue(int x, int y)
{
	x=x+10;
	y=y+10;
	printf("Through call by value inside the function the value of a=%d and b=%d\n", x,y);
}
void callbyreference(int *x, int *y)
{
	*x=*x+10;
	*y=*y+10;
	printf("Through call by reference inside the function the value of a=%d and b=%d\n", *x,*y);
}
