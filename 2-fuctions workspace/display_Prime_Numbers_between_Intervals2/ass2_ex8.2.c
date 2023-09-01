/*
 * ass2_ex8.2.c
 *
 *  Created on: Apr 27, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>

#define true 1
#define false 0

void prime_numbers(int num1, int num2)
{
	int i, j;
	int isprime = true; // flag to indicate whether the number is a prime or not
	for(i = num1; i <= num2; i++)
	{
		if(i == 0 || i == 1)
		continue;

		for(j = 2; j <= i / 2; j++)
		{
			if(i % j ==0)
			{
				isprime = false;
				break;
			}
		}
		if(isprime == true)
		{
		printf("%d\t", i);
		}
		else
		{
			isprime = true;
		}
	}
}
int main()
{
	int num1, num2;
	printf("enter the two intervals\n");  fflush(stdout);
	scanf("%d %d", &num1, &num2);
	prime_numbers(num1, num2);

	return 0;
}

