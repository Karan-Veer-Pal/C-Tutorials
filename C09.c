// Day : 09 WAP to using getchar(); putchar(); getch(); getche(); ?

#include<stdio.h>

int main()
{
	char kaka;
	
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

	return 0;
}
