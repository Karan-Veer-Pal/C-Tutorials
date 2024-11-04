//WAP to find the largest and smallest number from an array?
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[100], i, size, big=arr[0], small=arr[0];
	clrscr();

	printf("Enter the size of array:\n");
	scanf("%d", &size);
	printf("Enter the element into array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The array is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(big<arr[i])
		{
			big=arr[i];
		}
	}
	printf("The biggest number in array is:%d\n",big);

	for(i=0;i<size;i++)

	{
		if(small>arr[i])
		{
			small=arr[i];
		}
	}
	printf("The smallest number in array is:%d\n",small);


	getch();
}