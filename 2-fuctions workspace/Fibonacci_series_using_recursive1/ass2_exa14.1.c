/*
 * ass2_exa14.1.c
 *
 *  Created on: Apr 11, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int fibonacci(int n);

int main()
{
	 int n, i=0, c;

	    scanf("%d",&n);
	    for(c=1; c<=n; c++)
	    {
		    printf(" %d", fibonacci(i));
		    i++;

	    }

	return 0;
}
int fibonacci(int n)
{
	if (n==0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
	return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}
