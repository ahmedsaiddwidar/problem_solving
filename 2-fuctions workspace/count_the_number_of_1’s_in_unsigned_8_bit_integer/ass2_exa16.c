/*
 * ass2_exa16.c
 *
 *  Created on: Apr 12, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

void print_binary(unsigned char number)
{
	unsigned char i;
	unsigned char mask = 0x80;

	printf("the binary representation of number %c is : \n ", number);

	for (i = 0; i < 8; i++)
	{
		((number<<i) & mask) ? printf("1"):printf("0");
	}

	printf("\n");

}
void zerosones_count(unsigned char number)
{
	unsigned char i;
	unsigned char mask = 0x80;
	int ones_count = 0, zeros_count = 0;

    for(i=0;i<8;i++)
    {
        ((number<<i) & mask) ? ++ones_count:++zeros_count;
    }

    printf("Number of ones inside the integer number %c is %d\n",number,ones_count);
    printf("Number of zeros inside the integer number %c is %d\n",number,zeros_count);

}

int main()
{

    unsigned char input;
    printf("Please Enter Number : ");  fflush(stdout);
    scanf(" %d",&input);
    printf("\n");
    print_binary(input);
    zerosones_count(input);

	return 0;
}

