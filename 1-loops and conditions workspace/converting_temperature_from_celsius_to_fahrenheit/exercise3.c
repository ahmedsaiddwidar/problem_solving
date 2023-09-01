/*
 * exercise3.c
 *
 *  Created on: Mar 31, 2023
 *      Author: Ahmed Dwidar
 *      Write a program for converting temperature from
degrees Celsius to degrees Fahrenheit,
given the formula:
F = C x 9/5 + 32
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F, C ;
    printf("enter the Celsius degree   ");    fflush(stdout); // we are including the degree in Celsius
    scanf("%d", &C);

    F= C*9/5 +32; // we conclude the degree in Fahrenheit as function of degree in Celsius

    printf("the Fahrenheit degree is %d\n", F);





    return 0;
}

