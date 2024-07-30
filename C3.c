// WAP to subtract of numbers?
#include<stdio.h>

int main()
{
	int num1, num2, num3, sub;
	
	printf("Enter the value of number 1 : \n");
	scanf("%d", &num1);
	printf("Enter the value of number 2 : \n");
	scanf("%d", &num2);
	printf("Enter the value of number 3 : \n");
	scanf("%d", &num3);
	
	sub = num1 - num2 - num3;
	printf("Subtract of three number is = %d \n", sub);

	return 0;
}
