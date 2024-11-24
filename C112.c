//WAP to take string as an input from thr user %c and %s confirm that the string are equal?
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[32], str2[32], c;
	int i;
	clrscr();

	printf("Enter the first string:\n");
	scanf("%s",str1);

	printf("Enter the second string character by character:\n");
	i=0;
	while(c!='\n')
	{
		fflush(stdin);
		scanf("%c", &c);
		str2[i]=c;
		i++;
	}
	str2[i-1]='\0'; //str2[i]='\0';

	printf("The value of str1 is:%s\n", str1);
	printf("The value of str2 is:%s\n", str2);

	printf("strcmp for these strings returns %d", strcmp(str1,str2));


	getch();
}
