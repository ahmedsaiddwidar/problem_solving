/*
 * ass3_exa19.c
 *
 *  Created on: May 2, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#define ARR1_SIZE 5
#define ARR2_SIZE 5

int arrays_comparison(int arr1[], int arr2[], int arr1_size, int arr2_size)
{
	int i;
	for(i = 0; i < arr1_size; i++)
	{
		if (arr1[i] != arr2[i])
		{
			return 0;
		}
	}
	return 1;

}
int main()
{
	int array1[ARR1_SIZE] = {1,2,3,4,5};
	int array2[ARR2_SIZE] = {1,2,3,4,5};

	if(arrays_comparison(array1, array2, ARR1_SIZE, ARR2_SIZE) == 1)
	{
		printf("the two arrays are identical\n");
	}
	else
	{
		printf("the two arrays are not identical\n");

	}


	return 0;
}
