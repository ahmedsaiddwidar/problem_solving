/*
 * store_information_for_student_using_structure_and_display_it.c
 *
 *  Created on: May 15, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
struct student
{
	char *name;
	int roll;
	float mark;
}student_info;


int main()
{
	student_info.name = "ahmed dwidar";
	student_info.roll = 45;
	student_info.mark = 95.5;

	printf("student information are:\n\n");
	printf("name: %s\nroll: %d\nmark: %f",student_info.name,student_info.roll,student_info.mark);


	return 0;
}
