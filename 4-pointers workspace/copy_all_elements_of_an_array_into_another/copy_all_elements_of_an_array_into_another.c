/*
 * copy_all_elements_of_an_array_into_another.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Dwidar
 */
/*
 * void int copy(int *ptr1, int *ptr2, int size)
 * {
 * int i;
 *    for(i = 0; i < size; i++)
 * {
 *    *ptr1 = *ptr2;
 *    ptr1++;
 *    ptr2++;
 * }
 * }
 */

#include<stdio.h>
#define SIZE 5

void copy_array(int *ptrarr1,int *ptrarr2, int size)
{
	int i;
	for( i = 0; i < SIZE; i++)
	{
	ptrarr2[i] = ptrarr1[i];
	}
}

int main()
{
	int array1[SIZE];
	int array2[SIZE];
	for(int i = 0; i < SIZE; i++)
	{
		array1[i] = i + 1;
		printf("arr1[%d] = %d\n", i, array1[i]);

	}
	copy_array(array1,array2, SIZE);
	for(int i = 0; i < SIZE; i++)
	{

		printf("arr2[%d] = %d\n", i, array2[i]);
	}



	return 0;
}
