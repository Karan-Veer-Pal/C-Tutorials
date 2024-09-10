// Day : 45 WAP to perform a transpose of a matrix?

#include<stdio.h>

int main()
{
	int a[50][50], m, n, i, j;

	printf("Enter the order of the matrix:\n");
	scanf("%d %d", &m, &n);

	printf("Enter %d element into matrix:\n", m*n);
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

	return 0;
}
