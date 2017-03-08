
/** definition des codes de retour des fonctions */
typedef enum
{
	RET_CODE_ERR = -1, RET_CODE_OK, RET_CODE_NOK
} enReturnCode;


typedef enum
{
	forward = 0, reverse = 1
} enSens;


typedef enum
{
	Automat_avance,
	Automat_recule,
	Automat_droite,
	Automat_gauche,
	Automat_arret,
	Automat_redemarrage,
	Automat_frein 
} enAutomat;


typedef enum
{
	Event_contact_droite=(1<<0),
    Event_contact_gauche=(1<<1),
    Event_alimlow=(1<<2),   
    Event_Aspi_on=(1<<3),   
    Event_Aspi_off=(1<<4),          
    Event_contact_front=(1<<5),          
	Event_Robot_on=(1<<6),  
	Event_Robot_off=(1<<7),          
} enEvent;

typedef enum
{
	off=0,on=1
} enStatus;

typedef enum
{
	in=0,out=1
} enIO;

typedef enum
{
	mur_approche=0,mur_eloigne=1
} enStatusMur;


#ifndef max
/**
 ** Do not use pass functions to this macro where the return value is determined by another process.  This macro
 ** will evaluate the function twice. Once at the comparison and once on the return.
 */
#define   max(a,b)    (((a) > (b)) ? (a) : (b))
#endif //ndef max
#ifndef min
/**
 ** Do not use pass functions to this macro where the return value is determined by another process.  This macro
 ** will evaluate the function twice. Once at the comparison and once on the return.
 */
#define   min(a,b)    (((a) < (b)) ? (a) : (b))
#endif //ndef min

/* definition de types */
typedef unsigned  char       uchar;
typedef signed    char       schar;
typedef unsigned  short      ushort;
typedef signed    short      sshort;
typedef unsigned  long       ulong;
typedef signed    long       slong;


/*******************************/
/*                             */
/* Masques des bits d'un octet */
/*                             */
/*******************************/

#define BIT0	(1<<0)
#define BIT1	(1<<1)
#define BIT2	(1<<2)
#define BIT3	(1<<3)
#define BIT4	(1<<4)
#define BIT5	(1<<5)
#define BIT6	(1<<6)
#define BIT7	(1<<7)
#define BIT8	(1<<8)
#define BIT9	(1<<9)
#define BIT10	(1<<10)
#define BIT11	(1<<11)
#define BIT12	(1<<12)
#define BIT13	(1<<13)
#define BIT14	(1<<14)
#define BIT15	(1<<15)

#define STEP0    0
#define STEP1    1
#define STEP2    2
#define STEP3    3
#define STEP4    4
#define STEP5    5
#define STEP6    6
#define STEP7    7
#define STEP8    8
#define STEP9    9
#define STEP10   10
#define STEP11   11
#define STEP12   12
#define STEP13   13
#define STEP14   14
#define STEP15   15
#define STEP16   16
#define STEP17   17
#define STEP18   18


//pin des moteurs et registre de controle de cette pin ENA
#define EN_A_TRIS TRISEbits.TRISE5
#define EN_A_LAT  LATEbits.LATE5

//pin des moteurs et registre de controle de cette pin ENB
#define EN_B_TRIS TRISEbits.TRISE3
#define EN_B_LAT  LATEbits.LATE3


// Commande de sens moteur 1 (droite) INA1
#define IN_A1 LATDbits.LATD0
#define IN_A1_TRIS TRISDbits.TRISD0

// Commande de sens moteur 1 (droite) INA2
#define IN_A2 LATDbits.LATD1
#define IN_A2_TRIS TRISDbits.TRISD1

// Commande de radar TRIG1
#define IN_TRIG1      LATDbits.LATD4
#define IN_TRIG1_TRIS TRISDbits.TRISD4


// Commande de sens moteur 2 (gauche) INB1
#define IN_B1 LATDbits.LATD3
#define IN_B1_TRIS TRISDbits.TRISD3

// Commande de sens moteur 2 ()gauche INB2
#define IN_B2 LATDbits.LATD2
#define IN_B2_TRIS TRISDbits.TRISD2
/*---------------------------------------------------------------*/
// Commande PWM du balai rotatif
#define puls_aspi LATEbits.LATE1
#define puls_aspi_TRIS TRISEbits.TRISE1


//variables de temporisation (limite de temps d'une action !)
#define av_tempo 200000    //117188  
#define rec_tempo 200000   // 117188 
#define drte_tempo 200000  //58594; //117188 
#define gch_tempo  200000   //58594; //117188 
#define frein_tempo 1561880 

//pwm max du moteur --> vitesse max admise
#define pwm_max_ar 2600 //2210 //1500 //2310
#define pwm_max_dg 2850 //2850
#define pwm_min 2000 //1800

#define distance_mur_approche 400
#define distance_mur_eloigne  1200


#define AN_alim_min_haut 750
#define AN_alim_min_bas 650
#define AN_md_max 130 //130 // 145 //1024 //435
#define AN_mg_max 130 //130 // 145 //1024 //435 ok ca marche 145 et à 130
//les moteurs consomment plus quand le robot tourne sur lui-même
#define AN_md_ctg_max 1024 // 145 //1024 //435
#define AN_mg_ctd_max 1024 // 145 //1024 //435


//filtrage numerique
//volatile float filtre_d,filtre_g;

//#define alpha .1
//#define un_alpha .9 


/* Demo application includes. */
#define CINQ_SECONDES 5000
#define UNE_SECONDE  1000


/* Standard includes. */


