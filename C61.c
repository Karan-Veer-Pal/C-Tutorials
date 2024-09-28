//WAP having a variable i print the address of i. Pass this variable to a function and print its address. Are these address same? Yes and no?
#include<stdio.h>
#include<conio.h>

void address(int a);
void main()
{
	int i, *ptr;
	ptr=&i;
	clrscr();

	printf("Enter the value of i;\n");
	scanf("%d", &i);

	printf("The value of i is:%d\n", *ptr);
	printf("The address of i is:%u\n", ptr);

	address(i);

	printf("These address are not same because both the argument are different memory alloca-tion and different block and have the different address");

	getch();
}
void address(int a)
{
	printf("The value of a is:%d\n", a);
	printf("The address of a is:%u\n", &a);
}
