// Day : 118 WAP to store the details of a 3 employees from user defined data?

#include<stdio.h>

struct employee
{
	char name[32];
	int id_code;
	float salary;
}e1, e2, e3;

int main()
{
	printf("Enter the details of the employee first:\n");
	printf("Enter the name of a employee:\n");
	gets(e1.name);
	printf("Enter the id_code of a employee:\n");
	scanf("%d", &e1.id_code);
	printf("Enter the salary of a employee:\n");
	scanf("%f", &e1.salary);

	printf("Enter the details of the employee second:\n");
	printf("Enter the name of a employee:\n");
	fflush(stdin);
	gets(e2.name);
	printf("Enter the id_code of a employee:\n");
	scanf("%d", &e2.id_code);
	printf("Enter the salary of a employee:\n");
	scanf("%f", &e2.salary);

	printf("Enter the details of the employee third:\n");
	printf("Enter the name of a employee:\n");
	fflush(stdin);
	gets(e3.name);
	printf("Enter the id_code of a employee:\n");
	scanf("%d", &e3.id_code);
	printf("Enter the salary of a employee:\n");
	scanf("%f", &e3.salary);

	printf("The details of the first employee is:\n");
	printf("The name of a employee is:%s\n", e1.name);
	printf("The id_code of a employee is:%d\n", e1.id_code);
	printf("The salary of a employee is:%.2f\n", e1.salary);

	printf("The details of the second employee is:\n");
	printf("The name of a employee is:%s\n", e2.name);
	printf("The id_code of a employee is:%d\n", e2.id_code);
	printf("The salary of a employee is:%.2f\n", e2.salary);

	printf("The details of the third employee is:\n");
	printf("The name of a employee is:%s\n", e3.name);
	printf("The id_code of a employee is:%d\n", e3.id_code);
	printf("The salary of a employee is:%.2f\n", e3.salary);

	return 0;
}
