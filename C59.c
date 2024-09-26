// Day : 59 WAP to display the size of the union & structure?

#include<stdio.h>
#include<string.h>

union job1
{
	char name[32];
	float salary;
	int id;
}x;

struct job2
{
	char name[32];
	float salary;
	int id;
}y;

int main()
{
	printf("The size of union is: %d\n", sizeof(x));
	printf("The size of structure is: %d\n", sizeof(y));

	return 0;
}
