/*
 * exercise6.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program that print the relation between two
integer number if those numbers are equal, not equal and
which one contain the higher value.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a= 10;
    b=8;
    if (a < b){
        printf("a is lower than b\n");
    }
    else {
        if (a > b){
            printf("a is higher than b\n");
        }
        else {
            if (a == b){
                printf("a is equal to b\n");
            }
        }
    }




    return 0;
}

