/*
 * ass3_exa11.c
 *
 *  Created on: May 1, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#include<string.h>


char char_freq(char str[], int n, char character)
{
	int i;
	int c = 0;


	for(i =0; str[i] != '\0'; i++)
	{
		if(str[i] == character)
		{
		c++;
		}
	}
	return c;
}
int main()
{
	char str[10];
	int size = 10;
	char letter;
	printf("enter the string req to be converted : \n");  fflush(stdout);
	gets(str);
	printf("enter the required letter : \n");  fflush(stdout);
	scanf("%c",&letter);


	printf("the frequency of the letter = %d", char_freq(str, size, letter));


	return 0;
}
