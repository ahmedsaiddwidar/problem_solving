/*
 * remove_all_characters_expect_alphabet.c
 *
 *  Created on: May 7, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#include<string.h>

void remove_char(char str[])
{
	int i,j;
	for(i = 0; str[i] !='\0'; i++)
	{
		while(!((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z')))
		{
			printf("zz\n");
			for(j = i; str[j] !='\0'; j++)
			{
			str[j] = str[j+1];
			}
		}
	}



}

int main()
{
	char string[] ="ahm35e!d";
	remove_char(string);
	puts(string);




	return 0;
}
