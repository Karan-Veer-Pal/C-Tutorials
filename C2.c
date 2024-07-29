// WAP to sum of numbers?

#include<stdio.h>

int main()
{
	int num1, num2, num3, sum;
	
	printf("Enter the value of number 1 : \n");
	scanf("%d", &num1);
	printf("Enter the value of number 2 : \n");
	scanf("%d", &num2);
	printf("Enter the value of number 3 : \n");
	scanf("%d", &num3);
	
	sum = num1+num2+num3;
	printf("Sum of three number is = %d \n", sum);
	
	return 0;
}
