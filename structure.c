//PROGRAM FOR STRUCTURE  1904
#include<stdio.h>
#include<conio.h>
int main()
{
	struct employee
	{
		int empno;
		char name[30];
		float salary;
		char designation[30];
	};
	struct employee emp1 = {100,"sanjay",50000,"manager"};
	printf("\n employee number: %d",emp1.empno);
	printf("\n employee name; %s",emp1.name);
	printf("\n employee salary : %f",emp1.salary);
	printf("\n employee designation: %s",emp1.designation);
    return 0;
}