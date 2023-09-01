/*
 * ass_exa16.c
 *
 *  Created on: May 2, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

void reverse_array(int arr[], int n)
{
	int i = 0;
	int j = n - 1;
	int temp;
	while(i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}



}


int main()
{
	int array[5];
	int size = 5;
	int i;
	for(i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	for(i = 0; i < size; i++)
	{
		printf("array[%d] = %d\n", i, array[i]);
	}

	reverse_array(array, size);
	printf("the new array will be : \n");

	for(i = size - 1; i >= 0; i--)
	{
	printf("array[%d] = %d\n", i, array[i]);
	}



	return 0;
}
