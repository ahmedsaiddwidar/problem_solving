/*
 * swap_contents_of_two_arrays.c
 *
 *  Created on: May 5, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#define SIZE 5

void swap(int *ptr1, int *ptr2, int size)
{
	int i, temp;
	for(i = 0; i < size; i++)
	{
		temp = ptr1[i];
		ptr1[i] = ptr2[i];
		ptr2[i] = temp;
	}
}

int main()
{
	int arr1[SIZE] = {1,2,3,4,5};
	int arr2[SIZE] = {6,7,8,9,10};
	int i;
	swap(arr1, arr2, SIZE);
	for(i = 0; i < SIZE; i++)
	{
		printf("arr1[%d] = %d\n",i, arr1[i] );

	}
	for(i = 0; i < SIZE; i++)
	{
		printf("arr2[%d] = %d\n",i, arr2[i] );

	}

	return 0;
}

