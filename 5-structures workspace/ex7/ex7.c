/*
 * ex7.c
 *
 *  Created on: May 14, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
struct employee
{
	char name[100];
	int age;
	float salary;
	struct address
	{
		int houseNumber;
        char street[100];
	}location;
};

int main()
{
	struct employee emp;
	printf("Enter Name, Age, Salary of Employee : \n");
	scanf("%s %d %f",emp.name,&emp.age,&emp.salary);

	printf("Enter House Number and Street of Employee : \n");
	scanf("%d %s",&emp.location.houseNumber,emp.location.street);

	printf("Employee Details :\n");
	printf("Name: %s\nAge: %d\nSalary of Employee: %f\n\nHouse Number: %d\nStreet of Employee: %s", \
			emp.name,emp.age,emp.salary,emp.location.houseNumber,emp.location.street);
}

