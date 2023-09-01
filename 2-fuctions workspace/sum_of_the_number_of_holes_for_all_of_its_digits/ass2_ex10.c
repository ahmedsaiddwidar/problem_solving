/*
 * ass2_ex10.c
 *
 *  Created on: Apr 10, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

int hol_num(int n);


int main()
{
	int number;
	printf("enter the number : \n");  fflush(stdout);
	scanf("%d", &number);
	printf(" the sum of holes in the number is = %d\n", hol_num(number));



	return 0;
}
int hol_num(int n)
{
	int rem, result, sum = 0;
	while (n >0){
	rem = n % 10;
	n = n / 10;

	switch (rem)
{
	case 1:
	case 2:
	case 3:
	case 5:
	case 7:
		result = 0;
		break;
	case 0:
	case 4:
	case 6:
	case 9:
		result = 1;
		break;
	case 8:
		result = 2;
		break;

}
	sum = sum + result;

	}


	return sum;


}



