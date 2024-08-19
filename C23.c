// WAP to display integers number from 1 to n?
#include<stdio.h>
#include<conio.h>

void main()
{
	int n, i;
	clrscr();
	printf("Enter the value of n:");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		printf("%d \n", i);
	}
	getch();
}
