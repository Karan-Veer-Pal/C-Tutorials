// Day : 46 WAP to perform a sorting with using function array?

#include<stdio.h>

void bubble_sort(int p[], int m);
int main()
{
	int a[50], n, i;

	printf("enter the size of array:\n");
	scanf("%d", &n);

	printf("Enter %d element into array: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	bubble_sort(a,n);

	return 0;
}
void bubble_sort(int p[], int m)
{
	int i, j, t;

	for(i=0; i<m; i++)
	{
		for(j=i+1; j<m; j++)
		{
			if(p[i]>p[j])
			{
				t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
	printf("After sorting the array is:\n");
	for(i=0; i<m; i++)
	{
		printf("%d\t", p[i]);
	}
}
