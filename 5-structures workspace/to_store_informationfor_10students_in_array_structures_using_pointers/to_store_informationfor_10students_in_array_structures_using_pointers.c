/*
 * to_store_informationfor_10students_in_array_structures_using_pointers.c
 *
 *  Created on: May 16, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
struct student
{
	char name[30];
	int id;
	float grade;
};

void store_information(struct student *students,int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("enter the name,id,grade for student number%d:\n",i+1);  fflush(stdout);
		scanf("%s %d %f",students->name,&students->id,&students->grade);
		printf("\n");
		students++;
	}
}
void print_information(struct student *students,int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("student number%d information:\n",i+1);
		printf("the name: %s\tthe id: %d\tthe grade: %f",students->name,students->id,students->grade);
		printf("\n");
		students++;
	}
}
int main()
{
	struct student students_data[10];

	store_information(students_data,10);
	print_information(students_data,10);



	return 0;
}
