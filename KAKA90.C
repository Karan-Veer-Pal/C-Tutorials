//Create an 2D array of size of 3X10 containing multiplecation tables of the number 2,7 and 9 respectively?
#include<stdio.h>
#include<conio.h>

void printtable(int *table, int num, int n);
void main()
{
	int table[3][10];
	clrscr();

	printtable(table[0], 2, 10);
	printtable(table[1], 7, 10);
	printtable(table[2], 9, 10);

	getch();
}
void printtable(int *table, int num, int n)
{
	int i;
	printf("\n");
	printf("The multiplication table of %d is:\n", num);
	for(i=0; i<n; i++)
	{
		table[i]=num*(i+1);
	}
	for(i=0; i<n; i++)
	{
		printf(" %dX%d = %d,", num, i+1, table[i]);
	}
	printf("************************************************************");
}