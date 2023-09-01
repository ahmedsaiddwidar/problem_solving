/*
 * ass3_exa14.c
 *
 *  Created on: May 2, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#include<string.h>

void reverse_string(char str[], int n)
{
	int i = 0;
	int j = strlen(str) - 1;
	int temp;

	while( i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}

}

int main()
{
	char string[10];
	printf("enter the string : \n");  fflush(stdout);
	gets(string);
	int size = 10;
	reverse_string(string, size);
	puts(string);

	return 0;
}
