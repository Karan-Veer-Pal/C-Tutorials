// Day : 65 WAP to print the value and address of a variable i by using "pointer to pointer" type of variable?

#include<stdio.h>

int main()
{
	int *ptr, **p, i;
	ptr=&i;
	p=&ptr;
	

	printf("Enter the value of i:\n");
	scanf("%d", &i);

	printf("The value of i by normal pointer is:%d\n", *ptr);
	printf("The value of i by pointer to pointer is:%d\n", **p);

	printf("The address of i by normal pointer is:%u\n", ptr);
	printf("The address of i by pointer to pointer is:%u\n", *p);

	return 0;
}
