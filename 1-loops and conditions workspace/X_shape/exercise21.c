/*
 * exercise21.c
 *
 *  Created on: May 23, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>



int main()
{
	int i, j, n;
	printf("enter the number of the rows for the pattern\n");   fflush (stdout);
	scanf("%d",&n);

	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n; j++)
		{
			if (i==j || n == i+j-1)
			{
				printf("*");

			}
			else
			{
				printf(" ");
			}

		}

		printf("\n");

	}
return 0;
}




