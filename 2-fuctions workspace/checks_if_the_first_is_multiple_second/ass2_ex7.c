/*
 * ass2_ex7.c
 *
 *  Created on: Apr 8, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int mul_check(int x, int y);


int main()
{
	int a, b;
	printf("Enter the two numbers:\n ");    fflush(stdout);
	scanf("%d%d",&a,&b);
	    if (mul_check(a, b) ==1){
	    	printf("the first number multiple the second number");
	    }
	    else{
	    	printf("the first number does not multiple the second number");

	    }




	return 0;
}
int mul_check(int x, int y)
{
	if (x % y == 0 ){
		return 1;
	}
	else
	{
		return 0;
	}
}
