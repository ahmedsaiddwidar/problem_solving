/*
 * ass3_ex8.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

/*int power(int base, int exp)
{
	int result;
	for (;exp < 0; exp--)
	{
		result *= 3;
	}
	return result;
}
*/

void seq_series(int arr[], int size, int n)
{
	int i, result = 1;

	for(i = 1; i <= 10; i++)
	{
		if(i == 1)
		{
			arr[i] = 1;
			continue;
		}
		result = result *3;
		arr[i] = result;


	}

}


int main()
{
	int  size = 10, arr[size], order_index;

		printf("enter the order of the term : ");  fflush(stdout);
		scanf("%d", &order_index);

		seq_series(arr, size, order_index);
	printf("the %dth term = %d", order_index, arr[order_index]);


	return 0;
}

