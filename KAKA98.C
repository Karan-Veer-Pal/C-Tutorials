//WAP to sorting an array from function?
#include<stdio.h>
#include<conio.h>

void function(int a[], int n);
void main()
{
	int arr[100], i, m;
	clrscr();

	printf("Enter the size of the array:\n");
	scanf("%d",&m);

	printf("Enter the element into an array:\n");
	for(i=0; i<m; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("An input array is:\n");
	for(i=0; i<m; i++)
	{
		printf("%d\t", arr[i]);
	}
	function(arr,m);

	getch();
}
void function(int a[], int n)
{
	int i, j, t, p[100];

	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	printf("\nThe sorting is:");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}