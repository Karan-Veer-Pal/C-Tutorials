// Day : 63 WAP using a function which calculate the sum and average of three numbers.

#include<stdio.h>

int sum(int x, int y, int z);
float average(float avg);
int main()
{
	int a, b, c, w;
	float av;

	printf("Enter the value of a, b and c:\n");
	scanf("%d%d%d", &a, &b, &c);

	w = sum(a,b,c);
	printf("The value of sum is:%d\n", w);

	av = average(w);
	printf("The value of average is:%f\n", av);

	return 0;
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
