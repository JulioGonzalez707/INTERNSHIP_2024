/*
 * Pointers_exercise_6.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */


#include <stdio.h>

int maximum(int *x, int *y)
{
	if(*x < *y){

		printf("y is bigger than x");
		return *y;

	}else{

		printf("x is bigger than y");
		return *x;
	}
}


int main(void)
{

	int x = 5;
	int y = 6;

	maximum(&x,&y);

	return 0;

}
