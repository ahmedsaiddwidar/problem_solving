/*
 * reverse_a_string_by_passing_to_function.c
 *
 *  Created on: May 7, 2023
 *      Author: Ahmed Dwidar
 *      #include<stdio.h>

 *#include<stdio.h>
#include<string.h>


void reverse_string(char *str)
{
	int i, length, temp;
	length = strlen(str);
	for(i = 0; i < length / 2; i++)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}
int main()
{
	char string[10] = "ahmed";
	puts(string);
	reverse_string(string);
	puts(string);

	return 0;
}
 *
 */

#include<stdio.h>
#include<string.h>


void reverse_string(char *str)
{
	int i, length, temp;
	length = strlen(str);
	for(i = 0; i < length / 2; i++)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}
int main()
{
	char string[10] = "ahmed";
	puts(string);
	reverse_string(string);
	puts(string);

	return 0;
}
