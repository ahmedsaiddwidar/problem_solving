/*
 * Create_enum_type_called_fan_level.c
 *
 *  Created on: May 16, 2023
 *      Author: Ahmed Dwidar
 */

#include<stdio.h>

enum fan_level
{
	level1 = 1, level2 = 2, level3 = 3
};

int main()
{
	while(1)
	{
	enum fan_level press;
	printf("enter the level of the fan:\n");  fflush(stdout);
	scanf("%d", &press);
	if (press == level1)
	{
		printf("you are now in the first level\n");
		break;
	}
	else if(press == level2)
	{
		printf("you are now in the second level\n");
		break;
	}
	else if(press == level3)
	{
		printf("you are now in the third level\n");
		break;
	}
	else
	{
		printf("the fan is shut please enter the level you require..\n\n");
	}
	}


	return 0;
}
