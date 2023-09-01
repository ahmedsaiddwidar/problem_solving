/*
 * ass3_ex1.c
 *
 *  Created on: Apr 18, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>


int elements_sum (int arr[], int n);

int main(void)
{
	int n = 5;
	int arr[n], i;

	printf("enter the array elements  :\n");  fflush(stdout);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("the sum of the array elements = %d",elements_sum (arr, n) );

	return 0;
}
int elements_sum (int arr[], int n)
{
	int i, sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum = sum + arr[i];

	}
	return sum;
}

