//WAP to demonstrate a right shift and left shift?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 212, i;
	clrscr();

	for(i=0; i<=2; i++)
	{
		printf("Right shift by %d:%d\n",i,a>>i);
	}
	printf("\n");
	for(i=0; i<=2; i++)
	{
		printf("Left shift by %d:%d\n", i,a<<i);
	}
	getch();
}
