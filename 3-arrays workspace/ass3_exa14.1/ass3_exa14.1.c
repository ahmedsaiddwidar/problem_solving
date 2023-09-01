/*
 * ass3_exa14.1.c
 *
 *  Created on: May 2, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];

   printf("Enter a string to reverse\n");  fflush(stdout);
   gets(s);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}
