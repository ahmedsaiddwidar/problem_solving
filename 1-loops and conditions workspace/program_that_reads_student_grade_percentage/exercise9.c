/*
 * exercise9.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program that reads a student grade percentage
and prints "Excellent" if his grade is greater than or equal
85, "Very Good" for 75 or greater; "Good" for 65, "Pass"
for 50, "Fail" for less than 50.
 */


#include <stdio.h>


int main()
{


	unsigned int grade;
        printf("enter your grade  ");  fflush(stdout);
	    scanf("%d", &grade);
	    if (grade>=85)
	    {
	        printf("Excellent\n");  fflush(stdout);
	    }
	    else if (grade>=75 && grade<85)
	    {
	        printf("Very Good\n");   fflush(stdout);
	    }
	    else if (grade>=65 && grade<75)
	    {
	        printf("Good\n");   fflush(stdout);
	    }
	    else if (grade==50 && grade<65){
	        printf("pass\n");  fflush(stdout);
	    }
	    else if (grade < 50)
	    {
	        printf("fail");  fflush(stdout);
	    }



    return 0;
}
