/*
 * ass2_ex3.c
 *
 *  Created on: Apr 7, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>

int num_cond(int x);

int main()
{

	int a;
	printf("enter the number  ");   fflush (stdout);
	scanf("%d",&a);
	num_cond(a);

	return 0;
}

int num_cond(int x)
{

	if (x > 0 )
	{
		printf(" %d is positive\n", x);
	}
	else if (x < 0)
	{
		printf(" %d is negative\n", x);

	}
	else
	{
		printf(" %d is zero\n", x);

	}
	return x;
}
/*
 * #include<stdio.h>

int num_cond(int x);

int main()
{


	int number;
	printf("enter the number  ");   fflush (stdout);
	scanf("%d",&number);
	if (number == 1)
	{
		printf("%d is positive \n", num_cond(number));
	}
	else if (number == 0)
	{
		printf("%d is negative \n", num_cond(number));
	}
	else {
		printf("number is zero");
	}


	return 0;
}

int num_cond(int x)
{
	int number;
	if (x > 0 )
	{
		number = 1;
	}
	else if (x < 0)
	{
		number = 0;

	}

	return number;
}
 *
 *
 * */
