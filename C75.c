// Day : 75 WAP to accept marks of five students in an array and print them on a screen?

#include<stdio.h>

int main()
{
	int n, i;
	int arr[100];

	printf("Enter how many student in a class:\n");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("Enter the marks of student %d:\n", i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("The marks of student %d:\n", i+1);
		printf("%d\n", arr[i]);
	}

	return 0;
}
