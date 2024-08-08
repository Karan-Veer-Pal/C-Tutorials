// WAP to explain the given number is odd and even?
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter the value of a: \n");
	scanf("%d", &a);
	if(a%2==0)
	{
		printf("a is even");
	}
	else
	{
		printf("a is odd");
	}
	getch();
}