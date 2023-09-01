/*
 * exercise5.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program to print the ASCII value of a character
input by the user.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char b;
    printf("enter the character\n ");   fflush(stdout);
    scanf("%c", &b);
    printf("the ASCII value of%c is %d  ", b,b);





    return 0;
}

