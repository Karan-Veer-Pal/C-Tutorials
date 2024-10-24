//WAP to demonstrate a 2D array?
#include<stdio.h>
#include<conio.h>

void main()
{
	int n_students=3;
	int n_subjects=5;
	int marks[3][5], i, j;
	clrscr();

	for(i=0; i<n_students; i++)
	{
		for(j=0; j<n_subjects; j++)
		{
			printf("Enter the marks of a student %d in subject %d\n", i+1, j+1);
			scanf("%d", &marks[i][j]);
		}
	}
	for(i=0; i<n_students; i++)
	{
		for(j=0; j<n_subjects; j++)
		{
			printf("The marks of student %d in subject %d is:%d\n",i+1, j+1, marks[i][j]);
		}
		printf("\n");
	}

	getch();
}