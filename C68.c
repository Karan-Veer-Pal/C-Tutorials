// Day : 68 WAP to reading some content or text in a file?

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	FILE *fp;

	fp = fopen("demo.txt","r");
	if(fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	while(1)
	{
		n = fgetc(fp);
		if(feof(fp))
		{
			break;
		}
		printf("%c", n);
	}
	fclose(fp);

	return 0;
}
