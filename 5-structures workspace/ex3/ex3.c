/*
 * ex3.c
 *
 *  Created on: May 14, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

struct student
{
	char *first_name;
	char *second_name;
	int id;
	float grade;
}arr_st[2], *Arrstr_ptr;

int main()
{
	Arrstr_ptr = arr_st;
	Arrstr_ptr ->first_name = "ahmed";
	Arrstr_ptr ->second_name = "dwidar";
	Arrstr_ptr ->id = 5;
	Arrstr_ptr ->grade = 95;

	printf("the info of first student:\n");
	printf("name: %s %s\nid: %d\ngrade: %f\n\n",Arrstr_ptr ->first_name,Arrstr_ptr ->second_name,Arrstr_ptr ->id,Arrstr_ptr ->grade);
	printf("name: %s %s\nid: %d\ngrade: %f\n\n",arr_st[0].first_name,arr_st[0].second_name,arr_st[0].id,arr_st[0].grade);

	Arrstr_ptr++;

	Arrstr_ptr ->first_name = "amr";
	Arrstr_ptr ->second_name = "zein";
	Arrstr_ptr ->id = 7;
	Arrstr_ptr ->grade = 96;

	printf("the info of second student:\n");
	printf("name: %s %s\nid: %d\ngrade: %f\n\n",Arrstr_ptr ->first_name,Arrstr_ptr ->second_name,Arrstr_ptr ->id,Arrstr_ptr ->grade);
	printf("name: %s %s\nid: %d\ngrade: %f\n\n",arr_st[1].first_name,arr_st[1].second_name,arr_st[1].id,arr_st[1].grade);

	return 0;
}
