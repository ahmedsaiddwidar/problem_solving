/*
 * ass2_exa18.c
 *
 *  Created on: Apr 18, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#include<math.h>

int power_check(int z);;

int main()
{
	int number;

	printf("enter the number\n");  fflush(stdout);
	scanf("%d", &number);

	if (power_check(number) == 1)
	{
		printf(" %d can be expressed as P power Q", number);
	}
	else
	{
		printf(" %d can not be expressed as P power Q", number);
	}
	return 0;
}

int power_check(int z)
{

	int result;
		result = (int)sqrt(z);
		if(z == (result * result))
		{
			return 1;
		}
		else
		{
			return 0;
		}
}

