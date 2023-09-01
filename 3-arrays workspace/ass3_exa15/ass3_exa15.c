/*
 * ass3_exa15.c
 *
 *  Created on: May 2, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>

void concatenate(char str1[], char str2[])
{
	int i, j;
	for(i = 0; str1[i] != '\0'; i++)
	{

	}


		for(j = 0; str2[j] != '\0'; j++, i++)
		{
			str1[i] = str2[j];
		}
	str1[i] = '\0';


}

int main()
{
	char string1[100];
	char string2[100];

	printf("enter the first string: \n");  fflush(stdout);
	gets(string1);

	printf("enter the second string: \n");  fflush(stdout);
	gets(string2);

	concatenate(string1, string2);
	printf("the new string will be : %s", string1);


	return 0;
}
