//WAP to input a string and display them?
//Different diffrent types are:....
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[32], st[32], s[]="karan", *ptr=s, string[]={'k','a','r','a','n','v','e','e','r','\0'}, *p;
	clrscr();

	printf("By first method using gets() and puts:\n");
	printf("Enter the string:\n");
	gets(st);
	printf("The string is:\n");
	puts(st);

	printf("By second method using scanf and printf (percent s):\n");
	printf("Enter the string:\n");
	scanf("%s",str);
	printf("The string is %s\n",str);

	printf("By third method using loop:(percent c) and s[]="", *ptr=s\n");
	printf("The string is\n");
	while(ptr!='\0')
	{
		printf("%c", *ptr);
		ptr++;
	}

	printf("By fourth method using loop:(percent c) and string[]={'k','a','r','a','n','v','e','e','r','\0'}, *p\n");
	printf("The string is\n");
	while(p!='\0')
	{
		printf("%c", *p);
		p++;
	}

	getch();
}