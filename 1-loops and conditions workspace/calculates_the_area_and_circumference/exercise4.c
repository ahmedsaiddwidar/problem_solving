/*
 * exercise4.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program that reads the radius of a circle and
calculates the area and circumference then prints the
results.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float area , circumference;
    float pi= 3.14;
    printf("enter the radius   ");   fflush(stdout);
    scanf("%d", &r);
    area= pi*r*r;
    circumference= 2*pi*r;
    printf("area equal to  %f\n  ", area);
    printf("circumference equal to  %f\n  ", circumference);



    return 0;
}
