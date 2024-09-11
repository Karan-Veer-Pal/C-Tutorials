// WAP to perform a sorting with using function array?

#include<stdio.h>
#include<conio.h>

void bubble_sort(int p[], int m);
void main()
{
	int a[50], n, i;
	clrscr();

	printf("enter the size of array:\n");
	scanf("%d", &n);

	printf("Enter the element into array:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	bubble_sort(a,n);
	getch();
}
void bubble_sort(int p[], int m)
{
	int i, j, t, a[50];

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