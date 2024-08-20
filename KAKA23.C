// WAP to find odd number by using for loop?
#include<stdio.h>
#include<conio.h>

void main()
{
	int i, n;
	clrscr();
	printf("Enter any number n: \n");
	scanf("%d", &n);
	//first method:
	for(i=1; i<=n; i = i+2)
	{
		printf("%d \n", i);
	}
	// second method:
	printf("Enter any number n: \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(i%2!=0)
		{
			printf("%d \n", i);
		}
	}
	getch();
}