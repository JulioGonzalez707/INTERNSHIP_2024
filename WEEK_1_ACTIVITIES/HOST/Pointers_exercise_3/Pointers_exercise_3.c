/*
 * Pointers_exercise_3.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */


#include <stdio.h>

int main(void)
{

	int    m      = 300;
	float  fx     = 300.600006;
	char   cht    = 'z';
	int    *p_m   = &m;
	float  *p_fx  = &fx;
	char   *p_cht = &cht;

	//Using & operator

	printf("address of m   = %p\n", &m);
	printf("address of fx  = %p\n", &fx);
	printf("address of cht = %p\n", &cht);

	//  Using & and * operator :

	printf("Value at address of m   = %d\n", *(&m));
	printf("Value at address of fx  = %f\n", *(&fx));
	printf("Value at address of cht = %c\n", *(&cht));

	//Using only pointer variable :

	printf("address of m   = %p\n", p_m);
	printf("address of fx  = %p\n", p_fx);
	printf("address of cht = %p\n", p_cht);

	//Using only pointer operator :

	printf("Value at address of m   = %d\n", *p_m);
	printf("Value at address of fx  = %f\n", *p_fx);
	printf("Value at address of cht = %c\n", *p_cht);


}


