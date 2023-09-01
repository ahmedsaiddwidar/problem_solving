/*
 * find_length_of_a_given_string2.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>


int main()
{
	char str[20] = "ahmeddwiadr";
	char *ptrstr;
	ptrstr = str;
	int length = 0;

	while( *ptrstr != '\0')
	{
		length++;
		ptrstr++;
	}
	printf("the length of the string = %d", length);




	return 0;
}

