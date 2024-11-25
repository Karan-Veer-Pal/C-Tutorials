//Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position for slice?
#include<stdio.h>
#include<conio.h>

void slice(char *str, int m, int n);
void main()
{
	char st[]="systumhai";
	clrscr();
	slice(st,2,12);
	printf("%s", st);

	getch();
}
void slice(char *str, int m, int n)
{
	int i=0;
	while((m+i)<n)
	{
		str[i]=str[i+m];
		i++;
	}
	str[i]='\0';
}
