/*
 * difference_between_two_time_periods_using_structures.c
 *
 *  Created on: May 15, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
struct time1
{
	int hours1;
	float minutes1;
};
struct time2
{
	int hours2;
	float minutes2;
};
struct result
{
	int hours;
	float minutes;
};

void diff(struct time1 *t1_ptr,struct time2 *t2_ptr,struct result *diff_ptr);

int main()
{
	struct time1 t1;
	struct time2 t2;
	struct result difference;



	diff(&t1,&t2,&difference);

	printf("the difference between the two time periods: \n");
	printf("the sum = %dh %fm",difference.hours,difference.minutes);

	return 0;
}
void diff(struct time1 *t1_ptr,struct time2 *t2_ptr,struct result *diff_ptr)
{
	t1_ptr->hours1 = 15;
	t1_ptr->minutes1 = 36;
	t2_ptr->hours2 = 7;
	t2_ptr->minutes2 = 17.8;

	diff_ptr->hours = t1_ptr->hours1 - t2_ptr->hours2;
	diff_ptr->minutes = t1_ptr->minutes1 - t2_ptr->minutes2;
}


