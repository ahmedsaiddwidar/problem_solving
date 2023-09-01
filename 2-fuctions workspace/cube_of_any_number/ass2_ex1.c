/*
 * ex2_q1.c
 *
 *  Created on: Apr 7, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int cube(int x);

int main()
{
	int a;
	printf("enter the number");   fflush (stdout);
	scanf("%d",&a);
	printf(" the result = %d\n", cube(a));


	return 0;
}
int cube(int x)
{
	int result;

	result = x*x*x;

	return result;
}
