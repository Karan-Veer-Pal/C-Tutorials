// Day : 34 WAP to demonstrate the concept of call by value?

#include<stdio.h>

void Add_10(int x, int y);
int main()
{
	int a, b;
	
	printf("\n Enter the value of a and b:");
	scanf("%d %d", &a, &b);
	printf("\n Before function value od a = %d and b = %d", a, b);
	Add_10(a,b);
	printf("\n After function value of a = %d and b = %d", a, b);

	return 0;
}
void Add_10(int x, int y)
{
	x = x+10;
	y = y+10;
	printf("\n Inside function value of a = %d and b = %d", x, y);
}