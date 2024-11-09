//WAP to find the sum and average by array?
#include<stdio.h>
#include<conio.h>

void function(int a[], int n);
void main()
{
	int arr[100], i, m;
	clrscr();

	printf("Enter the size of the array:\n");
	scanf("%d", &m);

	printf("Enter the element into array:\n");
	for(i=0; i<m; i++)
	{
		scanf("%d",&arr[i]);
	}

	function(arr,m);

	getch();
}
void function(int a[], int n)
{
	int i, sum=0;
	float average;
	for(i=0; i<n; i++)
	{
		sum = sum+a[i];
	}
	printf("The sum is:%d\n", sum);

	average=sum/n;
	printf("The average is:%f\n", average);

}