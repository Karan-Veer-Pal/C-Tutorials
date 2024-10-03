// Day : 66 WAP to writing some content or text to a file?

#include<stdio.h>

int main()
{
	int n;
	FILE *fp;

	fp = fopen("demo.txt","a+");
	if(fp == NULL)
	{
		printf("Error!");
		exit(1);
	}
	printf("Enter the value of n:\n");
	scanf("%d", &n);


	fprintf(fp,"%d",n);
	fclose(fp);
	
	return 0;
}
