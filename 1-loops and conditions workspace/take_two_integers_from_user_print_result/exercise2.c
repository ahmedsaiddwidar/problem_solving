/*
 * exercise1.c
 *
 *  Created on: Mar 31, 2023
 *      Author: Ahmed Dwidar
 *      Write a program that take two integers from the user
and print the results of this equation:
Result = ((num1 + num2) * 3) – 10
 */

#include <stdio.h>
#include <stdlib.h>
// problem1 in assignment1
int main()
{
    // we calculate a formula ((num1 + num2)*3)- 10
    int num1, num2, result;  // we define the variables

    printf("num1 is  ");    fflush(stdout);  // we enter number1
    scanf("%d", &num1);
    printf("num2 is  ");    fflush(stdout);  // we enter number2
    scanf("%d", &num2);
    result = ((num1 + num2)*3)- 10;
    printf("the result is %d\n", result);   // we print the result




    return 0;
}

