/*
 * ass3_exa12.c
 *
 *  Created on: May 1, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int string_length(char str[], int n)
{
	int i, length = 0;
	for(i = 0; str[i] !='\0'; i++)
	{
		length++;
	}
	return length;
}

int main()
{
	char string[20];
	int size = 20;
	printf("enter the string : \n");  fflush(stdout);
	gets(string);

	printf("the length of the string = %d", string_length(string, size));

	return 0;
}
