/*
 * ass2_exa13.c
 *
 *  Created on: Apr 11, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int floor(float x, float y)
{

	return (int)(x + y);

}

int main()
{
	float a,b;
	printf(" enter the floors float values:\n");  fflush(stdout);
	scanf("%f %f", &a, &b);
	printf("the integer floor of the sum will be: %d", floor(a, b));




	return 0;
}

