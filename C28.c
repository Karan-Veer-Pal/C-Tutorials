// WAP using break statement?
#include<stdio.h>
#include<conio.h>

void main()
{
	int i, n;
	clrscr();
	//printf("Enter the value of n is:");
	//scanf("%d", &n);
	for(i=1; i<=10; i++)
	{
		if(i==7)
		{
			break;
		}
		printf("%d \n", i);
	}
	getch();

}
