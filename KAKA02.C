// WAP to subtract of numbers?
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, v, c, d;
	clrscr();
	printf("Enter the value of a : \n");
	scanf("%d", &a);
	printf("Enter the value of v : \n");
	scanf("%d", &v);
	printf("Enter the value of c : \n");
	scanf("%d", &c);
	d = a-v-c;
	printf("The result of d is = %d \n");
	getch();
}