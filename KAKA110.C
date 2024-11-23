//WAP pointer with array?
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100], *ptr, n, i;
	ptr=&arr;
	clrscr();

	printf("Enter the size of the array:\n");
	scanf("%d", &n);

	printf("Enter the element into array:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("The element of array is:\n");
	for(i=0; i<n; i++)
	{
		printf("%d", ptr[i]);
	}


	getch();
}