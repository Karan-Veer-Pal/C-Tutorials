// WAP to find percentage as well as division?
worng
#include<stdio.h>
#include<conio.h>

void main()
{
	int hin, maths, eng, sst, sci;
	float per;
	clrscr();
	printf("Enter the marks of  hin, maths, eng, sst, sci:");
	scanf("%d%d%d%d%d", &hin, &maths, &eng, &sst, &sci);

	per = (hin+maths+eng+sst+sci)/5;
	printf("The per is = %f \n", per);

	if(per>=60)
	{
		printf("I div \n");
	}
	else if(per>=45 && per<=59)
	{
		printf("II div \n");
	}
	else if(per>44 && per<33)
	{
		printf("III div \n");
	}
	else
	{
		printf("Fail \n");
	}
	getch();
}


