/*
 * ass3_ex9.c
 *
 *  Created on: Apr 23, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>

void fib_seq(int arr[], int size, int n)
{
	for (int i = 1;i <= size; i++ )
		{
		arr[0] = 0;

			if (i <= 2)
			{
				arr[i] = 1;
			}
			else{
			arr[i] = arr[i - 1] + arr[i - 2];
			}

		}
}

int main()
{
	 int size = 10, arr[size], order_term;
	printf("enter the order of the term : ");  fflush(stdout);
			scanf("%d", &order_term);

			fib_seq(arr, size, order_term );
		printf("the %dth term = %d", order_term, arr[order_term]);

	return 0;
}
