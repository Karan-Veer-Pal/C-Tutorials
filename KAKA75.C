// WAP to accept marks of five student in an array and print them to the screen?
//Without using loops....
#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];
	clrscr();

	printf("Enter the marks of student of a[1]:\n");
	scanf("%d", &a[1]);
	printf("Enter the marks of student of a[2]:\n");
	scanf("%d", &a[2]);
	printf("Enter the marks of student of a[3]:\n");
	scanf("%d", &a[3]);
	printf("Enter the marks of student of a[4]:\n");
	scanf("%d", &a[4]);
	printf("Enter the marks of student of a[5]:\n");
	scanf("%d", &a[5]);

	printf("The marks of student of a[1] is %d\n",a[1]);
	printf("The marks of student of a[2] is %d\n",a[2]);
	printf("The marks of student of a[3] is %d\n",a[3]);
	printf("The marks of student of a[4] is %d\n",a[4]);
	printf("The marks of student of a[5] is %d\n",a[5]);

	getch();

}