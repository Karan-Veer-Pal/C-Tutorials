// WAP to calculate the area of square and area of triangle?
#include<stdio.h>
#include<conio.h>
void main()
{
	float a, area, base, height, ar;
	clrscr();
	//to calculate a area of square.
	printf("Enter the value of a is:");
	scanf("%f", &a);
	area = a*a;
	printf("The area is = %f", area);
	//to calculate a area of triangle.
	printf("Enter the value of base and height is:");
	scanf("%f%f", &base, &height);
	ar = base*height/2;
	printf("The ar is = %f", ar);
	getch();
}
