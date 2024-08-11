// WAP to calculate a salary
#include<stdio.h>
#include<conio.h>
void main()
{
	float da, bs, gs;
	clrscr();
	printf("Enter the value of bs:");
	scanf("%f", &bs);
	da = bs*32/100;
	gs = bs+da;
	printf("The gs is = %f", gs);
	getch();
}