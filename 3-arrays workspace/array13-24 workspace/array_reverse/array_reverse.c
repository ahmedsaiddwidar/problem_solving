/*
 * array_reverse.c
 *
 *  Created on: May 7, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#define SIZE 5

void array_reverse(int *arr, int size)
{
	int i, temp;
	for(i = 0; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;


	}



}

int main()
{
	int array[SIZE] = {1,2,3,4,5};
	int i;
	array_reverse(array, SIZE);
	printf("array after being reversed\n");
	for(i = 0; i < SIZE; i++)
	{
	printf("array[%d] = %d\n", i, array[i]);
	}

	return 0;
}
