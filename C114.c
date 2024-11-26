// Day : 114 WAP to encrypt and decrypt a string by adding 1 to the ASCII value of its characters?

#include<stdio.h>

void encrypt(char *c);
void decrypt(char *a);
int main()
{
	char str1[100];

	printf("Enter any string or a message which you want to be encrypt or decrypt:\n");
	gets(str1);

	encrypt(str1);
	printf("Encrypt string or message is:%s\n", str1);
	decrypt(str1);
	printf("Decrypt string or message is:%s\n", str1);

	return 0;
}
void encrypt(char *c)
{
	char *ptr=c;
	while(*ptr!='\0')
	{
		*ptr=*ptr+1;
		ptr++;
	}
}
void decrypt(char *a)
{
	char *p=a;
	while(*p!='\0')
	{
		*p=*p-1;
		p++;
	}
}
