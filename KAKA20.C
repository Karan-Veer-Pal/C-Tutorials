// WAP to convert a digit into word?
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter any number of a");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
		{
			printf("One");
			break;
		}
		case 2:
		{
			printf("Two");
			break;
		}
		case 3:
		{
			printf("Three");
			break;
		}
		case 4:
		{
			printf("Four");
			break;
		}
		case 5:
		{
			printf("Five");
			break;
		}
		case 6:
		{
			printf("Six");
			break;
		}
		case 7:
		{
			printf("Seven");
			break;
		}
		case 8:
		{
			printf("Eight");
			break;
		}
		case 9:
		{
			printf("Nine");
			break;
		}
		default:
		{
			printf("Enter a valid number between 1 to 9");
			break;
		}
	}
	getch();
}