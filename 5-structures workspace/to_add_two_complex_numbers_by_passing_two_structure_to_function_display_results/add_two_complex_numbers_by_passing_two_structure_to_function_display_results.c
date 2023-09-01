/*
 * add_two_complex_numbers_by_passing_two_structure_to_function_display_results.c
 *
 *  Created on: May 15, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
struct number1
{
	float real1;
	float imag1;
};
struct number2
{
	float real2;
	float imag2;
};
struct result
{
	float real;
	float imag;
};

void add(struct number1 *n1_ptr,struct number2 *n2_ptr,struct result *sum_ptr);

int main()
{
	struct number1 n1;
	struct number2 n2;
	struct result sum;



	add(&n1,&n2,&sum);

	printf("the sum of the two complex numbers: \n");
	printf("the sum = %f %fi",sum.real,sum.imag);

	return 0;
}
void add(struct number1 *n1_ptr,struct number2 *n2_ptr,struct result *sum_ptr)
{
	n1_ptr->real1 = 15.3;
	n1_ptr->imag1 = -3.5;
	n2_ptr->real2 = 7.1;
	n2_ptr->imag2 = 17.8;

	sum_ptr->real = n1_ptr->real1 + n2_ptr->real2;
	sum_ptr->imag = n1_ptr->imag1 + n2_ptr->imag2;
}
