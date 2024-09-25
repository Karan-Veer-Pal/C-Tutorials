// Day : 58 WAP to access structure member through pointer?

#include<stdio.h>

struct name
{
	int a;
	float b;
};
struct name *ptr.p;
ptr = &p;

int main()
{
	//struct name *ptr.p;
	//ptr = &p;

	printf("Enter integer number:\n");
	scanf("%d", &ptr->a);

	printf("Enter floating number:\n");
	scanf("%f", &ptr->b);

	printf("Display the number:\n");
	printf("Interger number is = %d\n", ptr->a);
	printf("Floating number is = %f\n", ptr->b);

	return 0;
}
