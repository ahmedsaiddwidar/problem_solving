/*
 * swap_two_numbers_call_them_with_pointers.c
 *
 *  Created on: May 5, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

void swap(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}


int main()
{
	int a = 5,b = 7;
	void (*ptr)(int*, int*) = swap;
	(*ptr)(&a,&b);
	printf("x = %d\t y = %d", a, b);


	return 0;
}
