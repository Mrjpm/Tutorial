/*
    FreeRTOS V8.2.1 - Copyright (C) 2015 Real Time Engineers Ltd.
    All rights reserved

    VISIT http://www.FreeRTOS.org TO ENSURE YOU ARE USING THE LATEST VERSION.

    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation >>!AND MODIFIED BY!<< the FreeRTOS exception.

    ***************************************************************************
    >>!   NOTE: The modification to the GPL is included to allow you to     !<<
    >>!   distribute a combined work that includes FreeRTOS without being   !<<
    >>!   obliged to provide the source code for proprietary components     !<<
    >>!   outside of the FreeRTOS kernel.                                   !<<
    ***************************************************************************

    FreeRTOS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE.  Full license text is available on the following
    link: http://www.freertos.org/a00114.html

    ***************************************************************************
     *                                                                       *
     *    FreeRTOS provides completely free yet professionally developed,    *
     *    robust, strictly quality controlled, supported, and cross          *
     *    platform software that is more than just the market leader, it     *
     *    is the industry's de facto standard.                               *
     *                                                                       *
     *    Help yourself get started quickly while simultaneously helping     *
     *    to support the FreeRTOS project by purchasing a FreeRTOS           *
     *    tutorial book, reference manual, or both:                          *
     *    http://www.FreeRTOS.org/Documentation                              *
     *                                                                       *
    ***************************************************************************

    http://www.FreeRTOS.org/FAQHelp.html - Having a problem?  Start by reading
    the FAQ page "My application does not run, what could be wrong?".  Have you
    defined configASSERT()?

    http://www.FreeRTOS.org/support - In return for receiving this top quality
    embedded software for free we request you assist our global community by
    participating in the support forum.

    http://www.FreeRTOS.org/training - Investing in training allows your team to
    be as productive as possible as early as possible.  Now you can receive
    FreeRTOS training directly from Richard Barry, CEO of Real Time Engineers
    Ltd, and the world's leading authority on the world's leading RTOS.

    http://www.FreeRTOS.org/plus - A selection of FreeRTOS ecosystem products,
    including FreeRTOS+Trace - an indispensable productivity tool, a DOS
    compatible FAT file system, and our tiny thread aware UDP/IP stack.

    http://www.FreeRTOS.org/labs - Where new FreeRTOS products go to incubate.
    Come and try FreeRTOS+TCP, our new open source TCP/IP stack for FreeRTOS.

    http://www.OpenRTOS.com - Real Time Engineers ltd. license FreeRTOS to High
    Integrity Systems ltd. to sell under the OpenRTOS brand.  Low cost OpenRTOS
    licenses offer ticketed support, indemnification and commercial middleware.

    http://www.SafeRTOS.com - High Integrity Systems also provide a safety
    engineered and independently SIL3 certified version for use in safety and
    mission critical applications that require provable dependability.

    1 tab == 4 spaces!
*/


/* Standard includes. */


/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "croutine.h"
#include "machine.h"

/* Demo application includes. */

/* The execution period of the check task. */
#define LED_CHECK_TASK_PERIOD				( ( TickType_t ) 1 / portTICK_PERIOD_MS )

/*-----------------------------------------------------------*/

/*
 * The check task as described at the top of this file.
 */
void LED_Task( void *pvParameters );
void LED_init(void);

/******************************************************************************/
/**
 * \fn void LED_init(void)
 * \brief Tache de gestion des ADC
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void LED_init(void)
{
  // Explorer-16 uses UART1 to connect to the PC.
  // This initialization assumes 36MHz Fpb clock. If it changes,
  // you will have to modify baud rate initializer.

  // Configure UART2 RX Interrupt

  // configure for multi-vectored mode

  // enable interrupts

}
/******************************************************************************/
/**
 * \fn void LED_Task( void *pvParameters )
 * \brief Tache de gestion d'une LED et UART de Trace
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void LED_Task( void *pvParameters )
{
	/* Used to wake the task at the correct frequency. */
	TickType_t xLastExecutionTime;
	static int cnt_led=0;


	/* Initialise xLastExecutionTime so the first call to vTaskDelayUntil()
	works correctly. */
	for( ;; )
	{
		xLastExecutionTime = xTaskGetTickCount();
		/* Wait until it is time for the next cycle. */
		vTaskDelayUntil( &xLastExecutionTime, LED_CHECK_TASK_PERIOD );
        cnt_led++;
 
    	if ((PORTA & BIT9) && (cnt_led > 250 ))
    	{
		    /* Eteind la LED verte */  
       		LATA = PORTA & ~BIT9;
			cnt_led=0; 
    	}
    	else if(((PORTA & BIT9) == 0) && (cnt_led > 250 ))
		{
			/* Allume la LED verte */
       		LATA = PORTA | BIT9;
            cnt_led=0;
		}
	}
}


void LED_RougeOn(void)
{
	/* Allume la LED rouge */
    LATA = PORTA | BIT10;  
}

