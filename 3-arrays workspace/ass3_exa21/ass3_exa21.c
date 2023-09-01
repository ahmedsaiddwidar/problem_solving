/*
 * ass3_exa21.c
 *
 *  Created on: May 2, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int resultant_array[256];

int DESCENDING_ORDER_inclusive(int upper_value, int lower_value, int *resultant_array_size)
{
	int i;
	*resultant_array_size = 0;
	if ((lower_value >= upper_value) || (upper_value - 1 == lower_value))
	{
		resultant_array[0] = 0xFF;
		resultant_array[1] = 0xFF;
		*resultant_array_size = 2;
	}
	else
	{
		for(i = upper_value ; i >= lower_value; i--)
		{
			resultant_array[*resultant_array_size] = i;
			(*resultant_array_size)++;
		}
	}
	return resultant_array;
}

int main()
{
	int num1 = 20, num2 = 10;
	int counter;
	int *ptr;
	int arr_size_used = 0;

	ptr = DESCENDING_ORDER_inclusive(num1,num2,&arr_size_used);
	printf("the resultant_array = \n");
	for(counter = 0; counter <= arr_size_used; counter++)
	{
		printf("%d ",ptr[counter]);
	}
	printf("\nthe resultant_array Size = %d",arr_size_used);





	return 0;
}


