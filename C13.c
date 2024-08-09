// Day : 13 WAP to check the student are eligible or not to fill the sarkari form?

#include<stdio.h>

int main()
{       int student;
	
	printf("Enter the age of student:");
	scanf("%d", &student);
	if(student>=18)
	{
		printf("The student is eligible to fill the form");
	}
	else
	{
		printf("The student is not eligible to fill the form");
	}

 	return 0;
}
