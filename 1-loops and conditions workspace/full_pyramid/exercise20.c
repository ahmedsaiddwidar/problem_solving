/*
 * exercise20.c
 *
 *  Created on: May 23, 2023
 *      Author: Ahmed Dwidar
 */
#include <stdio.h>

int main(void)
{
	int row_num, col_num, num_of_rows;
	printf("enter the number of rows\n");  fflush(stdout);
	scanf("%d",&num_of_rows);


	for(row_num =1;row_num <= num_of_rows;row_num++ )
	{
		for(col_num =1; col_num <= 2*num_of_rows - 1; col_num++ )
		{
			if (col_num >= num_of_rows - (row_num - 1) && col_num <= num_of_rows + (row_num - 1))
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


