// Day : 74 WAP to find biggest number using graphics?

#include<stdio.h>
#include<graphics.h>

int main()
{
	int a, b;

	textmode(C80);
	textbackground(RED);
	textcolor(GREEN);

	gotoxy(1000,1000);
	cputs("Enter the first number:\n");
	scanf("%d", &a);

	gotoxy(1000,1000);
	cputs("Enter second number:\n");
	scanf("%d", &b);

	textcolor(BLUE+BLINK);
	if(a>b)
	{
		gotoxy(1000,1000);
		printf("%d", a);
		cputs("Is the biggest numbeer!\n");
	}
	else
	{
		gotoxy(1000,1000);
		printf("%d", b);
		cputs("Is the biggest numbeer!\n");
	}

	return 0;
	restorecrtmode();
}
