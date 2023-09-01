/*
 * ass3_ex6.c
 *
 *  Created on: Apr 21, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int element_check(int arr[], int size, int n)
{
	int i;
	for (i = (size - 1); i >= 0; i--)
	{
		if (arr[i] == n)
		{
			return i;
		}

	}
	return -1;


}

int main()
{

	int i, size = 5, arr[size], number, location;

	for (i = 0; i < size; i++)

	{
		scanf("%d", &arr[i]);
	}
	printf("Enter number for search: ");  fflush(stdout);
		scanf("%d",&number);
		location = element_check(arr, size, number);

	if (location == -1)
	{
		printf("the location not found");
	}
	else
	{
		printf("the location of the number is %d ", element_check(arr, size, number));
	}




	return 0;
}
