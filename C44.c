// Day : 44 WAP to perform a addtion of two matrix?

#include<stdio.h>

int main()
{
	int a[50][50], b[50][50], c[50][50], m, n, i, j;
	

	printf("Enter the order of row and column:");
	scanf("%d %d", &m, &n);

	printf("Enter %d element into first matrix: ", m*n);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter %d element into second matrix: ", m*n);
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

	return 0;
}
