/*
 * ass2_ex5.c
 *
 *  Created on: Apr 8, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

char even_odd(int x);

int main()
{
	int number,state;
    printf("Enter the number: ");    fflush(stdout);
    scanf("%d",&number);
    state = even_odd(number);

    if(state == 1)
    {
    	printf("number is odd...\n");
    }
    else
    {
    	printf("number is even...\n");
    }



	return 0;
}
char even_odd(int x)
{
	if (x % 2 == 0)
	{

	    return 0;
	}
	else
	{
		return 1;
	}
}
/*
 * #include<stdio.h>

int even_odd(int x);

int main()
{
	int number;
    printf("Enter the number:\n ");    fflush(stdout);
    scanf("%d",&number);
    if (even_odd(number)== 1){
    	printf(" number is even");
    }
    else if (even_odd(number) == 0){
    	printf(" number is odd");
    }
 *
 * */
