/*
 * ass3_exa18.c
 *
 *  Created on: May 2, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#define ARR_SIZE 15

int longest_consecutive_occurrence(int arr[], int size, int number)
{
	int i, count = 0, longest_count = 0;
	for (i = 0; i < size; i++)
	{
		if(arr[i] == number)
		{
			count++;

			if (count >= longest_count)
			{
				longest_count = count;
			}
		}
		else {
			count = 0;
		}
	}
	return longest_count;
}

int main()
{
	int array[ARR_SIZE] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
	int result;
	result = longest_consecutive_occurrence(array, ARR_SIZE, 2);
	printf("The maximum occurance of Number 3 is : %d",result);

	return 0;
}
