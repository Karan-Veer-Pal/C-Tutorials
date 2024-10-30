//Create a 2D array by taking input from the user. Write a display function to print the content of this 2D array on the screen?
#include<stdio.h>
#include<conio.h>

void display(int a[100][100], int rows, int columns);
void main()
{
	int arr[100][100], i, j, n, m;
	clrscr();

	printf("Enter the size of array n and m:\n");
	scanf("%d%d",&n,&m);

	printf("Enter the element into array:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	display(arr, n, m);

	getch();
}
void display(int a[100][100], int rows, int columns)
{
	int i,j;

	printf("By the function the array is:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
