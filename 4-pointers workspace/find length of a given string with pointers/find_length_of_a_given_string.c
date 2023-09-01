/*
 * find_length_of_a_given_string.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>


int main()
{
	char str[20] = "ahmeddwiadr";
	char *ptrstr = str;
	int length = 0;
	int i;
	for( i = 0; ptrstr[i] != '\0'; i++)
	{
		length++;
	}
	printf("the length of the string = %d", length);



	return 0;
}



