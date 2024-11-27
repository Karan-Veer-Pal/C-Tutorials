//WAP to decrypt a string by adding 1 to the ASCII value of its characters?
#include<stdio.h>
#include<conio.h>

void decrypt(char *c);
void main()
{
	char str1[100];
	clrscr();

	printf("Enter any string or a message:\n");
	gets(str1);

	decrypt(str1);
	printf("Encrypt string or message is:%s\n", str1);

	getch();
}
void decrypt(char *c)
{
	char *ptr=c;
	while(*ptr!='\0')
	{
		*ptr=*ptr+1;
		ptr--;
	}
}
