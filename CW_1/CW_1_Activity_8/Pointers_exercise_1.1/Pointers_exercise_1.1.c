/*
 * Pointers_exercise_1.1.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */


#include <stdio.h>

int main(void)
{

	int m = 10;
	int n;
	int o;
	int *z = &m;

	printf("This is the address of m: %p\n", 	&m);
	printf("This is the address of n: %p\n", 	&n);
	printf("This is the address of o: %p\n", 	&o);
	printf("This is the address of z: %p\n", 	&z);
	printf("This is the address of m: %p\n",  	 z);
	printf("This is the value   of m: %d\n",	*z);

}


