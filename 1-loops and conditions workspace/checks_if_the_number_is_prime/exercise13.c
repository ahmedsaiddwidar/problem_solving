/*
 * exercise13.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program that reads a positive integer and
checks if it is a prime.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned int n=1, c=0, i;
    printf("enter the integer number   \n");   fflush(stdout);
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        if(n%i==0){
            c++;
        }

    }
    if(c==2){
        printf("n is a prime number");
    }
        else{
        printf("n is not a prime number");

        }




    return 0;
}
