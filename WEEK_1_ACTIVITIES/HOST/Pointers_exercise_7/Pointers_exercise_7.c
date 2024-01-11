/*
 * Pointers_exercise_7.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */


#include <stdio.h>


int main(void)
{
	int array[] = {5, 4, 3, 2 ,1};
	int *p_array = array;
	int x;

	for(x = 0; x < 5; x++){

		printf("This is the element %d of the array : %d \n", x, *(p_array + x) );

	}




	return 0;
}
