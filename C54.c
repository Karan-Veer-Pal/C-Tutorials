// WAP to detect the vowel in the word?

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	char st[50];
	int vowel = 0;
	int i;
	clrscr();

	printf("Enter your string:\n");
	scanf("%s", st[50]);

	for(i=0; st[i]; i++)
	{
		if(st[i] == 'a' || st[i] == 'A' || st[i] == 'e' || st[i] == 'E' || st[i] == 'i' || st[i] == 'I' || st[i] == 'o' || st[i] == 'O' || st[i] == 'u' || st[i] == 'U')
		{
			vowel++;
			//printf("%d", vowel);
		}
		//printf("%d", vowel);
	}
	//printf("%e", st[50]);
	getch();
}
