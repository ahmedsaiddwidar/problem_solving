/*
 * consecutive_numbers.c
 *
 *  Created on: Jul 29, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>

int findMostOccurence(int arr_size, int *array)
{
	int i,j;
	int max1 = array[0];
	int max2 = array[arr_size - 1];
	int cons_count1 = 0,cons_count2 = 0;
	int count1,count2;

	j = arr_size - 1;

	for(i = 0; i < arr_size; i++,j--)
	{
		if(max1 == array[i])
		{
			cons_count1++;
			max1 = array[i];
			count1 = cons_count1;
		}
		else
		{
			cons_count1 = 0;
		}
		if(max2 == array[j])
		{
			cons_count2++;
			max1 = array[j];
			count2 = cons_count2;
		}
		else
		{
			cons_count2 = 0;
		}
	}
	return max2;
}



int main()
{

	int arr[13] = {1,2,2,3,3,3,3,4,4,4,4,3,2};
	int ret_max;

	ret_max = findMostOccurence(13,arr);

	printf("%d", ret_max);
	return 0;
}

