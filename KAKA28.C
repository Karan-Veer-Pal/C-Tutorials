// WAP with using continue statement?
#include<stdio.h>
#include<conio.h>

void main()
{
	int i, n;
	clrscr();
	//printf("Enter the value of n is:");
	//scanf("%d", &n);
	for(i=0 ; i<=10; i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("%d \n", i);
	}
	getch();
}