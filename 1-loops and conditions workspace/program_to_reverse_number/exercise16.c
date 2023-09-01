/*
 * exercise16.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program to reverse a number.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0, reverse=0, remainder=0;

    printf("enter the value of the number  ");   fflush(stdout);
    scanf("%d", &number);

    while(number!=0){

        remainder = number%10;
        reverse = reverse*10;
        reverse = reverse + remainder;
        number = number/10;

    }

    printf("the reverse is  %d", reverse);



    return 0;
}
