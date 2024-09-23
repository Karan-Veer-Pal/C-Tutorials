// Day : 56 WAP pointer with array?

#include<stdio.h>

int main()
{
	int a[5] = {3,2,9,5};
	int *ptr;
	ptr = a;

	printf("Element of the array are:\n");
	printf("%d %d %d %d", ptr[0], ptr[1], ptr[2], ptr[3]);

	return 0;
}
