/*
 * ass2_exa19.c
 *
 *  Created on: Apr 18, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

unsigned int power_check(unsigned int n);

int main()
{
	 unsigned int number;
	printf("enter the number : \n");  fflush(stdout);
	scanf("%u", &number);
	if ( power_check(number) ==1)
	{
		printf(" the number you entered is power of three\n ");

	}
	else
	{
		printf(" the number you entered is not power of three\n ");
	}

	return 0;
}
unsigned int power_check(unsigned int n)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		n = n / 3;
		if ( n % 3 !=0)
		return 0;
		break;
	}
	return 1;
}

