//WAP to find out the length of the string without using string?
#include<stdio.h>
#include<conio.h>

int strlen(char *st);
void main()
{
	char str[]="karan";
	int l;
	char string[50];
	int i, n;
	clrscr();

	printf("First method:\n");
	l = strlen(str);

	printf("The length of the first string is:%d\n", l);

	printf("Second method:\n");
	printf("Enter another string:\n");
	gets(string);
	for(i=0; string[i]!='\0'; i++)
	{
		;
	}
	printf("The length of the second string is %d\n",i);

	getch();
}
int strlen(char *st)
{
	char *ptr=st;
	int len=0;
	while(*ptr!='\0')
	{
		len++;
		ptr++;
	}
	return len;
}
