/*
 * exercise11.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Print sum of first 100 integers. (With data validation)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int x;
    for(x=0; x<=100; x++){

        sum += x;

    }

    printf("the sum of first one hundred integers is %d  ", sum);




    return 0;
}
