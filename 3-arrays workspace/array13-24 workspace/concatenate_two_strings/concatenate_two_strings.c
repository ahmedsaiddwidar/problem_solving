 /*
 * concatenate_two_strings.c
 *
 *  Created on: May 7, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>
#include<string.h>
#define SIZE 20
void concat(char *str1,int str1_size,char *str2,int str2_size)
{
	int i;
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	int temp;
	temp = str1[length1];
	str1[length1] = str1[length1 + length2 - 1];
	str1[length1 + length2 - 1] = temp;
	for(i = length1; i < length1 + length2 ; i++)
	{
		str1[i] = *str2;
		str2++;
	}


}
int main()
{
	char string1[SIZE] = "ahmed";
	char string2[20] = "dwidar";
	concat(string1,SIZE,string2,10);
	puts(string1);


	return 0;
}
