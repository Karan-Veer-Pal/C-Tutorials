//WAP to store the details of a 3 employees from user defined data?
#include<stdio.h>
#include<conio.h>

struct employee
{
	char name[32];
	int id_code;
	float salary;
};
void main()
{
	struct employee e1;
	struct employee *ptr;
	struct employee e2;
	struct employee *p;
	ptr=&e1;
	p=&e2;
	clrscr();

	printf("Enter the details of the first employee :\n");
	printf("Enter the name of a employee:\n");
	gets(ptr->name);
	printf("Enter the id_code of a employee:\n");
	scanf("%d", &ptr->id_code);
	//printf("Enter the salary of a employee:\n");
	//scanf("%f", &ptr->salary);

	printf("The details of the first employee is:\n");
	printf("The name of a employee is:%s\n", ptr->name);
	printf("The id_code of a employee is:%d\n", ptr->id_code);
	//printf("The salary of a employee is:%.2f\n", ptr->salary);

	printf("\n");
	printf("Enter the details of the second employee :\n");
	printf("Enter the name of a employee:\n");
	fflush(stdin);
	gets((*p).name);
	printf("Enter the id_code of a employee:\n");
	scanf("%d", &(*p).id_code);
	//printf("Enter the salary of a employee:\n");
	//scanf("%f", &(*p).salary);

	printf("The details of the first employee is:\n");
	printf("The name of a employee is:%s\n", (*p).name);
	printf("The id_code of a employee is:%d\n", (*p).id_code);
	//printf("The salary of a employee is:%.2f\n", (*p).salary);

	getch();
}
