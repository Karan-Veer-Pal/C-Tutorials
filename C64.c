// Day : 64 WAP using a function which calculate the sum and average of two numbers. Use pointers and print the value of sum and average in main()?

#include<stdio.h>

void SumandAvg(int x, int y, int *sum, float *avg);
int main()
{
	int a, b, sum;
	float avg;

	printf("Enter the value of a and b:\n");
	scanf("%d%d", &a, &b);

	SumandAvg(a,b,&sum,&avg);
	printf("The value of sum is:%d\n", sum);
	printf("The value of average is:%f\n", avg);

	return 0;
}
void SumandAvg(int x, int y, int *sum, float *avg)
{
	*sum=x+y;
	*avg=(float)*sum/2;
}
