/*
 * pointer_to_string.c
 *
 *  Created on: May 1, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>
#define size 10

int main()
{
	int arr1[size] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[size];
	int n = 3;
	int k;
	int i;
	printf("the elements of the array:\n");
	for (i = 0;i < size; i++)
	{
		printf("arr1[%d] = %d\n", i,arr1[i]);
	}

	for(i = size - n; i < size; i++)
	{
		arr2[i] = arr1[size - n];
		n--;
	}

	for(i = )


	return 0;
}
