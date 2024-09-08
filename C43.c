// Day : 43 WAP to perform a multiplication of two matrix?

#include<stdio.h>

int main()
{
	int a[50][50], b[50][50], c[50][50], m, n, p, q, i, j, k;

	printf("Enter the order of row and column for first matrix:");
	scanf("%d %d", &m, &n);

	printf("Enter %d element into first matrix:", m*n);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter the order of row and column for second matrix:");
	scanf("%d %d", &p, &q);

	printf("Enter %d element into second matrix:", p*q);
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	if(n!=p)
	{
		printf("Multiplication is not possible because matrix order is different!");
	}
	else
	{
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				c[i][j] = 0;
				for(k=0; k<n; k++)
				{
					c[i][j] = c[i][j]+a[i][k]*b[k][j];
				}
			}
		}

		printf("Multiplication of a matrix:\n");
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}
