// WAP to perform a addtion of two matrix?

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50][50], b[50][50], c[50][50], m, n, i, j;
	clrscr();

	printf("Enter the order of row and column:");
	scanf("%d %d", &m, &n);

	printf("Enter the element into matrix:");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter the element into matrix:");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}


	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			c[i][j] = a[i][j]+b[i][j];
		}

	}

	printf("Addtion of a matrix:\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	getch();
}