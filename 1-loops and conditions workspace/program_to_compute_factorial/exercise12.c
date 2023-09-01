/*
 * exercise12.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program that reads a positive integer and
computes the factorial.
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{

  int fac=1;
  int n;

  printf("enter the number  ");  fflush(stdout);
  scanf("%d", &n);

  while (n>0)
  {
    fac=fac*n;
    n--;
  }
  printf("the fac of %d is %d\n", n,fac);


    return 0;
}
