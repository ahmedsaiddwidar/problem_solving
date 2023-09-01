/*
 * ass3_ex7.c
 *
 *  Created on: Apr 21, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>

void seq_series(int arr[], int size, int n )
{
	int i;
	for (i = 1;i <= 100; i++ )
	{
		arr[i] = 2*n - 1;
	}

}


int main()
{
	unsigned int size = 100, arr[size], order_term;

		printf("enter the order of the term : ");  fflush(stdout);
		scanf("%d", &order_term);

	seq_series(arr, size, order_term );
	printf("the %dth term = %d", order_term, arr[order_term]);






	return 0;
}
