//WAP to make a table of any 3 numbers?
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10], i, j, p, q, r;
	clrscr();

	printf("Enter the number which you wants to perform a table(p)(r)(r):\n");
	scanf("%d%d%d", &p,&q,&r);
	printf("Table of %d\n", p);
	for(i=0; i<10; i++)
	{
		arr[i]=p*(i+1);
	}
	for(i=0; i<10; i++)
	{
		printf(" %dX%d=%d ", p,i+1, arr[i]);
	}
	printf("\n");
	printf("Table of %d\n", q);
	for(i=0; i<10; i++)
	{
		arr[i]=q*(i+1);
	}
	for(i=0; i<10; i++)
	{
		printf(" %dX%d=%d ", q,i+1, arr[i]);
	}
	printf("\n");
	printf("Table of %d\n", r);
	for(i=0; i<10; i++)
	{
		arr[i]=r*(i+1);
	}
	for(i=0; i<10; i++)
	{
		printf(" %dX%d=%d ", r,i+1, arr[i]);
	}
	getch();
}