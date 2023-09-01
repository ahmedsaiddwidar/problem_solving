/*
 * print_all_the_array_elements_and_max.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>


int max_element(int arr[], int size )
{
	int *ptr;
	int i = 0, maximumElement = 0;

		ptr = &arr[0];

	while(*ptr !=arr[size])
	{
		printf("array[%d] = %d\n", i, *ptr);
		ptr++;
		i++;
	}
	ptr = &arr[0];
	maximumElement = *ptr;
	while(*ptr !=arr[size])
	{
		if (maximumElement <= *ptr)
		{
			maximumElement = *ptr;
		}
		ptr++;

	}
	return maximumElement;
}

int main()
{
	int array[5] = {3,5,7,2,4};


	printf("the maximum element in the array = %d\n",max_element(array, 5 ) );


	return 0;
}
