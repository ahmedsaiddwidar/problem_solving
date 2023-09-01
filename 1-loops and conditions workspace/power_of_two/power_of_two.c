/*
 * power_of_two.c
 *
 *  Created on: Jul 22, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
#include<math.h>

void power_check(int number);

int main()
{
	int num;
	scanf("%d", &num);
	power_check(num);

	return 0;
}
void power_check(int number)
{
	float x = 0;
	x = sqrt(number);
	if((int)(x*x) ==number )
	{
		printf("ok");
	}
	else
	{
		printf("not ok");
	}

}
