//WAP to count the occurence of a given character in a string?
#include<stdio.h>
#include<conio.h>

int occurence(char st[], char c);
void main()
{
	char str[]="karan";
	int count;
	clrscr();

	count=occurence(str,'7');
	printf("Occurence=%d\n", count);

	getch();
}
int occurence(char st[], char c)
{
	char *ptr=st;
	int counting=0;
	while(*ptr!='\0')
	{
		if(*ptr==c)
		{
			counting++;
		}
		ptr++;
	}
}
