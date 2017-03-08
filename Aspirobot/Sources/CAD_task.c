/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "event_groups.h"
#include "croutine.h"
#include "machine.h"
#include "adc10.h"
#include "timer.h"
	
int channel0Result, channel1Result;

#define	TIMER_PERIOD 0x0064         /* Set the timer period for 3.43 usec */
#define BIT10 (1<<10)
/* The execution period of the vbat task every 100ms. */
#define CAD_CHECK_TASK_PERIOD				( ( TickType_t ) 1 / portTICK_PERIOD_MS )




/* ----- Variables externe -------*/
extern EventGroupHandle_t xEventGroup;

static void CAD_init_InputCapture_1(void);
static void CAD_init(void);
void CAD_Task( void *pvParameters );


/******************************************************************************/
/**
 * \fn static void CAD_init_InputCapture_1(void)
 * \brief Fonction générale d'initialiation des input capture
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
static void CAD_init_InputCapture_1(void)
{
	// Initialize Capture Module
	IC1CONbits.ICM= 0b00; // Disable Input Capture 1 module
	IC1CONbits.ICTMR =  1; // Select Timer2 as the IC1 Time base
/*
bit 6-5 ICI<1:0>: Select Number of Captures per Interrupt bits
11 = Interrupt on every fourth capture event
10 = Interrupt on every third capture event
01 = Interrupt on every second capture event
00 = Interrupt on every capture event
*/
	IC1CONbits.ICI= 0b00; 
/*
bit 2-0 ICM<2:0>: Input Capture Mode Select bits
111 = Input Capture functions as interrupt pin only, when device is in Sleep or Idle mode
(Rising edge detect only, all other control bits are not applicable.)
110 = Unused (module disabled)
101 = Capture mode, every 16th rising edge
100 = Capture mode, every 4th rising edge
011 = Capture mode, every rising edge
010 = Capture mode, every falling edge
001 = Capture mode, every edge (rising and falling)
(ICI<1:0> does not control interrupt generation for this mode.)
000 = Input capture module turned off */

	IC1CONbits.ICM= 0b001; /* Capture mode, every edge (rising and falling) */

	// Enable Capture Interrupt And Timer2
	IPC0bits.IC1IP = 1; // Setup IC1 interrupt priority level
	IFS0bits.IC1IF = 0; // Clear IC1 Interrupt Status Flag
	IEC0bits.IC1IE = 1; // Enable IC1 interrupt


}

// Capture Interrupt Service Routine

signed int cad_tBuf[8]=
{
	0,0,0,0,0,0,0,0,
};
unsigned int cad_incBuf=1;
unsigned int cad_incBufOld=0;
enStatusMur   cad_StatusMur=mur_eloigne;
enStatusMur   cad_StatusMur_old=mur_approche;
signed int cad_mm=0;
signed int cad_mmOld=1;
signed int t1=0;
unsigned int statusIO=0xFFFF;
enEvent EventContact=Event_Robot_off; 
enEvent EventContact_old=Event_Robot_on;
/******************************************************************************/
/**
 * \fn void __attribute__((__interrupt__, auto_psv)) _IC1Interrupt(void)
 * \brief Fonction générale d'intérruption de l'input capture IC1 lit la valeur et l'enregistre dans le buffer
 * \return 
 */
/******************************************************************************/
void __attribute__((__interrupt__, auto_psv)) _IC1Interrupt(void)
{	
    t1 = IC1BUF;

    statusIO = PORTD & BIT8;
    if (statusIO) // L'IO est à 1 : alors TMR2 = 0  
	{
       	TMR2=0; 	
	}
	else
	{
       	cad_mm = cad_tBuf[cad_incBuf] = t1;  
        cad_incBuf = (cad_incBuf + 1) & 7;
	}

	IFS0bits.IC1IF=0;
}


