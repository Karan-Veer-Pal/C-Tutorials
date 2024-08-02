// Day : 04 WAP to multiply of two numbers?

#include<stdio.h>

int main()
{
	int num1, num2, num3, mul;
	
	printf("Enter the value of number 1 : \n");
	scanf("%d", &num1);
	printf("Enter the value of number 2 : \n");
	scanf("%d", &num2);
	printf("Enter the value of number 3 : \n");
	scanf("%d", &num3);
	
	mul = num1 * num2 * num3;
	printf("Multiple of three number is = %d \n", mul);

	return 0;
}
