/*
 * ass3_ex2.c
 *
 *  Created on: Apr 18, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>



char string_check(char str[], int size)
{
	size = 15;
	char i, j;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = i + 1; str[j] != '\0'; j++)
		{
			if (str[i] == str[j])
			{
				return 0;


			}

		}

	}
	return 1;
}

int main()
{
	int size = 15;
	char str[15] = "ahmedm";

		if (string_check(str, size) ==0)
		{
			printf("there is a repeated letter in the string");
		}
		else
		{
			printf("there is no repeated letter in the string");

		}


	return 0;
}
