//WAP to perform a transpose of a matrix?
#include<stdio.h>
#include<conio.h>

void main()
{
	int m1[100][100], i, j, m, n;
	clrscr();

	printf("Enter the order of the matrix:\n");
	scanf("%d%d", &m,&n);

	printf("Enter element into matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}

	printf("The matrix is:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}

	printf("The transpose matrix is:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", m1[j][i]);
		}
		printf("\n");
	}

	getch();
}