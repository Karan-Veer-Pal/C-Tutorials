// Day : 78 WAP to demonstrate the pointer increment and decrement?

#include<stdio.h>

int main()
{
	int i=77;
	int *ptr;
	ptr=&i;

	printf("The value of ptr is %u\n", ptr);
	ptr++;
	printf("The value of ptr is %u\n", ptr);
	ptr=ptr+1;
	printf("The value of ptr is %u\n", ptr);
	ptr--;
	printf("The value of ptr is %u\n", ptr);
	ptr=ptr-1;
	printf("The value of ptr is %u\n", ptr);
	ptr=ptr+2;
	printf("The value of ptr is %u\n", ptr);
	ptr++;
	printf("The value of ptr is %u\n", ptr);
	ptr++;
	printf("The value of ptr is %u\n", ptr);
	ptr=ptr++;
	printf("The value of ptr is %u\n", ptr);
	ptr++;

	return 0;
}
