// Day : 67 WAP to writing some conteny or text to a file?

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	FILE *fp;

	fp = fopen("demo.txt","r+");
	if(fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	scanf(fp,"%d", &n);


	printf("The value of n=%d",n);

	return 0;
}
