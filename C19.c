// Day : 18 WAP to enter week days in number and convert into day?

#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter the value of a between 1 to 7 : \n");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
		{
			printf("Monday");
			break;
		}
		case 2:
		{
			printf("Tuesday");
			break;
		}
		case 3:
		{
			printf("Wednesday");
			break;
		}
		case 4:
		{
			printf("Thursday");
			break;
		}
		case 5:
		{
			printf("Friday");
			break;
		}
		case 6:
		{
			printf("Saturday");
			break;
		}
		case 7:
		{
			printf("Sunday");
			break;
		}
		default:
		{
			printf("Enter a valid number between 1 to 7");
			break;
		}
	}

	return 0;
}