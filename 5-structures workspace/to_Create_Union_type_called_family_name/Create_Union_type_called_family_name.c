/*
 * Create_Union_type_called_family_name.c
 *
 *  Created on: May 16, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
#include<string.h>

union family_name
{
	char first_name[30];
	char last_name[30];
};
int main()
{
	union family_name string;
	strcpy(string.first_name,"AHmed");
	printf("first name is: %s\n",string.first_name);
	strcpy(string.last_name,"Dwidar");
	printf("last name is: %s\n",string.last_name);

	printf("the full name is: %s %s\n",string.first_name,string.last_name);
	printf("the size of the union = %d", sizeof(string));

	return 0;
}
