//WAP to add to matrix by using function?
#include<stdio.h>
#include<conio.h>

void display(int m1[100][100], int m2[100][100], int result[100][100], int rows, int columns);
void main()
{
	int i, j, rows, columns, m1[100][100], m2[100][100], result[100][100];
	clrscr();

	printf("Enter the number of rows and columns:\n");
	scanf("%d%d", &rows, &columns);

	printf("Enter the element of first matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			scanf("%d", &m1[i][j]);
		}
	}
	printf("The element of first matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("%d\t", m1[i][j]);
		}
		printf("\n");
	}

	printf("Enter the element of second matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			scanf("%d", &m2[i][j]);
		}
	}
	printf("The element of second matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("%d\t", m2[i][j]);
		}
		printf("\n");
	}

	display(m1,m2,result,rows,columns);

	getch();
}
void display(int m1[100][100], int m2[100][100], int result[100][100], int rows, int columns)
{
	int i, j;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			result[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("The resultant matrix is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}

}

