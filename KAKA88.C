//Function..
//Different method in account************************************************
//WAP containing function which counts the number of positive integers in an array?
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100], n, i, pos_count=0, neg_count=0;
	clrscr();

	printf("Enter the size of array(n):\n");
	scanf("%d", &n);

	printf("Enter the element into array:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("The element of array is:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}

	for(i=0; i<n; i++)
	{
		if(arr[i]>0)
		{
			pos_count++;
		}
		else
		{
			neg_count++;
		}
	}
	printf("The positive number is %d\n", pos_count);
	printf("The negitive number is %d\n", neg_count);

	getch();
}