// WAP to demonstrate the area is defined and not?
#define area 5000
void main()
{
	clrscr();
	#ifdef area
	{
		printf("Area is defined!");
	}
	#else
	{
		printf("Area is not defined!");
	}
	#endif

	getch();
}