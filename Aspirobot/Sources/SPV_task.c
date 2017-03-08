/* Standard includes. */


/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "event_groups.h"
#include "croutine.h"
#include "machine.h"
#include "uart.h"
#include "timer.h"

/* The execution period of the check task. */
#define SPV_CHECK_TASK_PERIOD				( ( TickType_t ) 1 / portTICK_PERIOD_MS )
#define CNT_1_SECONDES (1000/SPV_CHECK_TASK_PERIOD)
#define CNT_2_SECONDES (2000/SPV_CHECK_TASK_PERIOD)
/* ----- Variables externe -------*/
extern EventGroupHandle_t xEventGroup;

/*-----------------------------------------------------------*/

/*
 * The check task as described at the top of this file.
 */
void SPV_Task( void *pvParameters );
void SPV_init(void);
/******************************************************************************/
/**
 * \fn  void SPV_init(void)
 * \brief Fonction générale d'initialiation des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void SPV_init(void)
{
  
}
/******************************************************************************/
/**
 * \fn void SPV_Task( void *pvParameters )
 * \brief Fonction générale d'initialiation des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void SPV_Task( void *pvParameters )
{
	enEvent enCheckAspi  = Event_Aspi_off;  
	enEvent enCheckRobot = Event_Robot_off; 
	int cnt=0;
	int cnt_led=0;
	
	/* Used to wake the task at the correct frequency. */
	TickType_t xLastExecutionTime;

    SPV_init();

	/* Initialise xLastExecutionTime so the first call to vTaskDelayUntil()
	works correctly. */
	for( ;; )
	{
		xLastExecutionTime = xTaskGetTickCount();
		/* Wait until it is time for the next cycle every 1ms  */
		vTaskDelayUntil( &xLastExecutionTime, SPV_CHECK_TASK_PERIOD );
        cnt++;       
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

        /* Activer l'aspi àprès 1 secondes */ 
        if ((enCheckAspi==Event_Aspi_off) && (cnt >= CNT_2_SECONDES))
		{ 
            /* le robot est on */    
			xEventGroupSetBits(xEventGroup, Event_Robot_on);
			enCheckRobot=Event_Robot_on;
            /* Mise en route du balai rotatif est on */ 
			xEventGroupSetBits(xEventGroup, Event_Aspi_on);
			enCheckAspi=Event_Aspi_on;
		}

    	if ((PORTA & BIT15))
    	{
		    /* RA15 = off */  
       		LATA = PORTA & ~BIT15;
    	}
    	else
		{
			/* RA15 = on  */
       		LATA = PORTA | BIT15;
		}
	}
}


