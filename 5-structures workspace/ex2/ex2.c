/*
 * ex2.c
 *
 *  Created on: May 14, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[30];
};
int main()
{
	struct student record[2];
	record[0].id = 5;
	strcpy(record[0].name, "ahmed");
	record[1].id = record[0].id + 5;
	strcpy(record[1].name, " dwidar");
	printf("%d %s \n%d %s",record[0].id,record[0].name,record[1].id,record[1].name);
	return 0;
}
