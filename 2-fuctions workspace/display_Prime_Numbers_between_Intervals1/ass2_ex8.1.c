/*
 * ass2_ex8.1.c
 *
 *  Created on: Apr 10, 2023
 *      Author: Ahmed Dwidar
 */
#include <stdio.h>

void prime_chick(int n1, int n2);

int main()
{
	int a, b;
	  printf("Enter two intervals: \n ");  fflush(stdout);
	  scanf("%d %d", &a, &b);
	  prime_chick(a, b);

	return 0;
}

void prime_chick(int n1, int n2)
{
	int i, j, result;
	for (i = n1 + 1; i <= n2; i++)
	{
		result = 0;

		for (j = 2; j <= i / 2; j++)
		{
			if (i % j ==0)
			{
				result = 1;
				break;
			}

		}
		if (result ==0)
		{
			printf("%d\n", i);
		}
	}

}
