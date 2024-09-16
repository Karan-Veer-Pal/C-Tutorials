// Day : 49 WAP to find the average using array? 

#include<stdio.h>

int main()
{
	int a[50], m, i, sum;
	float average;

	printf("Enter the size of array:\n");
	scanf("%d", &m);

	printf("Enter the element into array:\n");
	for(i=0; i<m; i++)
	{
		scanf("%d", &a[i]);
	}

	sum = 0;
	for(i=0; i<m; i++)
	{
		sum = sum+a[i];
	}

	printf("The sum of element is: %d\n", sum);
	average = (float)sum/m;
	printf("The average of the element into array is: %.2f\n", average);

	return 0;
 }
