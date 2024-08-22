// WAP to print a table of given number?
#include<stdio.h>
#include<conio.h>

void main()
{
	int i, n;
	clrscr();
	printf("Enter the value of n is:");
	scanf("%d", &n);
	for(i=1; i<=10; i++)
	{
		printf("%d \n", i*n);
	}
	getch();
}
