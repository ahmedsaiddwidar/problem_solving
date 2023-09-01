/*
 * value_of_the_smallest_element_in.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>


int smallest_element(int arr[], int size )
{
	int i, *ptr = arr;

	for (i = 0; i < size; i++)
	{
		if (arr[0] > arr[i])
		{
			*ptr = arr[i];
		}
	}
	return *ptr;
}

int main()
{
	int array[5] = {3,5,7,2,4};

	printf("the smallest element in the array = %d\n",smallest_element(array, 5 ) );


	return 0;
}



