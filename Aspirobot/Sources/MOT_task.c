/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "event_groups.h"
#include "croutine.h"
#include "machine.h"
#include "pwm.h"
#include "timer.h"

/* The execution period of the check task. toutes les 1 ms */
#define MOT_CHECK_TASK_PERIOD				( ( TickType_t ) 100 / portTICK_PERIOD_MS )

#define	TIMER_PERIOD 0x0064         /* Set the timer period for 3.43 usec */
#define	INIT_TIME_ELAPSED           (10*1000)
#define BIT10 (1<<10)

/* ----- Variables externe -------*/
extern EventGroupHandle_t xEventGroup;

enAutomat Etat_old=0;
enAutomat Etat=0;
enEvent   Evenment;

volatile unsigned int pwm=0;
volatile enStatus pwm_count;

unsigned int AN_md,AN_mg; //pour le conversion AN
unsigned int fin_tempo_var;

void MOT_init(void);
void MOT_Task( void *pvParameters );

void MOT_DG_avance(void);
void MOT_DG_recule(void);
void MOT_DR_tourne(void);
void MOT_GA_tourne(void);
void MOT_DG_arret(void);
void MOT_DG_redemarrage(void);
void MOT_DG_frein(void);
void MOT_DG_roue_libre(void);
void MOT_incr_pwm(void);

void demarrer_tempo(unsigned long tempo);

