//WAP to make a 3D array and print the address of its elements in increasing order?
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10][10][10], i, j, k, p, q, r, *ptr;
	int a[2][3][4];
	ptr=&arr[0][0][0];
	clrscr();

	printf("First method:");
	printf("Enter the size of array(p)(q)(r):\n");
	scanf("%d%d%d",&p,&q,&r);

	printf("Enter the %d element into array:\n",p*q*r);
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			for(k=0; k<r; k++)
			{
				scanf("%d\n", &arr[i][j][k]);
			}
		}
	}
	printf("The element in array:\n");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			for(k=0; k<r; k++)
			{
				printf("%d\t", arr[i][j][k]);
			}
			printf("\n");
		}
	}
	printf("The address of element in array:\n");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			for(k=0; k<r; k++)
			{
				printf("%u\n", ptr++);
			}
		}
	}
	printf("*************************************************************");
	printf("\nSecond method:");
	printf("Our array is here : a[2][3][4]\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<4; k++)
			{
				printf("\nThe address of arr[%d][%d][%d] is %u",i,j,k,&a[i][j][k]);
			}
		}
	}


	getch();
}