/*
 * sum_of_the_array_elements.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE];
	int *ptrarr = arr;
	int i, sum = 0;
	printf("enter the elements of the array: \n");  fflush(stdout);
	for(i = 0; i < SIZE; i++)
	{
		scanf("%d", &ptrarr[i]);
	}
	for(i = 0; i < SIZE; i++)
	{
		printf("ptrarr[%d] = %d\n", i, ptrarr[i]);
	}
	for(i = 0; i < SIZE; i++)
	{
		sum += ptrarr[i];
	}
	printf("the sum of the array elements = %d", sum);


	return 0;
}



