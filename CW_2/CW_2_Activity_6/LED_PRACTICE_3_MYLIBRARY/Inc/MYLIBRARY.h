/*
 * MYLIBRARY.h
 *
 *  Created on: Jan 10, 2024
 *      Author: Julio González
 */

#ifndef MYLIBRARY_H_
#define MYLIBRARY_H_



/*--------------------------------------------------------*/
/*             Definitions of the directions	  	  */
/*                    of my registers			  */
/*--------------------------------------------------------*/

#define 	INPUT_MODE 		0UL				// Setting mode of the PORT
#define 	OUTPUT_MODE		1UL				// Setting mode of the PORT
#define 	ALTERNATE_MODE	2UL				// Setting mode of the PORT
#define 	ANALOG_MODE		3UL				// Setting mode of the PORT
#define 	TURNING_ON		1UL				// Setting OUTPUT DATA register of the GPIOs pin port
#define		TRUNING_OFF  	0UL				// Cleaning OUTPUT DATA register of the GPIOs pin port
#define		RCC_AHB1ENR		0x40023830UL;	// Address of the AHB1 bus registers
#define		GPIOs_MODER		0x40020C00UL;	// Address of the GPIOs Modern MODE registers
#define		GPIOs_ODR		0x40020C14UL;	// Address of the GPIOs output data registers 
#define		GPIOD_ON		1UL;			// Setting RCC_AHB1 bus Port D



/*--------------------------------------------------------*/
/*		RCC AHB1 enable registers		  */
/*--------------------------------------------------------*/

typedef struct{

	uint32_t	GPIOAEN			:1;
	uint32_t	GPIOBEN			:1;
	uint32_t	GPIOCEN			:1;
	uint32_t	GPIODEN			:1;
	uint32_t	GPIOEEN			:1;
	uint32_t	GPIOFEN			:1;
	uint32_t	GPIOGEN			:1;
	uint32_t	GPIOHEN			:1;
	uint32_t	GPIOIEN			:1;
	uint32_t	Reserved1		:3;
	uint32_t	Reserved2		:5;
	uint32_t	BKPSRAMEN		:1;
	uint32_t	Res				:1;
	uint32_t	CCMDATARAMEN	:1;
	uint32_t	DMA1EN			:1;
	uint32_t	DMA2EN			:1;
	uint32_t	Reserved3		:2;
	uint32_t	ETHMACEN		:1;
	uint32_t	ETHMACTXEN		:1;
	uint32_t	ETHMACPTP		:1;
	uint32_t	OTGHSEN			:1;
	uint32_t	OTGHSULPIEN		:1;
	uint32_t	Reserved4		:1;

}RCC_AHB1ENR_t;



/*--------------------------------------------------------*/
/*		 GPIOs MODERN registers			  */
/*--------------------------------------------------------*/

typedef struct{
	uint32_t	MODER0			:2;
	uint32_t	MODER1			:2;
	uint32_t	MODER2			:2;
	uint32_t	MODER3			:2;
	uint32_t	MODER4			:2;
	uint32_t	MODER5			:2;
	uint32_t	MODER6			:2;
	uint32_t	MODER7			:2;
	uint32_t	MODER8			:2;
	uint32_t	MODER9			:2;
	uint32_t	MODER10			:2;
	uint32_t	MODER11			:2;
	uint32_t	MODER12			:2;
	uint32_t	MODER13			:2;
	uint32_t	MODER14			:2;
	uint32_t	MODER15			:2;
}GPIOs_MODER_t;



/*--------------------------------------------------------*/
/*		GPIOs pin output data registers		  */
/*--------------------------------------------------------*/

typedef struct{
	uint32_t 	pin_0			:1;
	uint32_t 	pin_1			:1;
	uint32_t 	pin_2			:1;
	uint32_t 	pin_3			:1;
	uint32_t 	pin_4			:1;
	uint32_t 	pin_5			:1;
	uint32_t 	pin_6			:1;
	uint32_t 	pin_7			:1;
	uint32_t 	pin_8			:1;
	uint32_t 	pin_9			:1;
	uint32_t 	pin_10			:1;
	uint32_t 	pin_11			:1;
	uint32_t 	pin_12			:1;
	uint32_t 	pin_13			:1;
	uint32_t 	pin_14			:1;
	uint32_t 	pin_15			:1;
	uint32_t 	Reserved		:16;

}GPIOs_ODR_t;


#endif /* MYLIBRARY_H_ */

