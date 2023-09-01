/*
 * read_integers_from_array_and_reverse_them.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>


int main()
{
	int arr[10];
	int *ptrarr = arr;
	int i = 0, j = 9 - 1;
	int temp;

	for(i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
	}


	for(i = 0; i < 9; i++)
	{
	while(i < j)
	{
		temp = ptrarr[i];
		ptrarr[i] = ptrarr[j];
		ptrarr[j] = temp;
		i++;
		j--;

	}
	}
	printf("the array elements after reverse: \n");
	for(i = 0; i < 9; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}
