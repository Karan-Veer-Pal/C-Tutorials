// Day : 86 WAP to create an array of 10 integer and stores multiplication table of 5 in it?

#include<stdio.h>

int main()
{
	int arr[10], i, m;

	printf("Enter the digit which you want to multiple:\n");
	scanf("%d", &m);
	for(i=0; i<10; i++)
	{
		arr[i]=m*(i+1);
	}

	for(i=0; i<10; i++)
	{
		printf("%dx%d=%d\n", m,i+1,arr[i]);
	}

	return 0;
}
