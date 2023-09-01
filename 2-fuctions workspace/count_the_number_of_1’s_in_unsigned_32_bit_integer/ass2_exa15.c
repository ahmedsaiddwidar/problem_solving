/*
 * ass2_exa15.c
 *
 *  Created on: Apr 12, 2023
 *      Author: Ahmed Dwidar
 */


#include<stdio.h>

void print_binary(unsigned int number)
{
	unsigned int i;
	unsigned int mask = 0x80000000;

	printf("the binary representation of number %d is : \n ", number);

	for (i = 0; i < 32; i++)
	{
		((number<<i) & mask) ? printf("1"):printf("0");	}

	printf("\n");

}
void zerosones_count(unsigned int number)
{
	unsigned int i;
	unsigned int mask = 0x80000000;
	int ones_count = 0, zeros_count = 0;

    for(i=0;i<32;i++)
    {
        ((number<<i) & mask) ? ++ones_count:++zeros_count;
    }

    printf("Number of ones inside the integer number %d is %d\n",number,ones_count);
    printf("Number of zeros inside the integer number %d is %d\n",number,zeros_count);



}

int main()
{

    unsigned int input;
    printf("Please Enter Number : ");  fflush(stdout);
    scanf("%d",&input);
    printf("\n");
    print_binary(input);
    zerosones_count(input);




	return 0;
}
