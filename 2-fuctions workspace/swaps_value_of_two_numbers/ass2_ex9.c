/*
 * ass2_ex9.c
 *
 *  Created on: Apr 9, 2023
 *      Author: Ahmed Dwidar
 */

#include <stdio.h>
void swap(int x, int y);

int main() {

	int a = 15;
	int b = 17;
	swap(a, b);







  return 0;
}
void swap(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	printf("the new value of x is %d and the new value of y is %d \n", x, y );

}
