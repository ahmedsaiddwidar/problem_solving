/*
 * ass3_ex9.1.c
 *
 *  Created on: Apr 23, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>

long fib_seq(long n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	return fib_seq(n-1) + fib_seq(n-2);
}
int main()
{
	 int order_term;
	printf("enter the order of the term : ");  fflush(stdout);
	scanf("%d", &order_term);

		printf("the %dth term = %d",order_term, fib_seq(order_term));

	return 0;
}
