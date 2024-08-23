// WAP to print decending order by using while loop?
#include<stdio.h>
#include<conio.h>

void main()
{
	int i, n;
	clrscr();
	printf("Enter the value of n is :");
	scanf("%d", &n);
	i=n;
	while(i>0)
	{
		printf("%d \n", i);
		i--;
	}
	getch();
}