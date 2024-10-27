//Create an array of 10 number. Verify using pointer arithmetic that (ptr+2) points to the third element, where ptr is a pointer to the first element of the array?
#include<stdio.h>
#include<conio.h>

void main()
{
	int *ptr, arr[10], i, a; //,n;
	ptr=&arr[0];
	clrscr();

	//printf("Enter the size of array:\n");
	//scanf("%d",&n);
	printf("The value of ptr is:%u\n",ptr+2);
	printf("Enter the 10 element into array:\n");
	for(i=0;i<10;i++)
	{
		printf("%u\n",&arr[i]);
	}

	getch();
}