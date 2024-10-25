//WAP to produce a matrix using 2D array?
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100][100], i, j, n, m;
	clrscr();

	printf("Enter the size of row(n) and column(m):\n");
	scanf("%d%d",&n, &m);
	printf("Enter the %d element into array:\n",n*m);
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The element of array is:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	getch();
}