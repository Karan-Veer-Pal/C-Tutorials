//WAP to sort the array in ascending order?
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100], i, size, t, j;
	clrscr();

	printf("Enter the size of the array:\n");
	scanf("%d", &size);

	printf("Enter the element into array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("The array is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n", arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("The ascending order is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d", arr[i]);
		printf(",");
	}

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("\nThe decending order is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d", arr[i]);
		printf(",");
	}

	getch();
}