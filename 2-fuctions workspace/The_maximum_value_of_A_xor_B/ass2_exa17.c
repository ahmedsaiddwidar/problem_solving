/*
 * ass2_exa17.c
 *
 *  Created on: Apr 17, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>

int max_xor_value(int L, int R)
{

	int result;
	int A, B;
	int maximum_value = 0;

	for (A = L; A <= R; A++)
	{
		for (B = A; B <= R; B++)
		{
			result = A ^ B;
			if ( result > maximum_value)
			{
				maximum_value = result;
			}
		}

	}
	return maximum_value;
}
int main()
{
	int L, R;
	printf("enter the values of L and R\n");  fflush(stdout);
	scanf("%d", &L);
	scanf("%d", &R);
	printf("L = %d\t R = %d", L, R);  fflush(stdout);
	printf(" the max value of xor between A and B = %d", max_xor_value(L, R));






	return 0;
}
