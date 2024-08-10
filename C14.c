// Day : 14 WAP to calculate the electricity bill?

#include<stdio.h>

int main()
{
	float unit, bill;
	
	printf("Enter the value of unit:");
	scanf("%f", &unit);
	if(unit<=100)
	{
		bill = 4.5*unit;
	}
	else if(unit>100 && unit<=200)
	{
		bill = 5*unit;
	}
	else if(unit>200 && unit<=300)
	{
		bill = 5.5*unit;
	}
	else
	{
		bill = 6*unit;
	}
	printf("The bill is = %f", bill);

	return 0;
}
