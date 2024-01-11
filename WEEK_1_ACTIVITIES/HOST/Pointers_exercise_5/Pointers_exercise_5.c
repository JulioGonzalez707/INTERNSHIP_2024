/*
 * Pointers_exercise_5.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */


#include <stdio.h>

int sum(int *x, int *y)
{
	int addition;
	addition = *x + *y;
	return addition;

}

int main(void)
{

	int x = 5;
	int y = 6;
	int addition;

	addition = sum(&x, &y);

	printf("The result of the addition is: %d\n", addition);
	return 0;


}


