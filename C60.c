// Day : 60 WAP to print the adddress of a variable use this address ta get the value of this variable?

#include<stdio.h>

int main()
{
	int *ptr, i;
	ptr=&i;

	printf("Enter the value of i:\n");
	scanf("%d", &i);

	printf("The address of i is:%u\n", &i);
	printf("The address of i is:%u\n", ptr);

	printf("The value of i is:%d\n", i);
	printf("The value of i is:%d\n", *ptr);

	return 0;
}
