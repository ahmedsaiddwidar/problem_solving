/*
 * ass3_exa17.c
 *
 *  Created on: May 2, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int * Swap (int a_size,int *a,int b_size,int *b)
{
	int temp;
	for(int i = 0; i < b_size; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	return a;

}

int main()
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {6,7,8,9,10};
	int i;

	printf("the elements of the first array are :\n");
	for(i = 0; i < 5; i++)
	{
		printf("arr1[%d] = %d\n", i, arr1[i]);
	}

	printf("the elements of the second array are :\n");
		for(i = 0; i < 5; i++)
		{
			printf("arr2[%d] = %d\n", i, arr2[i]);
		}

		Swap (5,arr1,5,arr2);
		printf("the elements of the first array after swap :\n");
		for(i = 0; i < 5; i++)
		{
			printf("arr1[%d] = %d\n", i, arr1[i]);
		}

		printf("the elements of the second array after swap :\n");

		for(i = 0; i < 5; i++)
		{
		printf("arr2[%d] = %d\n", i, arr2[i]);
		}





	return 0;
}
