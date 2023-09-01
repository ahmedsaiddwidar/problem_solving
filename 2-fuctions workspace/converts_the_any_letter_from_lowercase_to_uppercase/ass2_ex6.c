/*
 * ass2_ex6.c
 *
 *  Created on: Apr 8, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>

int low_upp(int lower_letter);

int main()
{
	char letter;
	printf("enter the letter\n");   fflush (stdout);
	scanf("%c",&letter);
	if(letter >= 'a' && letter <= 'z')
	{
		printf(" the upper letter is %c \n", low_upp(letter));
	}
	else
	{
		printf("enter a lower letter please, and then re-run program..\n");
	}






	return 0;
}
int low_upp(int lower_letter)
{
	int upper_letter = 0;


		upper_letter = lower_letter - 32;


	return upper_letter;
}
