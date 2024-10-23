// WAP to access the array by using function?
#include<stdio.h>
#include<conio.h>

void arrayfunction(int *ptr, int n);//ptr stores the address of array
void main()                         //n stores the size of array
{
	int arr[100];//={57,89,3,5,23,65,87,90};
	int size, i;
	clrscr();

	printf("Enter the size of the array:\n");
	scanf("%d", &size);

	printf("Enter the element into array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	arrayfunction(arr,size);
	printf("The value of arr[3] is %d\n", arr[3]);//It will change the-
	//actual array coz we using call by reference we will give address.
	getch();
}
void arrayfunction(int *ptr, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("The value of element %d is %d\n", i+1, ptr[i]);
	}
	ptr[3]=555;
}