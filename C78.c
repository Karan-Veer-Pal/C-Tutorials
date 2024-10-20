//WAP to demonstrate the pointer increment and decrement?
#include<stdio.h>
#include<conio.h>

void main()
{
	int i=77;
	int *ptr;
	ptr=&i;
	clrscr();

	printf("The value of ptr is %u\n", ptr);
	ptr++;
	printf("The value of ptr is %u\n", ptr);
	ptr=ptr+1;
	printf("The value of ptr is %u\n", ptr);
	ptr--;
	printf("The value of ptr is %u\n", ptr);
	ptr=ptr-1;
	printf("The value of ptr is %u\n", ptr);
	ptr=ptr+2;
	printf("The value of ptr is %u\n", ptr);
	ptr++;
	printf("The value of ptr is %u\n", ptr);
	ptr++;
	printf("The value of ptr is %u\n", ptr);
	ptr=ptr++;
	printf("The value of ptr is %u\n", ptr);
	ptr++;

	getch();
}
