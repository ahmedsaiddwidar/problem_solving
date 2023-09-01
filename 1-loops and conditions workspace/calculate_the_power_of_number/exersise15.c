/*
 * exersise15.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program to calculate the power of a number.
The number and its power are input from user.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{


    int x, n, result = 1;

    printf("enter the integer   ");   fflush(stdout);
    scanf("%d", &x);
    printf("enter the power   ");   fflush(stdout);
    scanf("%d", &n);

    while (n > 0){

        result*=x;
        n--;

    }






printf("the result is %d", result);



    return 0;
}
