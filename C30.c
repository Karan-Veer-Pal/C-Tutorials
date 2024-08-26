// WAP to demonstrate of a function with no argument and no return a value?

#include<stdio.h>
#include<conio.h>

void Get_Name();  // function declaration
void main()
{
	clrscr();
	Get_Name();  // calling
	getch();
}
void Get_Name()
{
	char name[50];
	gets(name);
	puts(name);
}
