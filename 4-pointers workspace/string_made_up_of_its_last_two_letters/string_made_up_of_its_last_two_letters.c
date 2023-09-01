/*
 * string_made_up_of_its_last_two_letters.c
 *
 *  Created on: May 5, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

void string_modify(char *ptr1,char *ptr2,int size)
{

	while(*ptr1 != '\0')
	{
		ptr1++;
	}

	ptr2[0] = *(--ptr1);
	ptr2[1] = ' ';
	ptr2[2] = *(--ptr1);
	ptr2[3] = '\0';

}

int main()
{
	char str1[10] = "bat";
	char str2[10];
	puts(str1);
	string_modify(str1,str2,6);

	puts(str2);


	return 0;
}
