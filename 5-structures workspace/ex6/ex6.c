/*
 * ex6.c
 *
 *  Created on: May 14, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
struct employee
{
	char name[20];
	int id;
	float salary;
	struct date birth;
};

int main()
{
	struct employee emp ={"ahmed",1,1000,{20,9,1991}};
	printf("\n employee name : %s", emp.name);
	printf("\n employee id : %d", emp.id);
	printf("\n employee salary : %f", emp.salary);
	printf("\n\n employee DOF : %d/%d/%d",emp.birth.day,emp.birth.month,emp.birth.year);

	return 0;
}
