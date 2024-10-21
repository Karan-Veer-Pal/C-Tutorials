// Day : 79 WAP to addition of a number to a pointer?

#include<stdio.h>

int main()
{
	int i, j;
	int *ptr;
	int *pointer;
	ptr=&i;
	pointer=&j;

	printf("The ptr value is %u\n", ptr);
	ptr=ptr+1;
	printf("The addtion of ptr value is %u\n", ptr);

	printf("The pointer value is %u\n", pointer);
	pointer=pointer-1;
	printf("The subtract of pointer value is %u\n", pointer);

	ptr-pointer;
	printf("The subtraction from one pointer to another is : %u\n", ptr-pointer);

	if(ptr>pointer)
	{
		printf("ptr is greater by %u", ptr);
	}
	else
	{
		printf("pointer is smaller by %u", pointer);
	}

	return 0;
}
