// WAP to find even number by using for loop with if statement?
#include<stdio.h>
#include<conio.h>

void main()
{
	int i, n;
	clrscr();
	printf("Enter the value of n is : \n");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d \n", i);
		}
	}
	getch();
}
