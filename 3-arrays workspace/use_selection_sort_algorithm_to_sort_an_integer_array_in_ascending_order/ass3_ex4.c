/*
 * ass3_ex4.c
 *
 *  Created on: Apr 21, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>


void selection_assending(int arr[], int size)
{
	int i, j, temp;
	for (i = 0; i < size; i++)
	{
		int min_location = i;
		for (j = i + 1; j < size; j++)
		{
			if ( arr[j] < arr[min_location])
			{
				min_location = j;
			}


				temp = arr[i];
				arr[i]= arr[min_location];
				arr[min_location] = temp;

		}
	}
	for (i = 0; i < size; i++)
	{
		printf(" arr[%d] = %d\n", i, arr[i]);
	}
}

int main()
{
	int i, n = 5, arr[n];

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf(" the sorting of the array would become :\n");
		selection_assending(arr, n);




	return 0;
}
