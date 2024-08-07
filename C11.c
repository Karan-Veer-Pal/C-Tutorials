// WAP to explain the given number is positive or negative?
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter the value of a :");
	scanf("%d", &a);
	if(a<0)
	{
		printf("a is a negative no");
	}
	else
	{
		printf("a is a positive no");
	}
	getch();
}
