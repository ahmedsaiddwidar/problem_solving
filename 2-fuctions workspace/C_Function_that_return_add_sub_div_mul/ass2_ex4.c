/*
 * ass2_ex4.c
 *
 *  Created on: Apr 8, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>


float add(int a , int b , char op);
int main()
{
	int x, y;
	char op;
	printf("enter the two numbers and the operation required \n");   fflush(stdout);
	scanf("%d %d %c", &x, &y, &op);
	printf(" %d %c %d = %.2f \n", x, op, y, add(x , y ,op) );

	return 0;
}
float add(int a , int b , char op){
	float result;
	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = (float) a / (float) b;
		break;
	default:
		printf("invalid operation");


	}
	return result;

}


