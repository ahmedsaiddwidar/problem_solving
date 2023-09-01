/*
 * exercise10.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Ahmed Dwidar
 *      Write a program to make a simple calculator using
switch-case. The calculator takes the operation
(+ or – or * or /) and takes the two input arguments and
print the results.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
	    float result;
	    char ch;    //to store operator choice

	    printf("Enter first number: ");    fflush(stdout);
	    scanf("%d",&num1);
	    printf("Enter second number: ");   fflush(stdout);
	    scanf("%d",&num2);

	    printf("Choose operation to perform (+,-,*,%,/): ");   fflush(stdout);
	    scanf(" %c",&ch);

	    result=0;
	    switch(ch)
	    {
	        case '+':
	            result=num1+num2;
	            break;

	        case '-':
	            result=num1-num2;
	            break;

	        case '*':
	            result=num1*num2;
	            break;

	        case '/':
	            result=(float)num1/(float)num2; // i used exiplicit casting
	            break;

	        case '%':
	            result=num1%num2;
	            break;
	        default:
	            printf("Invalid operation.\n");
	    }

	    printf("Result: %d %c %d = %f\n",num1,ch,num2,result);






    return 0;
}
