/*
 * ass3_ex3.c
 *
 *  Created on: Apr 20, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>

void bubble_assending(int arr[], int size)
{
	int i, j, temp;
	for (i = 0; i < (size - 1); i++)
	{
		for (j= 0; j < (size - 1); j++)
		{
			if ( arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
	for ( i = 0; i < size; i++)
	{
	printf("arr[%d] = %d\n", i, arr[i]);
	}

}

int main()
{
	int i,n = 5, arr[n];


	for(i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf(" the sorting of the array would become :\n");
	bubble_assending(arr, n);



	return 0;
}
