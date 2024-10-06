// Day : 69 WAP to demonstrate the bitwise AND, OR, X-OR, COMPLEMENT, SHIFT LEFT, SHIFT RIGHT?

#include<stdio.h>

int main()
{
	int a, b;

	printf("Enter the value of a & b:\n");
	scanf("%d%d", &a, &b);

	printf("Output of bitwise AND=%d\n", a&b);
	printf("Output of bitwise OR=%d\n", a^b);
	printf("Output of bitwise X-OR=%d\n", a|b);
	//printf("Output of bitwise COMPLEMENT=%d\n", ~b);

	return 0;
}
