/*
 * ass2_exa12.c
 *
 *  Created on: Apr 11, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int temp_water(int temp);

int main()
{
	int WaterTemp;
	printf("enter the water temp: \n");  fflush(stdout);
	scanf("%d", &WaterTemp);
	printf(" the heating time will be: %d", temp_water(WaterTemp));




	return 0;
}
int temp_water(int temp)
{
	int h;
	if ((temp >= 0) && (temp <=30))
	{
		h = 7;
	}
	else if ((temp > 30) && (temp <=60))
	{
		h = 5;
	}
	else if ((temp > 60) && (temp <=90))
	{
		h = 3;
	}
	else if ((temp > 90) && (temp <=100))
	{
		h = 1;
	}
	else if (temp > 100)
	{
		return 0;
	}
	return h;
}
