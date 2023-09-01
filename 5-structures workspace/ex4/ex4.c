/*
 * ex4.c
 *
 *  Created on: May 14, 2023
 *      Author: Ahmed Dwidar
 */
#include <stdio.h>
#include <stdlib.h>

struct student
{
	char *first_name;
	char *second_name;
	int id;
	float grade;
};

void by_value(struct student s)
{
	s.first_name = "ahmed";
	s.second_name = "dwidar";
	s.grade = 90;
	s.id = 5;
}
void by_reference(struct student *s_ptr)
{
	s_ptr ->first_name = "ahmed";
	s_ptr ->second_name = "dwidar";
	s_ptr ->grade = 90;
	s_ptr ->id = 5;
}


int main()
{
    struct student s1={"Mohamed","Tarek",1,95.75}; //intialization like array must be in th
    printf("Student 1 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    by_value(s1); //pass s1 by value
    printf("Student 1 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);

    by_reference(&s1); //pass s1 by address
    printf("Student 1 Information :\n");
    printf("Name : %s %s\nID: %d\nGrade:%f\n\n",s1.first_name,s1.second_name,s1.id,s1.grade);
	return 0;
}

