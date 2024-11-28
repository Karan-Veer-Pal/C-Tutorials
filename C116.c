// Day : 116 WAP to count the occurence of a given character in a string?

#include<stdio.h>

int occurence(char st[], char c);
int main()
{
	char str[]="karan";
	int count;

	count=occurence(str,'7');
	printf("Occurence=%d\n", count);

	return 0;
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
