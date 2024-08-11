// Day : 15 WAP to calculate a salary?

#include<stdio.h>

int main()
{
	float da, bs, gs;
	
	printf("Enter the value of bs:");
	scanf("%f", &bs);
	da = bs*32/100;
	gs = bs+da;
	printf("The gs is = %f", gs);
	
	return 0;
}
