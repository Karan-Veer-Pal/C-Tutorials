// Day : 15 WAP to calculate the area of square and area of triangle?

#include<stdio.h>

int main()
{
	float a, area, base, height, ar;
	
	//to calculate a area of square.
	printf("Enter the value of a is: \n");
	scanf("%f", &a);
	area = a*a;
	printf("The area is = %f \n", area);
	
	//to calculate a area of triangle.
	printf("Enter the value of base and height is: \n");
	scanf("%f%f", &base, &height);
	ar = base*height/2;
	printf("The ar is = %f \n", ar);
	
	return 0;
}
