/*
 * SC_static_exercise.c
 *
 *  Created on: Jan 10, 2024
 *      Author: Julio González
 */


#include <stdio.h>


extern void increase();


int main()
{
	increase();
    return 0;
}

void increase()
{
    static int x;
	for (x = 0;  x <= 5; x++)
	{
    	printf("This is the value of x: %d\n", x);
    }
}