/******************************************************************************/
/**
 * \fn void CAD_init(void)
 * \brief Fonction générale d'initialiation de L'output/input Capture
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
static void CAD_init(void)
{
    /* mise à zero du Trigger RADAR */ 
    LATD = PORTD & ~BIT4;
	//timer 23 pour la mesure de l'input capture sur le signal du radar
	OpenTimer23(T2_ON & T2_GATE_OFF & T2_IDLE_STOP & T2_PS_1_64 & T2_32BIT_MODE_OFF & T2_SOURCE_INT, 65535 ); 
	EnableIntT3;
	ConfigIntTimer23(T3_INT_PRIOR_5 & T3_INT_ON);

	// Capture Interrupt Service Routine
	CAD_init_InputCapture_1();
}

/******************************************************************************/
/**
 * \fn void CAD_Task( void *pvParameters )
 * \brief Tache de gestion des évênements des radar 
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void CAD_Task( void *pvParameters )
{
    const int cad_timeout_aspi_cmd = 60;    
	TickType_t xLastExecutionTime;

	int cnt=0;
	int cnt_radar=0;
    int cnt_tempo; 


    /* Initialisation de VBAT */
	CAD_init(); 

	/* Initialise xLastExecutionTime so the first call to vTaskDelayUntil()
	works correctly. */
	for( ;; )
	{
		/* Wait until it is time for the next cycle every 1ms  */
		xLastExecutionTime = xTaskGetTickCount();
		/* Wait until it is time for the next cycle. */
		vTaskDelayUntil( &xLastExecutionTime, CAD_CHECK_TASK_PERIOD );       
        cnt++; 

        // Control de la trajectoire 
    	if (cad_incBuf != cad_incBufOld ) // Nouvelle valeur 
    	{                   
			if ( (cad_mm-cad_mmOld)  >= 0 )
            {
 				cad_StatusMur=mur_eloigne;	
				cad_mmOld = cad_mm;
			}
			else
            {
 				cad_StatusMur=mur_approche;	
				cad_mmOld = cad_mm;
			}

            // detection d'un obsctacle 
            if ( (cad_StatusMur == mur_approche) && 
				 (cad_mm < distance_mur_approche) &&
				 (cad_StatusMur != cad_StatusMur_old)) 
			{
            
				xEventGroupSetBits( xEventGroup,  /* The event group being updated. */
            	                	Event_contact_front); /* The bits being set. */ 
				EventContact = Event_contact_front; 
				cad_StatusMur_old = cad_StatusMur;
				EventContact_old = EventContact;	
			
			}

            // l'obstable a disparu après le recule du vehicule  
            if ( (cad_StatusMur == mur_eloigne) && 
				 (cad_mm > distance_mur_eloigne) && 
				 (cad_StatusMur != cad_StatusMur_old)) 
			{
            
				xEventGroupSetBits( xEventGroup,  /* The event group being updated. */
            	                	Event_Robot_on); /* The bits being set. */ 
				EventContact = Event_Robot_on;
				cad_StatusMur_old = cad_StatusMur;
				EventContact_old = EventContact;
			}

 			cad_incBufOld = cad_incBuf;

		}


        // Gestion de la commande pour le RADAR pulse toutes les xTicksToWait ms
    	if (cnt_radar == 0 )
    	{
		    /*      1ms
                   <--->   
                    ----                                    ----
               ____|    |___________//_____________________|    |________

                                   60ms
               <------------------------------------------------>

               __________||||____________________________________||||____

                             ________//____________________
                            |                              |
               -------------   de 2µs à 23ms (2cm à 4m)     --------------  
			*/    
            
       		LATD = PORTD | BIT4; 
        }   
        else if (cnt_radar == 1)
        {
      		LATD = PORTD & ~BIT4;
        }   
        else if (cnt_radar > cad_timeout_aspi_cmd )
        {
			cnt_radar=-1;      
		}

        cnt_radar++; 
	}
}

/******************************************************************************/
/**
 * \fn void __attribute__((__interrupt__, auto_psv)) _T3Interrupt(void)
 * \brief interruption sur TIMER23 gestion input capture
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void __attribute__((__interrupt__, auto_psv)) _T3Interrupt(void)
{				
	//Le timer23 se remet à 0 tt seul
	IFS0bits.T3IF=0;
}

