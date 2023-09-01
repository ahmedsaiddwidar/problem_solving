/*
 * ass2_ex11.c
 *
 *  Created on: Apr 10, 2023
 *      Author: Ahmed Dwidar
 */


#include <stdio.h>

int pow_check(int x);

int main()
{
	int number;
	printf("enter the number\n");  fflush(stdout);
	scanf("%d", &number);
	if (pow_check(number) ==1)
	{
		printf("%d is power of 2 \n", number);
	}
	else
	{
		printf("%d is not power of 2 \n", number);

	}



	return 0;
}
int pow_check(int x)
{
	if (x==0)
	{
		return 0;
	}
	while (x != 1)
	{
		if (x % 2 != 0 )
		{
			return 0;
		}


		x = x / 2;
	}
	return 1;

}
