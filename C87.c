//WRONG**********************************************************************
// Day : 87 WAP containing a function which reverses the array pass to it?

#include<stdio.h>

void function(int *arr, int k);
int main()
{
	int arr[100], i, n, *k;

	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the element into array:\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Before function calling the array is:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}
	k=&n;
	function(arr,*k);

	return 0;
}
void function(int *arr, int k)
{
	int i;
	printf("The reverse array is:\n");
	for(i>k; i; i--)
	{
		printf("%d\n", arr[i]);
	}
}