/******************************************************************************/
/**
 * \fn  void MOT_init(void)
 * \brief Fonction générale d'initialiation des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void MOT_init(void)
{
	//configuration du module PWM
	const unsigned int period = 1499;//20khz à 30Mips
	const unsigned int sptime = 0x0;
	const unsigned int config1 = PWM_EN & PWM_OP_SCALE1 & PWM_IPCLK_SCALE1 & PWM_MOD_FREE;
	const unsigned int config2 = PWM_MOD1_IND & PWM_MOD2_IND & PWM_MOD3_IND  & PWM_PEN3H & PWM_PEN2H &
								 PWM_PEN1H & PWM_PDIS3L & PWM_PDIS2L & PWM_PDIS1L;
	const unsigned int config3 = PWM_SEVOPS1 & PWM_OSYNC_PWM & PWM_UEN;


	OpenMCPWM(period, sptime, config1, config2, config3);

	xEventGroupClearBits( xEventGroup, (Event_contact_droite |
    									Event_contact_gauche |
    									Event_contact_front |   
    									Event_Aspi_on |   
    									Event_Aspi_off |          
    									Event_alimlow |          
										Event_Robot_on |  
										Event_Robot_off ));

	//timer 45 pour la rampe d'accélération!!!
	OpenTimer45(T4_ON & T4_GATE_OFF & T4_IDLE_STOP & T4_PS_1_1 & T4_32BIT_MODE_ON & T4_SOURCE_INT, 1000 ); 
	EnableIntT5;
	ConfigIntTimer45(T5_INT_PRIOR_5 & T5_INT_ON);

	pwm=pwm_min;
	Etat=Automat_avance;

	fin_tempo_var=on;
}

/******************************************************************************/
/**
 * \fn void MOT_Task( void *pvParameters )
 * \brief Fonction générale d'initialiation des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void MOT_Task( void *pvParameters )
{
	EventBits_t uxEventBits=0;
	const TickType_t xTicksToWait = 10 / portTICK_PERIOD_MS;
    static enStatus enAspiStatus=off;
    static enStatus enRobotStatus=off;
   // static enEvenement Evenement;

    /* Initialisation de VBAT */
	MOT_init(); 

	/* Initialise xLastExecutionTime so the first call to vTaskDelayUntil()
	works correctly. */
	for( ;; )
	{
		Etat_old = Etat;
  		/* Wait a maximum of 100ms for either bit 0 or bit 4 to be set within
  		the event group.  Clear the bits before exiting. */
  		uxEventBits = xEventGroupWaitBits(
        	    xEventGroup,   /* The event group being tested. */
                (	Event_contact_droite |
    				Event_contact_gauche |
    				Event_contact_front |   
    				Event_Aspi_on |   
    				Event_Aspi_off |          
    				Event_alimlow |          
					Event_Robot_on |  
					Event_Robot_off ), /* The bits within the event group to wait for. */
            	pdTRUE,        /* BIT_0 & BIT_4 should be cleared before returning. */
            	pdFALSE,       /* Don't wait for both bits, either bit will do. */
            	xTicksToWait );/* Wait a maximum of 100ms for either bit to be set. */

    	if ((PORTA & BIT14))
    	{
		    /* RA14 = off */  
       		PORTA = PORTA & ~BIT14;
    	}
    	else
		{
			/* RA14 = on  */
       		PORTA = PORTA | BIT14;
		}

		switch (uxEventBits)
		{
		case Event_Robot_on:
				pwm=pwm_min;
				Etat=Automat_avance;
				fin_tempo_var=on;
        break;

		case Event_Robot_off:
				pwm=pwm_min;
				Etat=Automat_arret;
				fin_tempo_var=on;
        break;

		case Event_Aspi_on:
		     	SetDCMCPWM(1,2900,0);//Le balai rotatif ! il faut l'activer 
 				enAspiStatus = on;
				xEventGroupClearBits( xEventGroup, Event_Aspi_on);
        break;

		case Event_Aspi_off:
		     	SetDCMCPWM(1,0,0);//Le balai rotatif ! il faut le desactiver 
 				enAspiStatus = off;
				xEventGroupClearBits( xEventGroup, Event_Aspi_off);
        break;

		case Event_contact_droite:
				xEventGroupClearBits( xEventGroup, Event_contact_droite);
				switch (Etat)
				{
					case Automat_avance:
						pwm=pwm_min;Etat=Automat_gauche; 
					break;
					case Automat_droite:
						pwm= pwm_min;Etat=Automat_gauche; 
					break;
	                
                	default:break;
		   		}		
		break;

		case Event_contact_gauche:
				xEventGroupClearBits( xEventGroup, Event_contact_gauche);
				switch (Etat)
				{
					case Automat_avance:
				 		pwm= pwm_min;Etat=Automat_droite; 
					break;

					case Automat_gauche:
				 		pwm= pwm_min;Etat=Automat_droite; 
					break;
	                
                	default:break;
		   		}		
		break;

		case Event_contact_front:
				xEventGroupClearBits(xEventGroup,  /* The event group being updated. */
                              		 Event_contact_front); /* The bits being remove. */ 	

				switch (Etat)
				{
					case Automat_avance:
				 		pwm= pwm_min;Etat=Automat_recule; 
					break;
					case Automat_droite:
				 		pwm= pwm_min;Etat=Automat_gauche; 
					break;
					case Automat_gauche:
				 		pwm= pwm_min;Etat=Automat_droite; 
					break;

                	default:break;
		   		}		
		break;

		default:break;
		}
		
		//On applique le nouvel etat qui vient d'etre décidé 	
		switch (Etat)
			{
				case Automat_avance:
					MOT_DG_avance(); 
				break;

				case Automat_recule:
					MOT_DG_recule(); 
				break;

				case Automat_droite:
					MOT_DR_tourne(); 
				break;

				case Automat_gauche:
					MOT_GA_tourne();
				break;

				case Automat_arret:
					MOT_DG_arret(); 
				break;

				case Automat_redemarrage:
					MOT_DG_redemarrage(); 
				break;

				case Automat_frein:	
					MOT_DG_frein(); 
				break;
			}
		}
}
/******************************************************************************/
/**
 * \fn void MOT_DG_avance( void *pvParameters )
 * \brief Fonction avance des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
//Fonction de déplacement du robot
void MOT_DG_avance(void)
{
	if(Etat_old!=Etat)
	{
		MOT_DG_roue_libre();
	}
	
	IN_A1=forward;
	IN_A2=!IN_A1;
	
	IN_B1=forward;
	IN_B2=!IN_B1;
	MOT_incr_pwm();	
}

/******************************************************************************/
/**
 * \fn void MOT_DG_recule( void *pvParameters )
 * \brief Fonction de recule
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void MOT_DG_recule(void)
{
	if(Etat_old!=Etat)
	{
		MOT_DG_roue_libre();
	}
		
	IN_A1=reverse;
	IN_A2=!IN_A1;
	
	IN_B1=reverse;
	IN_B2=!IN_B1;
	MOT_incr_pwm();
}
/******************************************************************************/
/**
 * \fn void MOT_DR_tourne( void *pvParameters )
 * \brief Fonction tourne à droite
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/

void MOT_DR_tourne(void)
{
	if(Etat_old!=Etat)
	{
		MOT_DG_roue_libre();
	}
		
	IN_A1=reverse;
	IN_A2=!IN_A1;
	
	IN_B1=forward;
	IN_B2=!IN_B1;
	MOT_incr_pwm();
}
/******************************************************************************/
/**
 * \fn void MOT_GA_tourne( void *pvParameters )
 * \brief Fonction tourne à guauche
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/

void MOT_GA_tourne(void)
{
	if(Etat_old!=Etat)
	{
		MOT_DG_roue_libre();
	}
		
	IN_A1=forward;
	IN_A2=!IN_A1;
	
	IN_B1=reverse;
	IN_B2=!IN_B1;
	MOT_incr_pwm();
}
/******************************************************************************/
/**
 * \fn void MOT_arret( void *pvParameters )
 * \brief Fonction d'arret des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/

void MOT_DG_arret(void)
{
	 PTCONbits.PTEN=0;
	 EN_A_LAT=0;
	 EN_B_LAT=0;
	 puls_aspi=0;
}
/******************************************************************************/
/**
 * \fn void MOT_DG_redemarrage( void *pvParameters )
 * \brief Fonction de redemarrage des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
	 
void MOT_DG_redemarrage(void)
{
	PTCONbits.PTEN=1;
}	

/******************************************************************************/
/**
 * \fn void MOT_DG_frein( void *pvParameters )
 * \brief Fonction de frein sur les moteurs droite et gauche
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
	
void MOT_DG_frein(void)
{
	IN_A1=reverse;
	IN_A2=IN_A1;
	
	IN_B1=reverse;
	IN_B2=IN_B1;
}

/******************************************************************************/
/**
 * \fn void MOT_( void *pvParameters )
 * \brief Fonction générale d'initialiation des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/

void MOT_DG_roue_libre(void)
{
		SetDCMCPWM(3,0,0);
		SetDCMCPWM(2,0,0);		
}

/******************************************************************************/
/**
 * \fn void MOT_incr_pwm( void *pvParameters )
 * \brief Fonction générale d'initialiation des moteurs
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/

void MOT_incr_pwm(void)
{
	if(Etat==Automat_avance)
    {                                                                                                                                                       
		if( (pwm < pwm_max_ar) && (pwm_count==on))
		{
			pwm_count=off;
			pwm++;
			SetDCMCPWM(3,pwm,0);
			SetDCMCPWM(2,pwm,0);
       	}	
	}
	if(Etat==Automat_recule)
    {
		if( (pwm < pwm_max_ar) && (pwm_count==on))
		{
			pwm_count=off;
			pwm++;
			SetDCMCPWM(3,0,0);
			SetDCMCPWM(2,(pwm+350),0);
       	}
	}
    if((Etat==Automat_droite)||(Etat==Automat_gauche))
	{
		if( pwm < pwm_max_dg && pwm_count==on)
		{
			pwm_count=off;
			pwm++;
			SetDCMCPWM(3,pwm,0);
			SetDCMCPWM(2,pwm,0);
       	}
	}	
}

/******************************************************************************/
/**
 * \fn void __attribute__((__interrupt__, auto_psv)) _T5Interrupt(void)
 * \brief interruption sur TIMER45 gestion pwm pour accélération rampe d'accélération
 * \return RET_CODE_ERR
 * \return RET_CODE_OK
 */
/******************************************************************************/
void __attribute__((__interrupt__, auto_psv)) _T5Interrupt(void)
{				
	//Le timer45 se remet à 0 tt seul
	IFS1bits.T5IF=0;
    pwm_count = on;
}

