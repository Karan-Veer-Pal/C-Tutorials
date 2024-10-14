// Day : 77 WAP to accept marks of five student in an array and print them to the screen?
//With using loops....

#include<stdio.h>

void main()
{
	int a[5], i;

	for(i=0; i<5; i++)
	{
		printf("Enter the marks of student of %d:\n", i+1);
		scanf("%d", &a[i]);
	}

	for(i=0; i<5; i++)
	{
		printf("The marks of student of %d is %d\n",i+1,a[i]);
	}
	
	return 0;
}
