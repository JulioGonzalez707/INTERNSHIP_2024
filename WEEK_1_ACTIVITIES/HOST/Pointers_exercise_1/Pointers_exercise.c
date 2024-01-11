/*
 * Exercise_1.c
 *
 *  Created on: Jan 4, 2024
 *      Author: Julio González
 */


#include <stdio.h>

int main(){

	char x = 100; //Variable of type char with a value of 100
	printf("The memory address of the variable x is: %p\n", &x); // The memory address where the value of x was saved is being printed

	char *p = &x; // Attaching the memory address of the variable x into a pointer
	printf("This is the memory address saved into pointer: %p\n", p);// The memory address of the pointer is printed

	char *read = (char*)0x0065FEC6; //Making a read operation of the memory address
	char value = *read; //Variable created to save the value stored in that memory address
	printf("Data obtained of the read operation is; %d\n", value); //printing the data obtained

	*p = 65; // The value of our variable x is being updated to 65
	         // *P = 65 or x = 65 is the same
	printf("New value of the pointer is: %d\n", x); //printing the new value of x

	getchar(); // The computer console will close until any char is written
	return 0; // It means no errors in the code*/

}
