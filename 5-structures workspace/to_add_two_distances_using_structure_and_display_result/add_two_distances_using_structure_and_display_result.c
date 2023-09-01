/*
 * add_two_distances_using_structure_and_display_result.c
 *
 *  Created on: May 15, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>

struct ditances
{
	int feet;
	float inch;
}d1,d2,result;

int main()
{
	printf("enter the first distance:\n\n");
	printf("how much feet?\n");  fflush(stdout);
	scanf("%d", &d1.feet);

	printf("how much inch?\n");  fflush(stdout);
	scanf("%f", &d1.inch);

	printf("enter the second distance:\n\n");
	printf("how much feet?\n"); fflush(stdout);
	scanf("%d", &d2.feet);

	printf("how much inch?\n");  fflush(stdout);
	scanf("%f", &d2.inch);

	result.feet = d1.feet + d2.feet;
	result.inch = d1.inch + d2.inch;
	printf("the sum of the two distances = %dfeet - %finch",result.feet,result.inch);
	return 0;
}

