/*
 * exersise17.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program to count number of digits in a
decimal number.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Number, Count=0;

  printf("Enter the integer number\n");   fflush(stdout);
  scanf("%d", &Number);

  while(Number !=0)
  {
     Number = Number / 10;
     Count = Count + 1;
  }

  printf("\n Number of Digits of the number = %d", Count);






    return 0;
}

