// WAP to check the student are eligible or not?
#include<stdio.h>
#include<conio.h>
void main()
{       int student;
	clrscr();
	printf("Enter the age of student:");
	scanf("%d", &student);
	if(student>=18)
	{
		printf("The student is eligible to fill the form");
		// These student are adult.
	}
	else
	{
		printf("The student is not eligible to fill the form");
		// These student are not adult.
	}
	getch();
}