/*
 * ass3_exa10.c
 *
 *  Created on: May 1, 2023
 *      Author: Ahmed Dwidar
 */
#include<stdio.h>
#include<string.h>


void string_convert(char str[], int n)
{
	int i;

	for(i =0; i < n; i++)
	{
		if((str[i] >= 'A') && (str[i] <= 'Z'))
		{
		str[i] = str[i] + 32;
		}
	}



}
int main()
{
	char str[10];
	int size = 10;
	printf("enter the string req to be converted : \n");  fflush(stdout);
	gets(str);
	string_convert(str, size);
	printf("the new string will be : %s", str);


	return 0;
}
