/*
 * ass2_exa20.c
 *
 *  Created on: Apr 18, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
void print_binary(unsigned int number)
{
	unsigned int i;
	unsigned short mask = 0x8000;

	printf("the binary representation of number %d is : \n ", number);

	for (i = 0; i < 16; i++)
	{
		((number<<i) & mask) ? printf("1"):printf("0");
	}

	printf("\n");

}
void cons_ones_count(unsigned short number)
{
	unsigned int i;
	unsigned short mask = 0x8000;
	int ones_cons_count = 0;
	int max_ones_cons_count = 0;


    for(i=0;i<16;i++)
    {
        if((number<<i) & mask)
        {
        	++ones_cons_count;

        if (max_ones_cons_count <= ones_cons_count)
        {
        	max_ones_cons_count = ones_cons_count;
        }
        }
        else
        {
        	ones_cons_count = 0;
        }

    }

    printf("maximum number of consecutive ones inside the short number is %d\n",max_ones_cons_count);
}

int main()
{

    unsigned short input;
    printf("Please Enter Number : ");  fflush(stdout);
    scanf("%hu",&input);
    printf("\n");
    print_binary(input);
    cons_ones_count(input);

	return 0;
}


