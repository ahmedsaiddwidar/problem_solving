/*
 * ass2_exa14.c
 *
 *  Created on: Apr 11, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>

unsigned int fib(unsigned int n);

int main()
{
	int x;
	printf("enter the number");  fflush(stdout);
	scanf("%d", &x);
	    printf("%d", fib(x));

	    return 0;



	return 0;
}
unsigned int fib(unsigned int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
