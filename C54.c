// Day : 54 WAP to detect the vowel in the word?

#include<stdio.h>
#include<ctype.h>

int main()
{
	char st[50];
	int vowel = 0;
	int i;

	printf("Enter your string:\n");
	scanf("%s", st[50]);

	for(i=0; st[i]; i++)
	{
		if(st[i] == 'a' || st[i] == 'A' || st[i] == 'e' || st[i] == 'E' || st[i] == 'i' || st[i] == 'I' || st[i] == 'o' || st[i] == 'O' || st[i] == 'u' || st[i] == 'U')
		{
			vowel++;
		}
	}
	printf("%e", st[50]);
	printf("%d", vowel);

	return 0;
}
