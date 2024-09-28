// Day : 61 WAP having a variable i print the address of i. Pass this variable to a function and print its address. Are these address same? Yes and no?

#include<stdio.h>

void address(int a);
int main()
{
	int i, *ptr;
	ptr=&i;

	printf("Enter the value of i;\n");
	scanf("%d", &i);

	printf("The value of i is:%d\n", *ptr);
	printf("The address of i is:%u\n", ptr);

	address(i);

	printf("These address are not same because both the argument are different memory allocation and different block and have the different address");

	return 0;
}
void address(int a)
{
	printf("The value of a is:%d\n", a);
	printf("The address of a is:%u\n", &a);
}
