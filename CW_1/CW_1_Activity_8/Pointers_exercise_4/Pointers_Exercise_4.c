/*
 * Pointers_Exercise_4.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */


#include <stdio.h>

int main(void)

{
	int x = 5;
	int y = 6;

	int *p_x = &x;
	int *p_y = &y;

	int sum;

	sum = *p_x + *p_y;

	printf("The sum of the entered numbers is:%d\n", sum);


}

