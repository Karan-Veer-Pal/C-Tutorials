// WAP to find the biggest number?
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	clrscr();
	printf("Enter the value of a and b \n :");
	scanf("%d %d" , &a, &b);
	if(a>b)
	{
		printf("a is biggest no. %d", a);
	}
	else
	{
		printf("b is biggest no. %d", b);
	}
	getch();
}