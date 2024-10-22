// WAP to demonstrate the accessing the array through pointer?
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[3],n,i;
	int *ptr;
	ptr=&arr[0];
	clrscr();

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
	getch();
}