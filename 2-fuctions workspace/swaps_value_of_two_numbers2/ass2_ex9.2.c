/*
 * ass2_ex9.2.c
 *
 *  Created on: Apr 27, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

}



int main()
{
	int a = 3, b = 2;
		printf ("Number before swapping : a=%d b=%d\n",a,b);
		swap(&a,&b);
		printf ("Number after swapping : a=%d b=%d\n",a,b);
		return 0;



	return 0;


}
