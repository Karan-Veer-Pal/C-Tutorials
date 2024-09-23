// WAP pointer with array?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5] = {3,2,9,5};
	int *ptr;
	ptr = a;
	clrscr();

	printf("Element of the array are:\n");
	printf("%d %d %d %d", ptr[0], ptr[1], ptr[2], ptr[3]);

	getch();
}