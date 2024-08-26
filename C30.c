// Day : 30 WAP to demonstrate of a function with no argument and no return a value?

#include<stdio.h>

int Get_Name();  // function declaration
int main()
{
	Get_Name();  // calling

	return 0;
}

int Get_Name()
{
	char name[50];
	gets(name);
	puts(name);
}
