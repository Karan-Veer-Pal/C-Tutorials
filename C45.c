// WAP to perform a transpose of a matrix?

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50][50], m, n, i, j;
	clrscr();

	printf("Enter the order of the matrix:\n");
	scanf("%d %d", &m, &n);

	printf("Enter the element into matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("The matrix is:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("The transpose matrix is:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}
	getch();
}