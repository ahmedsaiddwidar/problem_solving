/*
 * pointer_to_string1.c
 *
 *  Created on: May 3, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>


int main()
{
    char arr[5] = {'1','2','3','4','5'};
    int i;
    for(i = 0; i < 5; i++)
    {
    	printf("%c \n %c \n ", *arr,*(arr+1));
    }


	return 0;
}

