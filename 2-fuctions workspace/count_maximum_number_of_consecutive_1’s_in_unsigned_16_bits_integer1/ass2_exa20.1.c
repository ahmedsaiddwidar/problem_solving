/*
 * ass2_exa20.1.c
 *
 *  Created on: Apr 27, 2023
 *      Author: Ahmed Dwidar
 */

#include <stdio.h>

int CountConsecutiveOnes(unsigned short Number)
{
	unsigned short mask=0x8000;
	unsigned int i;
	int cons_ones_count=0;
	int max_ones_count=0;
	/*
     * start looping from index n-1 to 0 and check every bit
     * if it is equals to one increment cons_ones_count and compare it with
	 * the maximum number of consecutive ones (max_ones_count)
     * if it is equals to zero clear the cons_ones_count variable.
     */
	for(i=0;i<16;i++)
	{
		if((Number<<i) & mask)
		{
			++cons_ones_count;
			if(max_ones_count <= cons_ones_count)
			{
				max_ones_count = cons_ones_count;
			}
		}
		else
		{
			cons_ones_count = 0;
		}
	}
	return max_ones_count;
}

int main(void)
{
	unsigned short num1 = 121;
	int count;
	count = CountConsecutiveOnes(num1);
	printf("%d",count);
}

