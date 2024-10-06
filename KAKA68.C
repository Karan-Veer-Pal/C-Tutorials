//WAP to demonstrate the bitwise AND, OR, X-OR, COMPLEMENT, SHIFT LEFT, SHIFT RIGHT?
#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b;
	clrscr();

	printf("Enter the value of a & b:\n");
	scanf("%d%d", &a, &b);

	printf("Output of bitwise AND=%d\n", a&b);
	printf("Output of bitwise OR=%d\n", a^b);
	printf("Output of bitwise X-OR=%d\n", a|b);
	//printf("Output of bitwise COMPLEMENT=%d\n", ~b);

	getch();
}