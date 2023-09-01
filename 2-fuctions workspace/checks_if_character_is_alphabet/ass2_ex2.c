/*
 * ex2_q2.c
 *
 *  Created on: Apr 7, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>

char alph_check(char x);

int main()
{
	char letter;
	printf("enter the alphabet");   fflush (stdout);
	scanf("%c",&letter);
	alph_check(letter);

	return 0;
}
char alph_check(char x)
{

	if ((x >= 'a' && x <='z' ) || (x >= 'A' && x <= 'Z'))
	{
		printf("%c is an alphabet", x);
	}
	else
	{
		printf("%c is not an alphabet", x);
	}
	return x ;
}
