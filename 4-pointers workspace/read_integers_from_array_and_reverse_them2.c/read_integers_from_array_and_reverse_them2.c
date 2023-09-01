/*
 * read_integers_from_array_and_reverse_them2.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>
#define ARRSIZE 10

int main()
{
	int arr[ARRSIZE];
	int i;
	int *ptrarr;
	ptrarr = &arr[ARRSIZE - 1];

	printf("enter the elements of the array:\n");   fflush(stdout);
	for( i = 0; i < ARRSIZE; i++)
	{
		scanf("%d", &arr[i]);
	}
	for( i = 0; i < ARRSIZE; i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}

	for( i = 0; i < ARRSIZE / 2 ; i++)
	{
		arr[i] = *ptrarr;
		--ptrarr;
	}
	printf("the array elements after reverse: \n");
	for(i = 0; i < 10; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}
