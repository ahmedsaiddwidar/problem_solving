/*
 * exercise18.c
 *
 *  Created on: May 23, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>



int main()
{
int row,col;
for(row = 1; row <= 5; row++ )
{
	for(col = 1; col <= row; col++)
	{

		printf("*");

	}

	  printf("\n");
}
return 0;
}


