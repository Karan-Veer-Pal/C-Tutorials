// WAP using a function which calculate the sum and average of three numbers.

#include<stdio.h>
#include<conio.h>

int sum(int x, int y, int z);
float average(float avg);
void main()
{
	int a, b, c, w;
	float av;
	clrscr();

	printf("Enter the value of a, b and c:\n");
	scanf("%d%d%d", &a, &b, &c);

	w = sum(a,b,c);
	printf("The value of sum is:%d\n", w);

	av = average(w);
	printf("The value of average is:%f\n", av);

	getch();
}
int sum(int x, int y, int z)
{
	x+y+z;
	return x+y+z;
}
float average(float avg)
{
	avg/3;
	return avg/3;
}
