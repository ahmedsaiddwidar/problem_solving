/*
 * exercise8.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program that reads a positive integer and
checks if it is a perfect square.
 */


#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int number,root;

    scanf("%d",&number);

    root =sqrt(number);;

    if(number == (root*root))
    {
    	printf("number is perfect square\n");
    }
    else
    {
    	printf("number is not perfect square\n");
    }


   return 0;
    }
