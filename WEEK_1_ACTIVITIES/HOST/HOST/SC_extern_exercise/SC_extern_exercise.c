/*
 * SC_extern_exercise.c
 *
 *  Created on: Jan 5, 2024
 *      Author: Julio González
 */


#include <stdio.h>
#include "SC_extern_exercise.h"

extern int x;

int main(void){

	printf("This is x value: %d\n", x);

	getchar();
	return 0;
}

