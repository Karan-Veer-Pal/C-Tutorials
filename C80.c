// Day : 80 WAP to demonstrate the accessing the array through pointer?

#include<stdio.h>

int main()
{
	int arr[3],n,i;
	int *ptr;
	ptr=&arr[0];

	for(i=0; i<3; i++)
	{
		printf("Enter the marks of student %d\n", i+1);
		scanf("%d", ptr);
		ptr++;
	}
	for(i=0; i<3; i++)
	{
		printf("The marks of student %d is %d\n", i+1, arr[i]);
	}

	return 0;
}
