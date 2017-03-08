/* Standard includes. */


/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "event_groups.h"
#include "croutine.h"
#include "machine.h"

/* Demo application includes. */
extern void LED_RougeOn(void);

/* Demo task priorities. */
#define mainBLOCK_Q_PRIORITY				( tskIDLE_PRIORITY + 2 )
#define mainCHECK_TASK_PRIORITY				( tskIDLE_PRIORITY + 3 )

#define LED_TASK_PRIORITY					( tskIDLE_PRIORITY + 6 )
#define CAD_TASK_PRIORITY					( tskIDLE_PRIORITY + 3 )
#define MOT_TASK_PRIORITY					( tskIDLE_PRIORITY + 3 )
#define SPV_TASK_PRIORITY					( tskIDLE_PRIORITY + 4 )

#define mainCOM_TEST_PRIORITY				( 2 )

/* The check task may require a bit more stack as it calls sprintf(). */
#define mainCHECK_TASK_STACK_SIZE			( configMINIMAL_STACK_SIZE * 2 )

/* The execution period of the check task. */
#define mainCHECK_TASK_PERIOD				( ( TickType_t ) 10 / portTICK_PERIOD_MS )

/* The number of flash co-routines to create. */
#define mainNUM_FLASH_COROUTINES			( 3 )

/* Baud rate used by the comtest tasks. */
#define mainCOM_TEST_BAUD_RATE				( 19200 )

/* The LED used by the comtest tasks.  mainCOM_TEST_LED + 1 is also used.
See the comtest.c file for more information. */
#define mainCOM_TEST_LED					( 3 )

/* The frequency at which the "fast interrupt test" interrupt will occur. */
#define mainTEST_INTERRUPT_FREQUENCY		( 20000 )

/* The number of processor clocks we expect to occur between each "fast
interrupt test" interrupt. */
#define mainEXPECTED_CLOCKS_BETWEEN_INTERRUPTS ( configCPU_CLOCK_HZ / mainTEST_INTERRUPT_FREQUENCY )

/* The number of nano seconds between each processor clock. */
#define mainNS_PER_CLOCK ( ( unsigned short ) ( ( 1.0 / ( double ) configCPU_CLOCK_HZ ) * 1000000000.0 ) )

/* Dimension the buffer used to hold the value of the maximum jitter time when
it is converted to a string. */
#define mainMAX_STRING_LENGTH				( 20 )

#define BIT9 (1<<9)

/*-----------------------------------------------------------*/

/*
 * The check task as described at the top of this file.
 */
extern void LED_Task( void *pvParameters );
extern void CAD_Task( void *pvParameters );
extern void MOT_Task( void *pvParameters );
extern void SPV_Task( void *pvParameters );
/*
 * Setup the processor ready for the demo.
 */
static void prvSetupHardware( void );

/*-----------------------------------------------------------*/
/* Declare a variable to hold the created event group. */
EventGroupHandle_t xEventGroup;
/*-----------------------------------------------------------*/

/*
 * Create the demo tasks then start the scheduler.
 */
int main( void )
{
	/* Configure any hardware required for this demo. */
	prvSetupHardware();

    /* Attempt to create the event group. */
    xEventGroup = xEventGroupCreate();

    /* Was the event group created successfully? */
    if( xEventGroup == NULL )
    {
        /* The event group was not created because there was insufficient
        FreeRTOS heap available. */
  	    LED_RougeOn();
	  	while (1)
    	{
        	asm("NOP");	
		}
    }
    else
    {
        /* The event group was created. */
    }

	/* Create the test tasks defined within this file. */
	xTaskCreate( CAD_Task, "CAD", mainCHECK_TASK_STACK_SIZE, NULL, CAD_TASK_PRIORITY, NULL );

	/* Create the test tasks defined within this file. */
	xTaskCreate( MOT_Task, "MOT", mainCHECK_TASK_STACK_SIZE, NULL, MOT_TASK_PRIORITY, NULL );

	/* Create the test tasks defined within this file. */
	xTaskCreate( SPV_Task, "SPV", mainCHECK_TASK_STACK_SIZE, NULL, SPV_TASK_PRIORITY, NULL );

	/* Finally start the scheduler. */
	vTaskStartScheduler();

	/* Will only reach here if there is insufficient heap available to start
	the scheduler. */
  	
    LED_RougeOn();
    while (1)
    {
        asm("NOP");	
	}
	return 0;
}
/*-----------------------------------------------------------*/

static void prvSetupHardware( void )
{

/*************************************************************************************
*	Initialisation of input/output ports
*	
*	Each I/O pin has an associated bit in the registers TRIS, PORT et LAT
*	TRIS 	control register bit determines which pin is input or output
*			TRIS bit = 1 Input pin
*			TRIS bit = 0 Output pin
*	PORTx	The I/O data is accessible through the register PORTx
*			read PORTx reads the value from PORTx
*			write PORTx places a value at PORTx
*	LATx	output port latch register. Writing to the LATx is similar
*			to write to PORTx. Read LATx reads the latch value and not
*			the PORTx value
***************************************************************************************/
	TRISA=0x0000;					
	TRISB=0xFFFC; 					// analog input AN1-AN14
	TRISC=0xFFF5;					// RC1&RC3
	TRISD=0x0100; 					// b0=INA1,b1=INA2,b2=INB1,b3=INB2,b4=Trig Radar, b8=IC1(Echo) 
	TRISE=0x0000; 					// analog output
	TRISF=0xFFEF;					// RF4
	TRISG=0x0000;					// RG0,RG1,RG6;
}
/*-----------------------------------------------------------*/

void vApplicationIdleHook( void )
{
	/* Schedule the co-routines from within the idle task hook. */
	vCoRoutineSchedule();
}
/*-----------------------------------------------------------*/

/******************************************************************************/
/**
 * \fn void LED_RougeOn( void *pvParameters )
 * \brief 
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/


void LED_RougeOn(void)
{
	/* Allume la LED rouge */
    LATA = PORTA | BIT10;  
}