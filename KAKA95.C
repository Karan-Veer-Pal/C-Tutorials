//WAP to perform the multiplication of two matrix of order nxm?
#include<stdio.h>
#include<conio.h>

void main()
{
	int m1[100][100], m2[100][100], result[100][100], i, j, k, n, m, p, q;
	clrscr();

	printf("Reminds that order of both matrix must be same..\n");

	printf("Enter the size of the first matrix(p)(q) is:\n");
	scanf("%d%d",&n,&m);

	printf("Enter the size of the second matrix(n)(m) is:\n");
	scanf("%d%d",&p,&q);

	printf("Enter the %d element into first matrix:\n",n*m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}

	printf("Enter the %d element into second matrix:\n",p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
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
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}

	if(n!=p)
	{
		printf("Multiplication is not possible.\n");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				result[i][j]=0;
				for(k=0;k<n;k++)
				{
					result[i][j]=result[i][j]+m1[j][k]*m2[k][i];
				}
			}
		}
		printf("The multiplication of two matrix is:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d\t",result[i][j]);
			}
			printf("\n");
		}
	}

	getch();
}