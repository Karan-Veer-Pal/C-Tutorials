// Day : 42  WAP to perform a arithmetic operation by using function?

#include<stdio.h>

void sum(int a, int b);
void sub(int c, int d);
void mul(int e, int f);
void div(int g, int h);
int main()
{
	int a, b, c, d, e, f, g, h;
	
	printf("Enter the value of a, b, c, d, e, f, g and h: \n");
	scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h);

	sum(a,b);
	sub(c,d);
	mul(e,f);
	div(g,h);

	return 0;
}
void sum(int a, int b)
{
	int sum = a+b;
	printf("The sum is = %d \n", sum);
}
void sub(int c, int d)
{
	int sub;
	sub = c-d;
	printf("The sub is = %d \n", sub);
}
void mul(int e, int f)
{
	int mul;
	mul = e*f;
	printf("The mul is = %d \n", mul);
}
void div(int g, int h)
{
	int div;
	div = g/h;
	printf("The div is = %d \n", div);
}
