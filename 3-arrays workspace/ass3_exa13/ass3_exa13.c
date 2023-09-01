/*
 * ass3_exa13.c
 *
 *  Created on: May 1, 2023
 *      Author: Ahmed Dwidar
 */

#include <stdio.h>

void remove_character_except_alphabet(char str[], int n)
{
	int i,j;
	for(i = 0; str[i] != '\0'; i++)
	{
		while( !( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && (str[i] != '\0' ) )
		{
			for	(j = i; str[j] != '\0'; j++)
			{
				str[j]= str[j + 1];
			}
		}

	}
}

int main()
{
	char string[100];
	int size = 100;
	printf("enter the string :\n");   fflush(stdout);
	gets(string);

	remove_character_except_alphabet(string, size);
	printf("the string would become : \n");
	puts(string);


}
