// WAP to using getchar(); putchar(); getch(); getche(); ?
#include<stdio.h>
#include<conio.h>
void main()
{
	char kaka;
	clrscr();
	printf("Enter any character : \n");
	kaka = getchar();
	printf("Entered character is : \n");
	putchar(kaka);
	printf("Enter any character \n");
	kaka = getch();
	printf("Entered the character is %c \n", kaka);
	printf("Enter any character \n");
	kaka = getche();
	printf("Entered the character is : %c \n", kaka);
	getch();
}
