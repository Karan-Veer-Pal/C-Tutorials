//WAP to add two matrix of order nxm?
#include<stdio.h>
#include<conio.h>

void main()
{
	int m1[100][100], m2[100][100], result[100][100], i, j, n, m;
	clrscr();

	printf("Enter the size of the first matrix(n)(m) is:\n");
	scanf("%d%d",&n,&m);

	printf("Enter the element into first matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}

	printf("Enter the size of the second matrix(n)(m) is:\n");
	scanf("%d%d",&n,&m);

	printf("Enter the element into second matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}

	printf("The first matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}

	printf("The second matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			result[i][j]=m1[i][j]+m2[i][j];
		}
	}

	printf("The addition of two matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}



	getch();
}