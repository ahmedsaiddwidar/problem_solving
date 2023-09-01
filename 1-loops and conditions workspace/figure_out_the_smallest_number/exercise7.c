/*
 * exercise7.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program that takes three integers, and prints
out the smallest number.
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{

        int num1,num2,num3;

           scanf("%d", &num1);


           scanf("%d", &num2);


           scanf("%d", &num3);

           if(num1>num2, num2>num3){
        	   printf("%d is the smallest\n", num3);

           }
           else{

        	   if(num2>num1, num3>num1 ){
        	           	   printf("%d is the smallest\n", num1);
        	   }
            else{
        	   if(num1>num2, num3>num2 ){
        		           printf("%d is the smallest\n", num2);
        	   }

        	   }

           }

return 0;
}
