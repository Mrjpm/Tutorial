

#ifndef	_HTC_H_
#warning dsPIC30F6010A specific header file included directly. Use #include <htc.h> instead.
#endif

 /* header file for the MICROCHIP PIC microcontroller
    dsPIC30F6010A
 */

#ifndef __dsPIC30F6010A_H
#define __dsPIC30F6010A_H

#include <dspic30f6010a_cfgs.h>


//
// Special Function Register Definitions
//

// Register: WREG0
static volatile unsigned int            WREG0               @ 0x000;

// Register: WREG1
static volatile unsigned int            WREG1               @ 0x002;

// Register: WREG2
static volatile unsigned int            WREG2               @ 0x004;

// Register: WREG3
static volatile unsigned int            WREG3               @ 0x006;

// Register: WREG4
static volatile unsigned int            WREG4               @ 0x008;

// Register: WREG5
static volatile unsigned int            WREG5               @ 0x00A;

// Register: WREG6
static volatile unsigned int            WREG6               @ 0x00C;

// Register: WREG7
static volatile unsigned int            WREG7               @ 0x00E;

// Register: WREG8
static volatile unsigned int            WREG8               @ 0x010;

// Register: WREG9
static volatile unsigned int            WREG9               @ 0x012;

// Register: WREG10
static volatile unsigned int            WREG10              @ 0x014;

// Register: WREG11
static volatile unsigned int            WREG11              @ 0x016;

// Register: WREG12
static volatile unsigned int            WREG12              @ 0x018;

// Register: WREG13
static volatile unsigned int            WREG13              @ 0x01A;

// Register: WREG14
static volatile unsigned int            WREG14              @ 0x01C;

// Register: WREG15
static volatile unsigned int            WREG15              @ 0x01E;

// Register: SPLIM
static volatile unsigned int            SPLIM               @ 0x020;

// Register: ACCAL
static volatile unsigned int            ACCAL               @ 0x022;

// Register: ACCAH
static volatile unsigned int            ACCAH               @ 0x024;

// Register: ACCAU
static volatile unsigned int            ACCAU               @ 0x026;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SIGNEXT             : 8;
        volatile unsigned ACCAU               : 8;
    };
} ACCAUbits @ 0x026;

// Register: ACCBL
static volatile unsigned int            ACCBL               @ 0x028;

// Register: ACCBH
static volatile unsigned int            ACCBH               @ 0x02A;

// Register: ACCBU
static volatile unsigned int            ACCBU               @ 0x02C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SIGNEXT             : 8;
        volatile unsigned ACCBU               : 8;
    };
} ACCBUbits @ 0x02C;

// Register: PCL
static volatile unsigned int            PCL                 @ 0x02E;

// Register: PCH
static volatile unsigned int            PCH                 @ 0x030;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned PCH                 : 7;
    };
} PCHbits @ 0x030;

// Register: TBLPAG
static volatile unsigned int            TBLPAG              @ 0x032;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned TBLPAG              : 8;
    };
} TBLPAGbits @ 0x032;

// Register: PSVPAG
static volatile unsigned int            PSVPAG              @ 0x034;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned PSVPAG              : 8;
    };
} PSVPAGbits @ 0x034;

// Register: RCOUNT
static volatile unsigned int            RCOUNT              @ 0x036;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned RCOUNT              : 14;
    };
} RCOUNTbits @ 0x036;

// Register: DCOUNT
static volatile unsigned int            DCOUNT              @ 0x038;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned DCOUNT              : 14;
    };
} DCOUNTbits @ 0x038;

// Register: DOSTARTL
static volatile unsigned int            DOSTARTL            @ 0x03A;

// Register: DOSTARTH
static volatile unsigned int            DOSTARTH            @ 0x03C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned DOSTARTH            : 7;
    };
} DOSTARTHbits @ 0x03C;

// Register: DOENDL
static volatile unsigned int            DOENDL              @ 0x03E;

// Register: DOENDH
static volatile unsigned int            DOENDH              @ 0x040;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned DOENDH              : 7;
    };
} DOENDHbits @ 0x040;

// Register: SR
static volatile unsigned int            SR                  @ 0x042;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned OA                  : 1;
        volatile unsigned OB                  : 1;
        volatile unsigned SA                  : 1;
        volatile unsigned SB                  : 1;
        volatile unsigned OAB                 : 1;
        volatile unsigned SAB                 : 1;
        volatile unsigned DA                  : 1;
        volatile unsigned DC                  : 1;
        volatile unsigned IPL                 : 3;
        volatile unsigned RA                  : 1;
        volatile unsigned N                   : 1;
        volatile unsigned OV                  : 1;
        volatile unsigned Z                   : 1;
        volatile unsigned C                   : 1;
    };
    struct {
        volatile unsigned                     : 8;
        volatile unsigned IPL2                : 1;
        volatile unsigned IPL1                : 1;
        volatile unsigned IPL0                : 1;
        volatile unsigned                     : 5;
    };
} SRbits @ 0x042;
// bit variable definitions
static volatile bit C                    @ ((unsigned)&SR)*8+0;
static volatile bit Z                    @ ((unsigned)&SR)*8+1;
static volatile bit OV                   @ ((unsigned)&SR)*8+2;
static volatile bit N                    @ ((unsigned)&SR)*8+3;
static volatile bit RA                   @ ((unsigned)&SR)*8+4;
static volatile bit DC                   @ ((unsigned)&SR)*8+8;
static volatile bit DA                   @ ((unsigned)&SR)*8+9;
static volatile bit SAB                  @ ((unsigned)&SR)*8+10;
static volatile bit OAB                  @ ((unsigned)&SR)*8+11;
static volatile bit SB                   @ ((unsigned)&SR)*8+12;
static volatile bit SA                   @ ((unsigned)&SR)*8+13;
static volatile bit OB                   @ ((unsigned)&SR)*8+14;
static volatile bit OA                   @ ((unsigned)&SR)*8+15;
static volatile bit IPL0                 @ ((unsigned)&SR)*8+5;
static volatile bit IPL1                 @ ((unsigned)&SR)*8+6;
static volatile bit IPL2                 @ ((unsigned)&SR)*8+7;

// Register: CORCON
static volatile unsigned int            CORCON              @ 0x044;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned US                  : 1;
        volatile unsigned EDT                 : 1;
        volatile unsigned DL                  : 3;
        volatile unsigned SATA                : 1;
        volatile unsigned SATB                : 1;
        volatile unsigned SATDW               : 1;
        volatile unsigned ACCSAT              : 1;
        volatile unsigned IPL3                : 1;
        volatile unsigned PSV                 : 1;
        volatile unsigned RND                 : 1;
        volatile unsigned IF                  : 1;
    };
    struct {
        volatile unsigned                     : 5;
        volatile unsigned DL2                 : 1;
        volatile unsigned DL1                 : 1;
        volatile unsigned DL0                 : 1;
        volatile unsigned                     : 8;
    };
} CORCONbits @ 0x044;
// bit variable definitions
static volatile bit IF                   @ ((unsigned)&CORCON)*8+0;
static volatile bit RND                  @ ((unsigned)&CORCON)*8+1;
static volatile bit PSV                  @ ((unsigned)&CORCON)*8+2;
static volatile bit IPL3                 @ ((unsigned)&CORCON)*8+3;
static volatile bit ACCSAT               @ ((unsigned)&CORCON)*8+4;
static volatile bit SATDW                @ ((unsigned)&CORCON)*8+5;
static volatile bit SATB                 @ ((unsigned)&CORCON)*8+6;
static volatile bit SATA                 @ ((unsigned)&CORCON)*8+7;
static volatile bit EDT                  @ ((unsigned)&CORCON)*8+11;
static volatile bit US                   @ ((unsigned)&CORCON)*8+12;
static volatile bit DL0                  @ ((unsigned)&CORCON)*8+8;
static volatile bit DL1                  @ ((unsigned)&CORCON)*8+9;
static volatile bit DL2                  @ ((unsigned)&CORCON)*8+10;

// Register: MODCON
static volatile unsigned int            MODCON              @ 0x046;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned XMODEN              : 1;
        volatile unsigned YMODEN              : 1;
        volatile unsigned                     : 2;
        volatile unsigned BWM                 : 4;
        volatile unsigned YWM                 : 4;
        volatile unsigned XWM                 : 4;
    };
    struct {
        volatile unsigned                     : 4;
        volatile unsigned BWM3                : 1;
        volatile unsigned BWM2                : 1;
        volatile unsigned BWM1                : 1;
        volatile unsigned BWM0                : 1;
        volatile unsigned YWM3                : 1;
        volatile unsigned YWM2                : 1;
        volatile unsigned YWM1                : 1;
        volatile unsigned YWM0                : 1;
        volatile unsigned XWM3                : 1;
        volatile unsigned XWM2                : 1;
        volatile unsigned XWM1                : 1;
        volatile unsigned XWM0                : 1;
    };
} MODCONbits @ 0x046;
// bit variable definitions
static volatile bit YMODEN               @ ((unsigned)&MODCON)*8+14;
static volatile bit XMODEN               @ ((unsigned)&MODCON)*8+15;
static volatile bit XWM0                 @ ((unsigned)&MODCON)*8+0;
static volatile bit XWM1                 @ ((unsigned)&MODCON)*8+1;
static volatile bit XWM2                 @ ((unsigned)&MODCON)*8+2;
static volatile bit XWM3                 @ ((unsigned)&MODCON)*8+3;
static volatile bit YWM0                 @ ((unsigned)&MODCON)*8+4;
static volatile bit YWM1                 @ ((unsigned)&MODCON)*8+5;
static volatile bit YWM2                 @ ((unsigned)&MODCON)*8+6;
static volatile bit YWM3                 @ ((unsigned)&MODCON)*8+7;
static volatile bit BWM0                 @ ((unsigned)&MODCON)*8+8;
static volatile bit BWM1                 @ ((unsigned)&MODCON)*8+9;
static volatile bit BWM2                 @ ((unsigned)&MODCON)*8+10;
static volatile bit BWM3                 @ ((unsigned)&MODCON)*8+11;

// Register: XMODSRT
static volatile unsigned int            XMODSRT             @ 0x048;

// Register: XMODEND
static volatile unsigned int            XMODEND             @ 0x04A;

// Register: YMODSRT
static volatile unsigned int            YMODSRT             @ 0x04C;

// Register: YMODEND
static volatile unsigned int            YMODEND             @ 0x04E;

// Register: XBREV
static volatile unsigned int            XBREV               @ 0x050;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned BREN                : 1;
        volatile unsigned XB                  : 15;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned XB14                : 1;
        volatile unsigned XB13                : 1;
        volatile unsigned XB12                : 1;
        volatile unsigned XB11                : 1;
        volatile unsigned XB10                : 1;
        volatile unsigned XB9                 : 1;
        volatile unsigned XB8                 : 1;
        volatile unsigned XB7                 : 1;
        volatile unsigned XB6                 : 1;
        volatile unsigned XB5                 : 1;
        volatile unsigned XB4                 : 1;
        volatile unsigned XB3                 : 1;
        volatile unsigned XB2                 : 1;
        volatile unsigned XB1                 : 1;
        volatile unsigned XB0                 : 1;
    };
} XBREVbits @ 0x050;
// bit variable definitions
static volatile bit BREN                 @ ((unsigned)&XBREV)*8+15;
static volatile bit XB0                  @ ((unsigned)&XBREV)*8+0;
static volatile bit XB1                  @ ((unsigned)&XBREV)*8+1;
static volatile bit XB2                  @ ((unsigned)&XBREV)*8+2;
static volatile bit XB3                  @ ((unsigned)&XBREV)*8+3;
static volatile bit XB4                  @ ((unsigned)&XBREV)*8+4;
static volatile bit XB5                  @ ((unsigned)&XBREV)*8+5;
static volatile bit XB6                  @ ((unsigned)&XBREV)*8+6;
static volatile bit XB7                  @ ((unsigned)&XBREV)*8+7;
static volatile bit XB8                  @ ((unsigned)&XBREV)*8+8;
static volatile bit XB9                  @ ((unsigned)&XBREV)*8+9;
static volatile bit XB10                 @ ((unsigned)&XBREV)*8+10;
static volatile bit XB11                 @ ((unsigned)&XBREV)*8+11;
static volatile bit XB12                 @ ((unsigned)&XBREV)*8+12;
static volatile bit XB13                 @ ((unsigned)&XBREV)*8+13;
static volatile bit XB14                 @ ((unsigned)&XBREV)*8+14;

// Register: DISICNT
static volatile unsigned int            DISICNT             @ 0x052;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned DISICNT             : 14;
    };
} DISICNTbits @ 0x052;

// Register: INTCON1
static volatile unsigned int            INTCON1             @ 0x080;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned NSTDIS              : 1;
        volatile unsigned                     : 4;
        volatile unsigned OVATE               : 1;
        volatile unsigned OVBTE               : 1;
        volatile unsigned COVTE               : 1;
        volatile unsigned                     : 3;
        volatile unsigned MATHERR             : 1;
        volatile unsigned ADDRERR             : 1;
        volatile unsigned STKERR              : 1;
        volatile unsigned OSCFAIL             : 1;
        volatile unsigned                     : 1;
    };
} INTCON1bits @ 0x080;
// bit variable definitions
static volatile bit OSCFAIL              @ ((unsigned)&INTCON1)*8+1;
static volatile bit STKERR               @ ((unsigned)&INTCON1)*8+2;
static volatile bit ADDRERR              @ ((unsigned)&INTCON1)*8+3;
static volatile bit MATHERR              @ ((unsigned)&INTCON1)*8+4;
static volatile bit COVTE                @ ((unsigned)&INTCON1)*8+8;
static volatile bit OVBTE                @ ((unsigned)&INTCON1)*8+9;
static volatile bit OVATE                @ ((unsigned)&INTCON1)*8+10;
static volatile bit NSTDIS               @ ((unsigned)&INTCON1)*8+15;

// Register: INTCON2
static volatile unsigned int            INTCON2             @ 0x082;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned ALTIVT              : 1;
        volatile unsigned DISI                : 1;
        volatile unsigned                     : 9;
        volatile unsigned INT4EP              : 1;
        volatile unsigned INT3EP              : 1;
        volatile unsigned INT2EP              : 1;
        volatile unsigned INT1EP              : 1;
        volatile unsigned INT0EP              : 1;
    };
} INTCON2bits @ 0x082;
// bit variable definitions
static volatile bit INT0EP               @ ((unsigned)&INTCON2)*8+0;
static volatile bit INT1EP               @ ((unsigned)&INTCON2)*8+1;
static volatile bit INT2EP               @ ((unsigned)&INTCON2)*8+2;
static volatile bit INT3EP               @ ((unsigned)&INTCON2)*8+3;
static volatile bit INT4EP               @ ((unsigned)&INTCON2)*8+4;
static volatile bit DISI                 @ ((unsigned)&INTCON2)*8+14;
static volatile bit ALTIVT               @ ((unsigned)&INTCON2)*8+15;

// Register: IFS0
static volatile unsigned int            IFS0                @ 0x084;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CNIF                : 1;
        volatile unsigned MI2CIF              : 1;
        volatile unsigned SI2CIF              : 1;
        volatile unsigned NVMIF               : 1;
        volatile unsigned ADIF                : 1;
        volatile unsigned U1TXIF              : 1;
        volatile unsigned U1RXIF              : 1;
        volatile unsigned SPI1IF              : 1;
        volatile unsigned T3IF                : 1;
        volatile unsigned T2IF                : 1;
        volatile unsigned OC2IF               : 1;
        volatile unsigned IC2IF               : 1;
        volatile unsigned T1IF                : 1;
        volatile unsigned OC1IF               : 1;
        volatile unsigned IC1IF               : 1;
        volatile unsigned INT0IF              : 1;
    };
} IFS0bits @ 0x084;
// bit variable definitions
static volatile bit INT0IF               @ ((unsigned)&IFS0)*8+0;
static volatile bit IC1IF                @ ((unsigned)&IFS0)*8+1;
static volatile bit OC1IF                @ ((unsigned)&IFS0)*8+2;
static volatile bit T1IF                 @ ((unsigned)&IFS0)*8+3;
static volatile bit IC2IF                @ ((unsigned)&IFS0)*8+4;
static volatile bit OC2IF                @ ((unsigned)&IFS0)*8+5;
static volatile bit T2IF                 @ ((unsigned)&IFS0)*8+6;
static volatile bit T3IF                 @ ((unsigned)&IFS0)*8+7;
static volatile bit SPI1IF               @ ((unsigned)&IFS0)*8+8;
static volatile bit U1RXIF               @ ((unsigned)&IFS0)*8+9;
static volatile bit U1TXIF               @ ((unsigned)&IFS0)*8+10;
static volatile bit ADIF                 @ ((unsigned)&IFS0)*8+11;
static volatile bit NVMIF                @ ((unsigned)&IFS0)*8+12;
static volatile bit SI2CIF               @ ((unsigned)&IFS0)*8+13;
static volatile bit MI2CIF               @ ((unsigned)&IFS0)*8+14;
static volatile bit CNIF                 @ ((unsigned)&IFS0)*8+15;

// Register: IFS1
static volatile unsigned int            IFS1                @ 0x086;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned IC6IF               : 1;
        volatile unsigned IC5IF               : 1;
        volatile unsigned IC4IF               : 1;
        volatile unsigned IC3IF               : 1;
        volatile unsigned C1IF                : 1;
        volatile unsigned SPI2IF              : 1;
        volatile unsigned U2TXIF              : 1;
        volatile unsigned U2RXIF              : 1;
        volatile unsigned INT2IF              : 1;
        volatile unsigned T5IF                : 1;
        volatile unsigned T4IF                : 1;
        volatile unsigned OC4IF               : 1;
        volatile unsigned OC3IF               : 1;
        volatile unsigned IC8IF               : 1;
        volatile unsigned IC7IF               : 1;
        volatile unsigned INT1IF              : 1;
    };
} IFS1bits @ 0x086;
// bit variable definitions
static volatile bit INT1IF               @ ((unsigned)&IFS1)*8+0;
static volatile bit IC7IF                @ ((unsigned)&IFS1)*8+1;
static volatile bit IC8IF                @ ((unsigned)&IFS1)*8+2;
static volatile bit OC3IF                @ ((unsigned)&IFS1)*8+3;
static volatile bit OC4IF                @ ((unsigned)&IFS1)*8+4;
static volatile bit T4IF                 @ ((unsigned)&IFS1)*8+5;
static volatile bit T5IF                 @ ((unsigned)&IFS1)*8+6;
static volatile bit INT2IF               @ ((unsigned)&IFS1)*8+7;
static volatile bit U2RXIF               @ ((unsigned)&IFS1)*8+8;
static volatile bit U2TXIF               @ ((unsigned)&IFS1)*8+9;
static volatile bit SPI2IF               @ ((unsigned)&IFS1)*8+10;
static volatile bit C1IF                 @ ((unsigned)&IFS1)*8+11;
static volatile bit IC3IF                @ ((unsigned)&IFS1)*8+12;
static volatile bit IC4IF                @ ((unsigned)&IFS1)*8+13;
static volatile bit IC5IF                @ ((unsigned)&IFS1)*8+14;
static volatile bit IC6IF                @ ((unsigned)&IFS1)*8+15;

// Register: IFS2
static volatile unsigned int            IFS2                @ 0x088;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned FLTBIF              : 1;
        volatile unsigned FLTAIF              : 1;
        volatile unsigned                     : 2;
        volatile unsigned QEIIF               : 1;
        volatile unsigned PWMIF               : 1;
        volatile unsigned C2IF                : 1;
        volatile unsigned INT4IF              : 1;
        volatile unsigned INT3IF              : 1;
        volatile unsigned OC8IF               : 1;
        volatile unsigned OC7IF               : 1;
        volatile unsigned OC6IF               : 1;
        volatile unsigned OC5IF               : 1;
    };
} IFS2bits @ 0x088;
// bit variable definitions
static volatile bit OC5IF                @ ((unsigned)&IFS2)*8+0;
static volatile bit OC6IF                @ ((unsigned)&IFS2)*8+1;
static volatile bit OC7IF                @ ((unsigned)&IFS2)*8+2;
static volatile bit OC8IF                @ ((unsigned)&IFS2)*8+3;
static volatile bit INT3IF               @ ((unsigned)&IFS2)*8+4;
static volatile bit INT4IF               @ ((unsigned)&IFS2)*8+5;
static volatile bit C2IF                 @ ((unsigned)&IFS2)*8+6;
static volatile bit PWMIF                @ ((unsigned)&IFS2)*8+7;
static volatile bit QEIIF                @ ((unsigned)&IFS2)*8+8;
static volatile bit FLTAIF               @ ((unsigned)&IFS2)*8+11;
static volatile bit FLTBIF               @ ((unsigned)&IFS2)*8+12;

// Register: IEC0
static volatile unsigned int            IEC0                @ 0x08C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CNIE                : 1;
        volatile unsigned MI2CIE              : 1;
        volatile unsigned SI2CIE              : 1;
        volatile unsigned NVMIE               : 1;
        volatile unsigned ADIE                : 1;
        volatile unsigned U1TXIE              : 1;
        volatile unsigned U1RXIE              : 1;
        volatile unsigned SPI1IE              : 1;
        volatile unsigned T3IE                : 1;
        volatile unsigned T2IE                : 1;
        volatile unsigned OC2IE               : 1;
        volatile unsigned IC2IE               : 1;
        volatile unsigned T1IE                : 1;
        volatile unsigned OC1IE               : 1;
        volatile unsigned IC1IE               : 1;
        volatile unsigned INT0IE              : 1;
    };
} IEC0bits @ 0x08C;
// bit variable definitions
static volatile bit INT0IE               @ ((unsigned)&IEC0)*8+0;
static volatile bit IC1IE                @ ((unsigned)&IEC0)*8+1;
static volatile bit OC1IE                @ ((unsigned)&IEC0)*8+2;
static volatile bit T1IE                 @ ((unsigned)&IEC0)*8+3;
static volatile bit IC2IE                @ ((unsigned)&IEC0)*8+4;
static volatile bit OC2IE                @ ((unsigned)&IEC0)*8+5;
static volatile bit T2IE                 @ ((unsigned)&IEC0)*8+6;
static volatile bit T3IE                 @ ((unsigned)&IEC0)*8+7;
static volatile bit SPI1IE               @ ((unsigned)&IEC0)*8+8;
static volatile bit U1RXIE               @ ((unsigned)&IEC0)*8+9;
static volatile bit U1TXIE               @ ((unsigned)&IEC0)*8+10;
static volatile bit ADIE                 @ ((unsigned)&IEC0)*8+11;
static volatile bit NVMIE                @ ((unsigned)&IEC0)*8+12;
static volatile bit SI2CIE               @ ((unsigned)&IEC0)*8+13;
static volatile bit MI2CIE               @ ((unsigned)&IEC0)*8+14;
static volatile bit CNIE                 @ ((unsigned)&IEC0)*8+15;

// Register: IEC1
static volatile unsigned int            IEC1                @ 0x08E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned IC6IE               : 1;
        volatile unsigned IC5IE               : 1;
        volatile unsigned IC4IE               : 1;
        volatile unsigned IC3IE               : 1;
        volatile unsigned C1IE                : 1;
        volatile unsigned SPI2IE              : 1;
        volatile unsigned U2TXIE              : 1;
        volatile unsigned U2RXIE              : 1;
        volatile unsigned INT2IE              : 1;
        volatile unsigned T5IE                : 1;
        volatile unsigned T4IE                : 1;
        volatile unsigned OC4IE               : 1;
        volatile unsigned OC3IE               : 1;
        volatile unsigned IC8IE               : 1;
        volatile unsigned IC7IE               : 1;
        volatile unsigned INT1IE              : 1;
    };
} IEC1bits @ 0x08E;
// bit variable definitions
static volatile bit INT1IE               @ ((unsigned)&IEC1)*8+0;
static volatile bit IC7IE                @ ((unsigned)&IEC1)*8+1;
static volatile bit IC8IE                @ ((unsigned)&IEC1)*8+2;
static volatile bit OC3IE                @ ((unsigned)&IEC1)*8+3;
static volatile bit OC4IE                @ ((unsigned)&IEC1)*8+4;
static volatile bit T4IE                 @ ((unsigned)&IEC1)*8+5;
static volatile bit T5IE                 @ ((unsigned)&IEC1)*8+6;
static volatile bit INT2IE               @ ((unsigned)&IEC1)*8+7;
static volatile bit U2RXIE               @ ((unsigned)&IEC1)*8+8;
static volatile bit U2TXIE               @ ((unsigned)&IEC1)*8+9;
static volatile bit SPI2IE               @ ((unsigned)&IEC1)*8+10;
static volatile bit C1IE                 @ ((unsigned)&IEC1)*8+11;
static volatile bit IC3IE                @ ((unsigned)&IEC1)*8+12;
static volatile bit IC4IE                @ ((unsigned)&IEC1)*8+13;
static volatile bit IC5IE                @ ((unsigned)&IEC1)*8+14;
static volatile bit IC6IE                @ ((unsigned)&IEC1)*8+15;

// Register: IEC2
static volatile unsigned int            IEC2                @ 0x090;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned FLTBIE              : 1;
        volatile unsigned FLTAIE              : 1;
        volatile unsigned                     : 2;
        volatile unsigned QEIIE               : 1;
        volatile unsigned PWMIE               : 1;
        volatile unsigned C2IE                : 1;
        volatile unsigned INT4IE              : 1;
        volatile unsigned INT3IE              : 1;
        volatile unsigned OC8IE               : 1;
        volatile unsigned OC7IE               : 1;
        volatile unsigned OC6IE               : 1;
        volatile unsigned OC5IE               : 1;
    };
} IEC2bits @ 0x090;
// bit variable definitions
static volatile bit OC5IE                @ ((unsigned)&IEC2)*8+0;
static volatile bit OC6IE                @ ((unsigned)&IEC2)*8+1;
static volatile bit OC7IE                @ ((unsigned)&IEC2)*8+2;
static volatile bit OC8IE                @ ((unsigned)&IEC2)*8+3;
static volatile bit INT3IE               @ ((unsigned)&IEC2)*8+4;
static volatile bit INT4IE               @ ((unsigned)&IEC2)*8+5;
static volatile bit C2IE                 @ ((unsigned)&IEC2)*8+6;
static volatile bit PWMIE                @ ((unsigned)&IEC2)*8+7;
static volatile bit QEIIE                @ ((unsigned)&IEC2)*8+8;
static volatile bit FLTAIE               @ ((unsigned)&IEC2)*8+11;
static volatile bit FLTBIE               @ ((unsigned)&IEC2)*8+12;

// Register: IPC0
static volatile unsigned int            IPC0                @ 0x094;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned T1IP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned OC1IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned IC1IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned INT0IP              : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned T1IP2               : 1;
        volatile unsigned T1IP1               : 1;
        volatile unsigned T1IP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned OC1IP2              : 1;
        volatile unsigned OC1IP1              : 1;
        volatile unsigned OC1IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned IC1IP2              : 1;
        volatile unsigned IC1IP1              : 1;
        volatile unsigned IC1IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned INT0IP2             : 1;
        volatile unsigned INT0IP1             : 1;
        volatile unsigned INT0IP0             : 1;
    };
} IPC0bits @ 0x094;
// bit variable definitions
static volatile bit INT0IP0              @ ((unsigned)&IPC0)*8+0;
static volatile bit INT0IP1              @ ((unsigned)&IPC0)*8+1;
static volatile bit INT0IP2              @ ((unsigned)&IPC0)*8+2;
static volatile bit IC1IP0               @ ((unsigned)&IPC0)*8+4;
static volatile bit IC1IP1               @ ((unsigned)&IPC0)*8+5;
static volatile bit IC1IP2               @ ((unsigned)&IPC0)*8+6;
static volatile bit OC1IP0               @ ((unsigned)&IPC0)*8+8;
static volatile bit OC1IP1               @ ((unsigned)&IPC0)*8+9;
static volatile bit OC1IP2               @ ((unsigned)&IPC0)*8+10;
static volatile bit T1IP0                @ ((unsigned)&IPC0)*8+12;
static volatile bit T1IP1                @ ((unsigned)&IPC0)*8+13;
static volatile bit T1IP2                @ ((unsigned)&IPC0)*8+14;

// Register: IPC1
static volatile unsigned int            IPC1                @ 0x096;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned T3IP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned T2IP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned OC2IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned IC2IP               : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned T3IP2               : 1;
        volatile unsigned T3IP1               : 1;
        volatile unsigned T3IP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned T2IP2               : 1;
        volatile unsigned T2IP1               : 1;
        volatile unsigned T2IP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned OC2IP2              : 1;
        volatile unsigned OC2IP1              : 1;
        volatile unsigned OC2IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned IC2IP2              : 1;
        volatile unsigned IC2IP1              : 1;
        volatile unsigned IC2IP0              : 1;
    };
} IPC1bits @ 0x096;
// bit variable definitions
static volatile bit IC2IP0               @ ((unsigned)&IPC1)*8+0;
static volatile bit IC2IP1               @ ((unsigned)&IPC1)*8+1;
static volatile bit IC2IP2               @ ((unsigned)&IPC1)*8+2;
static volatile bit OC2IP0               @ ((unsigned)&IPC1)*8+4;
static volatile bit OC2IP1               @ ((unsigned)&IPC1)*8+5;
static volatile bit OC2IP2               @ ((unsigned)&IPC1)*8+6;
static volatile bit T2IP0                @ ((unsigned)&IPC1)*8+8;
static volatile bit T2IP1                @ ((unsigned)&IPC1)*8+9;
static volatile bit T2IP2                @ ((unsigned)&IPC1)*8+10;
static volatile bit T3IP0                @ ((unsigned)&IPC1)*8+12;
static volatile bit T3IP1                @ ((unsigned)&IPC1)*8+13;
static volatile bit T3IP2                @ ((unsigned)&IPC1)*8+14;

// Register: IPC2
static volatile unsigned int            IPC2                @ 0x098;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned ADIP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned U1TXIP              : 3;
        volatile unsigned                     : 1;
        volatile unsigned U1RXIP              : 3;
        volatile unsigned                     : 1;
        volatile unsigned SPI1IP              : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned ADIP2               : 1;
        volatile unsigned ADIP1               : 1;
        volatile unsigned ADIP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned U1TXIP2             : 1;
        volatile unsigned U1TXIP1             : 1;
        volatile unsigned U1TXIP0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned U1RXIP2             : 1;
        volatile unsigned U1RXIP1             : 1;
        volatile unsigned U1RXIP0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned SPI1IP2             : 1;
        volatile unsigned SPI1IP1             : 1;
        volatile unsigned SPI1IP0             : 1;
    };
} IPC2bits @ 0x098;
// bit variable definitions
static volatile bit SPI1IP0              @ ((unsigned)&IPC2)*8+0;
static volatile bit SPI1IP1              @ ((unsigned)&IPC2)*8+1;
static volatile bit SPI1IP2              @ ((unsigned)&IPC2)*8+2;
static volatile bit U1RXIP0              @ ((unsigned)&IPC2)*8+4;
static volatile bit U1RXIP1              @ ((unsigned)&IPC2)*8+5;
static volatile bit U1RXIP2              @ ((unsigned)&IPC2)*8+6;
static volatile bit U1TXIP0              @ ((unsigned)&IPC2)*8+8;
static volatile bit U1TXIP1              @ ((unsigned)&IPC2)*8+9;
static volatile bit U1TXIP2              @ ((unsigned)&IPC2)*8+10;
static volatile bit ADIP0                @ ((unsigned)&IPC2)*8+12;
static volatile bit ADIP1                @ ((unsigned)&IPC2)*8+13;
static volatile bit ADIP2                @ ((unsigned)&IPC2)*8+14;

// Register: IPC3
static volatile unsigned int            IPC3                @ 0x09A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned CNIP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned MI2CIP              : 3;
        volatile unsigned                     : 1;
        volatile unsigned SI2CIP              : 3;
        volatile unsigned                     : 1;
        volatile unsigned NVMIP               : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned CNIP2               : 1;
        volatile unsigned CNIP1               : 1;
        volatile unsigned CNIP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned MI2CIP2             : 1;
        volatile unsigned MI2CIP1             : 1;
        volatile unsigned MI2CIP0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned SI2CIP2             : 1;
        volatile unsigned SI2CIP1             : 1;
        volatile unsigned SI2CIP0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned NVMIP2              : 1;
        volatile unsigned NVMIP1              : 1;
        volatile unsigned NVMIP0              : 1;
    };
} IPC3bits @ 0x09A;
// bit variable definitions
static volatile bit NVMIP0               @ ((unsigned)&IPC3)*8+0;
static volatile bit NVMIP1               @ ((unsigned)&IPC3)*8+1;
static volatile bit NVMIP2               @ ((unsigned)&IPC3)*8+2;
static volatile bit SI2CIP0              @ ((unsigned)&IPC3)*8+4;
static volatile bit SI2CIP1              @ ((unsigned)&IPC3)*8+5;
static volatile bit SI2CIP2              @ ((unsigned)&IPC3)*8+6;
static volatile bit MI2CIP0              @ ((unsigned)&IPC3)*8+8;
static volatile bit MI2CIP1              @ ((unsigned)&IPC3)*8+9;
static volatile bit MI2CIP2              @ ((unsigned)&IPC3)*8+10;
static volatile bit CNIP0                @ ((unsigned)&IPC3)*8+12;
static volatile bit CNIP1                @ ((unsigned)&IPC3)*8+13;
static volatile bit CNIP2                @ ((unsigned)&IPC3)*8+14;

// Register: IPC4
static volatile unsigned int            IPC4                @ 0x09C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned OC3IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned IC8IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned IC7IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned INT1IP              : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned OC3IP2              : 1;
        volatile unsigned OC3IP1              : 1;
        volatile unsigned OC3IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned IC8IP2              : 1;
        volatile unsigned IC8IP1              : 1;
        volatile unsigned IC8IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned IC7IP2              : 1;
        volatile unsigned IC7IP1              : 1;
        volatile unsigned IC7IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned INT1IP2             : 1;
        volatile unsigned INT1IP1             : 1;
        volatile unsigned INT1IP0             : 1;
    };
} IPC4bits @ 0x09C;
// bit variable definitions
static volatile bit INT1IP0              @ ((unsigned)&IPC4)*8+0;
static volatile bit INT1IP1              @ ((unsigned)&IPC4)*8+1;
static volatile bit INT1IP2              @ ((unsigned)&IPC4)*8+2;
static volatile bit IC7IP0               @ ((unsigned)&IPC4)*8+4;
static volatile bit IC7IP1               @ ((unsigned)&IPC4)*8+5;
static volatile bit IC7IP2               @ ((unsigned)&IPC4)*8+6;
static volatile bit IC8IP0               @ ((unsigned)&IPC4)*8+8;
static volatile bit IC8IP1               @ ((unsigned)&IPC4)*8+9;
static volatile bit IC8IP2               @ ((unsigned)&IPC4)*8+10;
static volatile bit OC3IP0               @ ((unsigned)&IPC4)*8+12;
static volatile bit OC3IP1               @ ((unsigned)&IPC4)*8+13;
static volatile bit OC3IP2               @ ((unsigned)&IPC4)*8+14;

// Register: IPC5
static volatile unsigned int            IPC5                @ 0x09E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned INT2IP              : 3;
        volatile unsigned                     : 1;
        volatile unsigned T5IP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned T4IP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned OC4IP               : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned INT2IP2             : 1;
        volatile unsigned INT2IP1             : 1;
        volatile unsigned INT2IP0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned T5IP2               : 1;
        volatile unsigned T5IP1               : 1;
        volatile unsigned T5IP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned T4IP2               : 1;
        volatile unsigned T4IP1               : 1;
        volatile unsigned T4IP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned OC4IP2              : 1;
        volatile unsigned OC4IP1              : 1;
        volatile unsigned OC4IP0              : 1;
    };
} IPC5bits @ 0x09E;
// bit variable definitions
static volatile bit OC4IP0               @ ((unsigned)&IPC5)*8+0;
static volatile bit OC4IP1               @ ((unsigned)&IPC5)*8+1;
static volatile bit OC4IP2               @ ((unsigned)&IPC5)*8+2;
static volatile bit T4IP0                @ ((unsigned)&IPC5)*8+4;
static volatile bit T4IP1                @ ((unsigned)&IPC5)*8+5;
static volatile bit T4IP2                @ ((unsigned)&IPC5)*8+6;
static volatile bit T5IP0                @ ((unsigned)&IPC5)*8+8;
static volatile bit T5IP1                @ ((unsigned)&IPC5)*8+9;
static volatile bit T5IP2                @ ((unsigned)&IPC5)*8+10;
static volatile bit INT2IP0              @ ((unsigned)&IPC5)*8+12;
static volatile bit INT2IP1              @ ((unsigned)&IPC5)*8+13;
static volatile bit INT2IP2              @ ((unsigned)&IPC5)*8+14;

// Register: IPC6
static volatile unsigned int            IPC6                @ 0x0A0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned C1IP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned SPI2IP              : 3;
        volatile unsigned                     : 1;
        volatile unsigned U2TXIP              : 3;
        volatile unsigned                     : 1;
        volatile unsigned U2RXIP              : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned C1IP2               : 1;
        volatile unsigned C1IP1               : 1;
        volatile unsigned C1IP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned SPI2IP2             : 1;
        volatile unsigned SPI2IP1             : 1;
        volatile unsigned SPI2IP0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned U2TXIP2             : 1;
        volatile unsigned U2TXIP1             : 1;
        volatile unsigned U2TXIP0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned U2RXIP2             : 1;
        volatile unsigned U2RXIP1             : 1;
        volatile unsigned U2RXIP0             : 1;
    };
} IPC6bits @ 0x0A0;
// bit variable definitions
static volatile bit U2RXIP0              @ ((unsigned)&IPC6)*8+0;
static volatile bit U2RXIP1              @ ((unsigned)&IPC6)*8+1;
static volatile bit U2RXIP2              @ ((unsigned)&IPC6)*8+2;
static volatile bit U2TXIP0              @ ((unsigned)&IPC6)*8+4;
static volatile bit U2TXIP1              @ ((unsigned)&IPC6)*8+5;
static volatile bit U2TXIP2              @ ((unsigned)&IPC6)*8+6;
static volatile bit SPI2IP0              @ ((unsigned)&IPC6)*8+8;
static volatile bit SPI2IP1              @ ((unsigned)&IPC6)*8+9;
static volatile bit SPI2IP2              @ ((unsigned)&IPC6)*8+10;
static volatile bit C1IP0                @ ((unsigned)&IPC6)*8+12;
static volatile bit C1IP1                @ ((unsigned)&IPC6)*8+13;
static volatile bit C1IP2                @ ((unsigned)&IPC6)*8+14;

// Register: IPC7
static volatile unsigned int            IPC7                @ 0x0A2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned IC6IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned IC5IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned IC4IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned IC3IP               : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned IC6IP2              : 1;
        volatile unsigned IC6IP1              : 1;
        volatile unsigned IC6IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned IC5IP2              : 1;
        volatile unsigned IC5IP1              : 1;
        volatile unsigned IC5IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned IC4IP2              : 1;
        volatile unsigned IC4IP1              : 1;
        volatile unsigned IC4IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned IC3IP2              : 1;
        volatile unsigned IC3IP1              : 1;
        volatile unsigned IC3IP0              : 1;
    };
} IPC7bits @ 0x0A2;
// bit variable definitions
static volatile bit IC3IP0               @ ((unsigned)&IPC7)*8+0;
static volatile bit IC3IP1               @ ((unsigned)&IPC7)*8+1;
static volatile bit IC3IP2               @ ((unsigned)&IPC7)*8+2;
static volatile bit IC4IP0               @ ((unsigned)&IPC7)*8+4;
static volatile bit IC4IP1               @ ((unsigned)&IPC7)*8+5;
static volatile bit IC4IP2               @ ((unsigned)&IPC7)*8+6;
static volatile bit IC5IP0               @ ((unsigned)&IPC7)*8+8;
static volatile bit IC5IP1               @ ((unsigned)&IPC7)*8+9;
static volatile bit IC5IP2               @ ((unsigned)&IPC7)*8+10;
static volatile bit IC6IP0               @ ((unsigned)&IPC7)*8+12;
static volatile bit IC6IP1               @ ((unsigned)&IPC7)*8+13;
static volatile bit IC6IP2               @ ((unsigned)&IPC7)*8+14;

// Register: IPC8
static volatile unsigned int            IPC8                @ 0x0A4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned OC8IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned OC7IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned OC6IP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned OC5IP               : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned OC8IP2              : 1;
        volatile unsigned OC8IP1              : 1;
        volatile unsigned OC8IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned OC7IP2              : 1;
        volatile unsigned OC7IP1              : 1;
        volatile unsigned OC7IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned OC6IP2              : 1;
        volatile unsigned OC6IP1              : 1;
        volatile unsigned OC6IP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned OC5IP2              : 1;
        volatile unsigned OC5IP1              : 1;
        volatile unsigned OC5IP0              : 1;
    };
} IPC8bits @ 0x0A4;
// bit variable definitions
static volatile bit OC5IP0               @ ((unsigned)&IPC8)*8+0;
static volatile bit OC5IP1               @ ((unsigned)&IPC8)*8+1;
static volatile bit OC5IP2               @ ((unsigned)&IPC8)*8+2;
static volatile bit OC6IP0               @ ((unsigned)&IPC8)*8+4;
static volatile bit OC6IP1               @ ((unsigned)&IPC8)*8+5;
static volatile bit OC6IP2               @ ((unsigned)&IPC8)*8+6;
static volatile bit OC7IP0               @ ((unsigned)&IPC8)*8+8;
static volatile bit OC7IP1               @ ((unsigned)&IPC8)*8+9;
static volatile bit OC7IP2               @ ((unsigned)&IPC8)*8+10;
static volatile bit OC8IP0               @ ((unsigned)&IPC8)*8+12;
static volatile bit OC8IP1               @ ((unsigned)&IPC8)*8+13;
static volatile bit OC8IP2               @ ((unsigned)&IPC8)*8+14;

// Register: IPC9
static volatile unsigned int            IPC9                @ 0x0A6;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned PWMIP               : 3;
        volatile unsigned                     : 1;
        volatile unsigned C2IP                : 3;
        volatile unsigned                     : 1;
        volatile unsigned INT4IP              : 3;
        volatile unsigned                     : 1;
        volatile unsigned INT3IP              : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned PWMIP2              : 1;
        volatile unsigned PWMIP1              : 1;
        volatile unsigned PWMIP0              : 1;
        volatile unsigned                     : 1;
        volatile unsigned C2IP2               : 1;
        volatile unsigned C2IP1               : 1;
        volatile unsigned C2IP0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned INT4IP2             : 1;
        volatile unsigned INT4IP1             : 1;
        volatile unsigned INT4IP0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned INT3IP2             : 1;
        volatile unsigned INT3IP1             : 1;
        volatile unsigned INT3IP0             : 1;
    };
} IPC9bits @ 0x0A6;
// bit variable definitions
static volatile bit INT3IP0              @ ((unsigned)&IPC9)*8+0;
static volatile bit INT3IP1              @ ((unsigned)&IPC9)*8+1;
static volatile bit INT3IP2              @ ((unsigned)&IPC9)*8+2;
static volatile bit INT4IP0              @ ((unsigned)&IPC9)*8+4;
static volatile bit INT4IP1              @ ((unsigned)&IPC9)*8+5;
static volatile bit INT4IP2              @ ((unsigned)&IPC9)*8+6;
static volatile bit C2IP0                @ ((unsigned)&IPC9)*8+8;
static volatile bit C2IP1                @ ((unsigned)&IPC9)*8+9;
static volatile bit C2IP2                @ ((unsigned)&IPC9)*8+10;
static volatile bit PWMIP0               @ ((unsigned)&IPC9)*8+12;
static volatile bit PWMIP1               @ ((unsigned)&IPC9)*8+13;
static volatile bit PWMIP2               @ ((unsigned)&IPC9)*8+14;

// Register: IPC10
static volatile unsigned int            IPC10               @ 0x0A8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned FLTAIP              : 3;
        volatile unsigned                     : 9;
        volatile unsigned QEIIP               : 3;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned FLTAIP2             : 1;
        volatile unsigned FLTAIP1             : 1;
        volatile unsigned FLTAIP0             : 1;
        volatile unsigned                     : 9;
        volatile unsigned QEIIP2              : 1;
        volatile unsigned QEIIP1              : 1;
        volatile unsigned QEIIP0              : 1;
    };
} IPC10bits @ 0x0A8;
// bit variable definitions
static volatile bit QEIIP0               @ ((unsigned)&IPC10)*8+0;
static volatile bit QEIIP1               @ ((unsigned)&IPC10)*8+1;
static volatile bit QEIIP2               @ ((unsigned)&IPC10)*8+2;
static volatile bit FLTAIP0              @ ((unsigned)&IPC10)*8+12;
static volatile bit FLTAIP1              @ ((unsigned)&IPC10)*8+13;
static volatile bit FLTAIP2              @ ((unsigned)&IPC10)*8+14;

// Register: IPC11
static volatile unsigned int            IPC11               @ 0x0AA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 13;
        volatile unsigned FLTBIP              : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned FLTBIP2             : 1;
        volatile unsigned FLTBIP1             : 1;
        volatile unsigned FLTBIP0             : 1;
    };
} IPC11bits @ 0x0AA;
// bit variable definitions
static volatile bit FLTBIP0              @ ((unsigned)&IPC11)*8+0;
static volatile bit FLTBIP1              @ ((unsigned)&IPC11)*8+1;
static volatile bit FLTBIP2              @ ((unsigned)&IPC11)*8+2;

// Register: INTTREG
static volatile unsigned int            INTTREG             @ 0x0B0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned IRQtoCPU            : 1;
        volatile unsigned TMODE               : 1;
        volatile unsigned VHOLD               : 1;
        volatile unsigned                     : 1;
        volatile unsigned ILR                 : 4;
        volatile unsigned                     : 2;
        volatile unsigned VECNUM              : 6;
    };
    struct {
        volatile unsigned                     : 4;
        volatile unsigned ILR3                : 1;
        volatile unsigned ILR2                : 1;
        volatile unsigned ILR1                : 1;
        volatile unsigned ILR0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned VECNUM5             : 1;
        volatile unsigned VECNUM4             : 1;
        volatile unsigned VECNUM3             : 1;
        volatile unsigned VECNUM2             : 1;
        volatile unsigned VECNUM1             : 1;
        volatile unsigned VECNUM0             : 1;
    };
} INTTREGbits @ 0x0B0;
// bit variable definitions
static volatile bit VHOLD                @ ((unsigned)&INTTREG)*8+13;
static volatile bit TMODE                @ ((unsigned)&INTTREG)*8+14;
static volatile bit IRQtoCPU             @ ((unsigned)&INTTREG)*8+15;
static volatile bit VECNUM0              @ ((unsigned)&INTTREG)*8+0;
static volatile bit VECNUM1              @ ((unsigned)&INTTREG)*8+1;
static volatile bit VECNUM2              @ ((unsigned)&INTTREG)*8+2;
static volatile bit VECNUM3              @ ((unsigned)&INTTREG)*8+3;
static volatile bit VECNUM4              @ ((unsigned)&INTTREG)*8+4;
static volatile bit VECNUM5              @ ((unsigned)&INTTREG)*8+5;
static volatile bit ILR0                 @ ((unsigned)&INTTREG)*8+8;
static volatile bit ILR1                 @ ((unsigned)&INTTREG)*8+9;
static volatile bit ILR2                 @ ((unsigned)&INTTREG)*8+10;
static volatile bit ILR3                 @ ((unsigned)&INTTREG)*8+11;

// Register: CNEN1
static volatile unsigned int            CNEN1               @ 0x0C0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CN15IE              : 1;
        volatile unsigned CN14IE              : 1;
        volatile unsigned CN13IE              : 1;
        volatile unsigned CN12IE              : 1;
        volatile unsigned CN11IE              : 1;
        volatile unsigned CN10IE              : 1;
        volatile unsigned CN9IE               : 1;
        volatile unsigned CN8IE               : 1;
        volatile unsigned CN7IE               : 1;
        volatile unsigned CN6IE               : 1;
        volatile unsigned CN5IE               : 1;
        volatile unsigned CN4IE               : 1;
        volatile unsigned CN3IE               : 1;
        volatile unsigned CN2IE               : 1;
        volatile unsigned CN1IE               : 1;
        volatile unsigned CN0IE               : 1;
    };
} CNEN1bits @ 0x0C0;
// bit variable definitions
static volatile bit CN0IE                @ ((unsigned)&CNEN1)*8+0;
static volatile bit CN1IE                @ ((unsigned)&CNEN1)*8+1;
static volatile bit CN2IE                @ ((unsigned)&CNEN1)*8+2;
static volatile bit CN3IE                @ ((unsigned)&CNEN1)*8+3;
static volatile bit CN4IE                @ ((unsigned)&CNEN1)*8+4;
static volatile bit CN5IE                @ ((unsigned)&CNEN1)*8+5;
static volatile bit CN6IE                @ ((unsigned)&CNEN1)*8+6;
static volatile bit CN7IE                @ ((unsigned)&CNEN1)*8+7;
static volatile bit CN8IE                @ ((unsigned)&CNEN1)*8+8;
static volatile bit CN9IE                @ ((unsigned)&CNEN1)*8+9;
static volatile bit CN10IE               @ ((unsigned)&CNEN1)*8+10;
static volatile bit CN11IE               @ ((unsigned)&CNEN1)*8+11;
static volatile bit CN12IE               @ ((unsigned)&CNEN1)*8+12;
static volatile bit CN13IE               @ ((unsigned)&CNEN1)*8+13;
static volatile bit CN14IE               @ ((unsigned)&CNEN1)*8+14;
static volatile bit CN15IE               @ ((unsigned)&CNEN1)*8+15;

// Register: CNEN2
static volatile unsigned int            CNEN2               @ 0x0C2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 10;
        volatile unsigned CN21IE              : 1;
        volatile unsigned CN20IE              : 1;
        volatile unsigned CN19IE              : 1;
        volatile unsigned CN18IE              : 1;
        volatile unsigned CN17IE              : 1;
        volatile unsigned CN16IE              : 1;
    };
} CNEN2bits @ 0x0C2;
// bit variable definitions
static volatile bit CN16IE               @ ((unsigned)&CNEN2)*8+0;
static volatile bit CN17IE               @ ((unsigned)&CNEN2)*8+1;
static volatile bit CN18IE               @ ((unsigned)&CNEN2)*8+2;
static volatile bit CN19IE               @ ((unsigned)&CNEN2)*8+3;
static volatile bit CN20IE               @ ((unsigned)&CNEN2)*8+4;
static volatile bit CN21IE               @ ((unsigned)&CNEN2)*8+5;

// Register: CNPU1
static volatile unsigned int            CNPU1               @ 0x0C4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CN15PUE             : 1;
        volatile unsigned CN14PUE             : 1;
        volatile unsigned CN13PUE             : 1;
        volatile unsigned CN12PUE             : 1;
        volatile unsigned CN11PUE             : 1;
        volatile unsigned CN10PUE             : 1;
        volatile unsigned CN9PUE              : 1;
        volatile unsigned CN8PUE              : 1;
        volatile unsigned CN7PUE              : 1;
        volatile unsigned CN6PUE              : 1;
        volatile unsigned CN5PUE              : 1;
        volatile unsigned CN4PUE              : 1;
        volatile unsigned CN3PUE              : 1;
        volatile unsigned CN2PUE              : 1;
        volatile unsigned CN1PUE              : 1;
        volatile unsigned CN0PUE              : 1;
    };
} CNPU1bits @ 0x0C4;
// bit variable definitions
static volatile bit CN0PUE               @ ((unsigned)&CNPU1)*8+0;
static volatile bit CN1PUE               @ ((unsigned)&CNPU1)*8+1;
static volatile bit CN2PUE               @ ((unsigned)&CNPU1)*8+2;
static volatile bit CN3PUE               @ ((unsigned)&CNPU1)*8+3;
static volatile bit CN4PUE               @ ((unsigned)&CNPU1)*8+4;
static volatile bit CN5PUE               @ ((unsigned)&CNPU1)*8+5;
static volatile bit CN6PUE               @ ((unsigned)&CNPU1)*8+6;
static volatile bit CN7PUE               @ ((unsigned)&CNPU1)*8+7;
static volatile bit CN8PUE               @ ((unsigned)&CNPU1)*8+8;
static volatile bit CN9PUE               @ ((unsigned)&CNPU1)*8+9;
static volatile bit CN10PUE              @ ((unsigned)&CNPU1)*8+10;
static volatile bit CN11PUE              @ ((unsigned)&CNPU1)*8+11;
static volatile bit CN12PUE              @ ((unsigned)&CNPU1)*8+12;
static volatile bit CN13PUE              @ ((unsigned)&CNPU1)*8+13;
static volatile bit CN14PUE              @ ((unsigned)&CNPU1)*8+14;
static volatile bit CN15PUE              @ ((unsigned)&CNPU1)*8+15;

// Register: CNPU2
static volatile unsigned int            CNPU2               @ 0x0C6;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 10;
        volatile unsigned CN21PUE             : 1;
        volatile unsigned CN20PUE             : 1;
        volatile unsigned CN19PUE             : 1;
        volatile unsigned CN18PUE             : 1;
        volatile unsigned CN17PUE             : 1;
        volatile unsigned CN16PUE             : 1;
    };
} CNPU2bits @ 0x0C6;
// bit variable definitions
static volatile bit CN16PUE              @ ((unsigned)&CNPU2)*8+0;
static volatile bit CN17PUE              @ ((unsigned)&CNPU2)*8+1;
static volatile bit CN18PUE              @ ((unsigned)&CNPU2)*8+2;
static volatile bit CN19PUE              @ ((unsigned)&CNPU2)*8+3;
static volatile bit CN20PUE              @ ((unsigned)&CNPU2)*8+4;
static volatile bit CN21PUE              @ ((unsigned)&CNPU2)*8+5;

// Register: TMR1
static volatile unsigned int            TMR1                @ 0x100;

// Register: PR1
static volatile unsigned int            PR1                 @ 0x102;

// Register: T1CON
static volatile unsigned int            T1CON               @ 0x104;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TON                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned TSIDL               : 1;
        volatile unsigned                     : 6;
        volatile unsigned TGATE               : 1;
        volatile unsigned TCKPS               : 2;
        volatile unsigned                     : 1;
        volatile unsigned TSYNC               : 1;
        volatile unsigned TCS                 : 1;
        volatile unsigned                     : 1;
    };
    struct {
        volatile unsigned                     : 10;
        volatile unsigned TCKPS1              : 1;
        volatile unsigned TCKPS0              : 1;
        volatile unsigned                     : 4;
    };
} T1CONbits @ 0x104;
// bit variable definitions
static volatile bit TCS                  @ ((unsigned)&T1CON)*8+1;
static volatile bit TSYNC                @ ((unsigned)&T1CON)*8+2;
static volatile bit TGATE                @ ((unsigned)&T1CON)*8+6;
static volatile bit TSIDL                @ ((unsigned)&T1CON)*8+13;
static volatile bit TON                  @ ((unsigned)&T1CON)*8+15;
static volatile bit TCKPS0               @ ((unsigned)&T1CON)*8+4;
static volatile bit TCKPS1               @ ((unsigned)&T1CON)*8+5;

// Register: TMR2
static volatile unsigned int            TMR2                @ 0x106;

// Register: TMR3HLD
static volatile unsigned int            TMR3HLD             @ 0x108;

// Register: TMR3
static volatile unsigned int            TMR3                @ 0x10A;

// Register: PR2
static volatile unsigned int            PR2                 @ 0x10C;

// Register: PR3
static volatile unsigned int            PR3                 @ 0x10E;

// Register: T2CON
static volatile unsigned int            T2CON               @ 0x110;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TON                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned TSIDL               : 1;
        volatile unsigned                     : 6;
        volatile unsigned TGATE               : 1;
        volatile unsigned TCKPS               : 2;
        volatile unsigned T32                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned TCS                 : 1;
        volatile unsigned                     : 1;
    };
    struct {
        volatile unsigned                     : 10;
        volatile unsigned TCKPS1              : 1;
        volatile unsigned TCKPS0              : 1;
        volatile unsigned                     : 4;
    };
} T2CONbits @ 0x110;
// bit variable definitions
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCS                  @ ((unsigned)&T2CON)*8+1;
static volatile bit T32                  @ ((unsigned)&T2CON)*8+3;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TGATE                @ ((unsigned)&T2CON)*8+6;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TSIDL                @ ((unsigned)&T2CON)*8+13;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TON                  @ ((unsigned)&T2CON)*8+15;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCKPS0               @ ((unsigned)&T2CON)*8+4;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCKPS1               @ ((unsigned)&T2CON)*8+5;

// Register: T3CON
static volatile unsigned int            T3CON               @ 0x112;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TON                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned TSIDL               : 1;
        volatile unsigned                     : 6;
        volatile unsigned TGATE               : 1;
        volatile unsigned TCKPS               : 2;
        volatile unsigned                     : 2;
        volatile unsigned TCS                 : 1;
        volatile unsigned                     : 1;
    };
    struct {
        volatile unsigned                     : 10;
        volatile unsigned TCKPS1              : 1;
        volatile unsigned TCKPS0              : 1;
        volatile unsigned                     : 4;
    };
} T3CONbits @ 0x112;
// bit variable definitions
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCS                  @ ((unsigned)&T3CON)*8+1;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TGATE                @ ((unsigned)&T3CON)*8+6;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TSIDL                @ ((unsigned)&T3CON)*8+13;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TON                  @ ((unsigned)&T3CON)*8+15;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCKPS0               @ ((unsigned)&T3CON)*8+4;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCKPS1               @ ((unsigned)&T3CON)*8+5;

// Register: TMR4
static volatile unsigned int            TMR4                @ 0x114;

// Register: TMR5HLD
static volatile unsigned int            TMR5HLD             @ 0x116;

// Register: TMR5
static volatile unsigned int            TMR5                @ 0x118;

// Register: PR4
static volatile unsigned int            PR4                 @ 0x11A;

// Register: PR5
static volatile unsigned int            PR5                 @ 0x11C;

// Register: T4CON
static volatile unsigned int            T4CON               @ 0x11E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TON                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned TSIDL               : 1;
        volatile unsigned                     : 6;
        volatile unsigned TGATE               : 1;
        volatile unsigned TCKPS               : 2;
        volatile unsigned T32                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned TCS                 : 1;
        volatile unsigned                     : 1;
    };
    struct {
        volatile unsigned                     : 10;
        volatile unsigned TCKPS1              : 1;
        volatile unsigned TCKPS0              : 1;
        volatile unsigned                     : 4;
    };
} T4CONbits @ 0x11E;
// bit variable definitions
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCS                  @ ((unsigned)&T4CON)*8+1;
// duplicate bit in register T2CON, definition disabled
// static volatile bit T32                  @ ((unsigned)&T4CON)*8+3;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TGATE                @ ((unsigned)&T4CON)*8+6;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TSIDL                @ ((unsigned)&T4CON)*8+13;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TON                  @ ((unsigned)&T4CON)*8+15;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCKPS0               @ ((unsigned)&T4CON)*8+4;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCKPS1               @ ((unsigned)&T4CON)*8+5;

// Register: T5CON
static volatile unsigned int            T5CON               @ 0x120;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TON                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned TSIDL               : 1;
        volatile unsigned                     : 6;
        volatile unsigned TGATE               : 1;
        volatile unsigned TCKPS               : 2;
        volatile unsigned                     : 2;
        volatile unsigned TCS                 : 1;
        volatile unsigned                     : 1;
    };
    struct {
        volatile unsigned                     : 10;
        volatile unsigned TCKPS1              : 1;
        volatile unsigned TCKPS0              : 1;
        volatile unsigned                     : 4;
    };
} T5CONbits @ 0x120;
// bit variable definitions
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCS                  @ ((unsigned)&T5CON)*8+1;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TGATE                @ ((unsigned)&T5CON)*8+6;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TSIDL                @ ((unsigned)&T5CON)*8+13;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TON                  @ ((unsigned)&T5CON)*8+15;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCKPS0               @ ((unsigned)&T5CON)*8+4;
// duplicate bit in register T1CON, definition disabled
// static volatile bit TCKPS1               @ ((unsigned)&T5CON)*8+5;

// Register: QEICON
static volatile unsigned int            QEICON              @ 0x122;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CNTERR              : 1;
        volatile unsigned                     : 1;
        volatile unsigned QEISIDL             : 1;
        volatile unsigned INDX                : 1;
        volatile unsigned UPDN                : 1;
        volatile unsigned QEIM2               : 1;
        volatile unsigned QEIM1               : 1;
        volatile unsigned QEIM0               : 1;
        volatile unsigned SWPAB               : 1;
        volatile unsigned PCDOUT              : 1;
        volatile unsigned TQGATE              : 1;
        volatile unsigned TQCKPS1             : 1;
        volatile unsigned TQCKPS0             : 1;
        volatile unsigned POSRES              : 1;
        volatile unsigned TQCS                : 1;
        volatile unsigned UPDN_SRC            : 1;
    };
} QEICONbits @ 0x122;
// bit variable definitions
static volatile bit UPDN_SRC             @ ((unsigned)&QEICON)*8+0;
static volatile bit TQCS                 @ ((unsigned)&QEICON)*8+1;
static volatile bit POSRES               @ ((unsigned)&QEICON)*8+2;
static volatile bit TQCKPS0              @ ((unsigned)&QEICON)*8+3;
static volatile bit TQCKPS1              @ ((unsigned)&QEICON)*8+4;
static volatile bit TQGATE               @ ((unsigned)&QEICON)*8+5;
static volatile bit PCDOUT               @ ((unsigned)&QEICON)*8+6;
static volatile bit SWPAB                @ ((unsigned)&QEICON)*8+7;
static volatile bit QEIM0                @ ((unsigned)&QEICON)*8+8;
static volatile bit QEIM1                @ ((unsigned)&QEICON)*8+9;
static volatile bit QEIM2                @ ((unsigned)&QEICON)*8+10;
static volatile bit UPDN                 @ ((unsigned)&QEICON)*8+11;
static volatile bit INDX                 @ ((unsigned)&QEICON)*8+12;
static volatile bit QEISIDL              @ ((unsigned)&QEICON)*8+13;
static volatile bit CNTERR               @ ((unsigned)&QEICON)*8+15;

// Register: DFLTCON
static volatile unsigned int            DFLTCON             @ 0x124;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 5;
        volatile unsigned IMV1                : 1;
        volatile unsigned IMV0                : 1;
        volatile unsigned CEID                : 1;
        volatile unsigned QEOUT               : 1;
        volatile unsigned QECK2               : 1;
        volatile unsigned QECK1               : 1;
        volatile unsigned QECK0               : 1;
        volatile unsigned INDOUT              : 1;
        volatile unsigned INDCK2              : 1;
        volatile unsigned INDCK1              : 1;
        volatile unsigned INDCK0              : 1;
    };
} DFLTCONbits @ 0x124;
// bit variable definitions
static volatile bit INDCK0               @ ((unsigned)&DFLTCON)*8+0;
static volatile bit INDCK1               @ ((unsigned)&DFLTCON)*8+1;
static volatile bit INDCK2               @ ((unsigned)&DFLTCON)*8+2;
static volatile bit INDOUT               @ ((unsigned)&DFLTCON)*8+3;
static volatile bit QECK0                @ ((unsigned)&DFLTCON)*8+4;
static volatile bit QECK1                @ ((unsigned)&DFLTCON)*8+5;
static volatile bit QECK2                @ ((unsigned)&DFLTCON)*8+6;
static volatile bit QEOUT                @ ((unsigned)&DFLTCON)*8+7;
static volatile bit CEID                 @ ((unsigned)&DFLTCON)*8+8;
static volatile bit IMV0                 @ ((unsigned)&DFLTCON)*8+9;
static volatile bit IMV1                 @ ((unsigned)&DFLTCON)*8+10;

// Register: POSCNT
static volatile unsigned int            POSCNT              @ 0x126;

// Register: MAXCNT
static volatile unsigned int            MAXCNT              @ 0x128;

// Register: IC1BUF
static volatile unsigned int            IC1BUF              @ 0x140;

// Register: IC1CON
static volatile unsigned int            IC1CON              @ 0x142;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned ICTMR               : 1;
        volatile unsigned ICI                 : 2;
        volatile unsigned ICOV                : 1;
        volatile unsigned ICBNE               : 1;
        volatile unsigned ICM                 : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned ICI1                : 1;
        volatile unsigned ICI0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned ICM2                : 1;
        volatile unsigned ICM1                : 1;
        volatile unsigned ICM0                : 1;
    };
} IC1CONbits @ 0x142;
// bit variable definitions
static volatile bit ICBNE                @ ((unsigned)&IC1CON)*8+3;
static volatile bit ICOV                 @ ((unsigned)&IC1CON)*8+4;
static volatile bit ICTMR                @ ((unsigned)&IC1CON)*8+7;
static volatile bit ICSIDL               @ ((unsigned)&IC1CON)*8+13;
static volatile bit ICM0                 @ ((unsigned)&IC1CON)*8+0;
static volatile bit ICM1                 @ ((unsigned)&IC1CON)*8+1;
static volatile bit ICM2                 @ ((unsigned)&IC1CON)*8+2;
static volatile bit ICI0                 @ ((unsigned)&IC1CON)*8+5;
static volatile bit ICI1                 @ ((unsigned)&IC1CON)*8+6;

// Register: IC2BUF
static volatile unsigned int            IC2BUF              @ 0x144;

// Register: IC2CON
static volatile unsigned int            IC2CON              @ 0x146;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned ICTMR               : 1;
        volatile unsigned ICI                 : 2;
        volatile unsigned ICOV                : 1;
        volatile unsigned ICBNE               : 1;
        volatile unsigned ICM                 : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned ICI1                : 1;
        volatile unsigned ICI0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned ICM2                : 1;
        volatile unsigned ICM1                : 1;
        volatile unsigned ICM0                : 1;
    };
} IC2CONbits @ 0x146;
// bit variable definitions
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICBNE                @ ((unsigned)&IC2CON)*8+3;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICOV                 @ ((unsigned)&IC2CON)*8+4;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICTMR                @ ((unsigned)&IC2CON)*8+7;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICSIDL               @ ((unsigned)&IC2CON)*8+13;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM0                 @ ((unsigned)&IC2CON)*8+0;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM1                 @ ((unsigned)&IC2CON)*8+1;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM2                 @ ((unsigned)&IC2CON)*8+2;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI0                 @ ((unsigned)&IC2CON)*8+5;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI1                 @ ((unsigned)&IC2CON)*8+6;

// Register: IC3BUF
static volatile unsigned int            IC3BUF              @ 0x148;

// Register: IC3CON
static volatile unsigned int            IC3CON              @ 0x14A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned ICTMR               : 1;
        volatile unsigned ICI                 : 2;
        volatile unsigned ICOV                : 1;
        volatile unsigned ICBNE               : 1;
        volatile unsigned ICM                 : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned ICI1                : 1;
        volatile unsigned ICI0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned ICM2                : 1;
        volatile unsigned ICM1                : 1;
        volatile unsigned ICM0                : 1;
    };
} IC3CONbits @ 0x14A;
// bit variable definitions
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICBNE                @ ((unsigned)&IC3CON)*8+3;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICOV                 @ ((unsigned)&IC3CON)*8+4;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICTMR                @ ((unsigned)&IC3CON)*8+7;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICSIDL               @ ((unsigned)&IC3CON)*8+13;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM0                 @ ((unsigned)&IC3CON)*8+0;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM1                 @ ((unsigned)&IC3CON)*8+1;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM2                 @ ((unsigned)&IC3CON)*8+2;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI0                 @ ((unsigned)&IC3CON)*8+5;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI1                 @ ((unsigned)&IC3CON)*8+6;

// Register: IC4BUF
static volatile unsigned int            IC4BUF              @ 0x14C;

// Register: IC4CON
static volatile unsigned int            IC4CON              @ 0x14E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned ICTMR               : 1;
        volatile unsigned ICI                 : 2;
        volatile unsigned ICOV                : 1;
        volatile unsigned ICBNE               : 1;
        volatile unsigned ICM                 : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned ICI1                : 1;
        volatile unsigned ICI0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned ICM2                : 1;
        volatile unsigned ICM1                : 1;
        volatile unsigned ICM0                : 1;
    };
} IC4CONbits @ 0x14E;
// bit variable definitions
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICBNE                @ ((unsigned)&IC4CON)*8+3;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICOV                 @ ((unsigned)&IC4CON)*8+4;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICTMR                @ ((unsigned)&IC4CON)*8+7;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICSIDL               @ ((unsigned)&IC4CON)*8+13;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM0                 @ ((unsigned)&IC4CON)*8+0;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM1                 @ ((unsigned)&IC4CON)*8+1;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM2                 @ ((unsigned)&IC4CON)*8+2;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI0                 @ ((unsigned)&IC4CON)*8+5;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI1                 @ ((unsigned)&IC4CON)*8+6;

// Register: IC5BUF
static volatile unsigned int            IC5BUF              @ 0x150;

// Register: IC5CON
static volatile unsigned int            IC5CON              @ 0x152;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned ICTMR               : 1;
        volatile unsigned ICI                 : 2;
        volatile unsigned ICOV                : 1;
        volatile unsigned ICBNE               : 1;
        volatile unsigned ICM                 : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned ICI1                : 1;
        volatile unsigned ICI0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned ICM2                : 1;
        volatile unsigned ICM1                : 1;
        volatile unsigned ICM0                : 1;
    };
} IC5CONbits @ 0x152;
// bit variable definitions
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICBNE                @ ((unsigned)&IC5CON)*8+3;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICOV                 @ ((unsigned)&IC5CON)*8+4;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICTMR                @ ((unsigned)&IC5CON)*8+7;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICSIDL               @ ((unsigned)&IC5CON)*8+13;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM0                 @ ((unsigned)&IC5CON)*8+0;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM1                 @ ((unsigned)&IC5CON)*8+1;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM2                 @ ((unsigned)&IC5CON)*8+2;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI0                 @ ((unsigned)&IC5CON)*8+5;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI1                 @ ((unsigned)&IC5CON)*8+6;

// Register: IC6BUF
static volatile unsigned int            IC6BUF              @ 0x154;

// Register: IC6CON
static volatile unsigned int            IC6CON              @ 0x156;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned ICTMR               : 1;
        volatile unsigned ICI                 : 2;
        volatile unsigned ICOV                : 1;
        volatile unsigned ICBNE               : 1;
        volatile unsigned ICM                 : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned ICI1                : 1;
        volatile unsigned ICI0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned ICM2                : 1;
        volatile unsigned ICM1                : 1;
        volatile unsigned ICM0                : 1;
    };
} IC6CONbits @ 0x156;
// bit variable definitions
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICBNE                @ ((unsigned)&IC6CON)*8+3;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICOV                 @ ((unsigned)&IC6CON)*8+4;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICTMR                @ ((unsigned)&IC6CON)*8+7;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICSIDL               @ ((unsigned)&IC6CON)*8+13;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM0                 @ ((unsigned)&IC6CON)*8+0;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM1                 @ ((unsigned)&IC6CON)*8+1;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM2                 @ ((unsigned)&IC6CON)*8+2;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI0                 @ ((unsigned)&IC6CON)*8+5;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI1                 @ ((unsigned)&IC6CON)*8+6;

// Register: IC7BUF
static volatile unsigned int            IC7BUF              @ 0x158;

// Register: IC7CON
static volatile unsigned int            IC7CON              @ 0x15A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned ICTMR               : 1;
        volatile unsigned ICI                 : 2;
        volatile unsigned ICOV                : 1;
        volatile unsigned ICBNE               : 1;
        volatile unsigned ICM                 : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned ICI1                : 1;
        volatile unsigned ICI0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned ICM2                : 1;
        volatile unsigned ICM1                : 1;
        volatile unsigned ICM0                : 1;
    };
} IC7CONbits @ 0x15A;
// bit variable definitions
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICBNE                @ ((unsigned)&IC7CON)*8+3;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICOV                 @ ((unsigned)&IC7CON)*8+4;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICTMR                @ ((unsigned)&IC7CON)*8+7;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICSIDL               @ ((unsigned)&IC7CON)*8+13;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM0                 @ ((unsigned)&IC7CON)*8+0;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM1                 @ ((unsigned)&IC7CON)*8+1;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM2                 @ ((unsigned)&IC7CON)*8+2;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI0                 @ ((unsigned)&IC7CON)*8+5;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI1                 @ ((unsigned)&IC7CON)*8+6;

// Register: IC8BUF
static volatile unsigned int            IC8BUF              @ 0x15C;

// Register: IC8CON
static volatile unsigned int            IC8CON              @ 0x15E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned ICSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned ICTMR               : 1;
        volatile unsigned ICI                 : 2;
        volatile unsigned ICOV                : 1;
        volatile unsigned ICBNE               : 1;
        volatile unsigned ICM                 : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned ICI1                : 1;
        volatile unsigned ICI0                : 1;
        volatile unsigned                     : 2;
        volatile unsigned ICM2                : 1;
        volatile unsigned ICM1                : 1;
        volatile unsigned ICM0                : 1;
    };
} IC8CONbits @ 0x15E;
// bit variable definitions
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICBNE                @ ((unsigned)&IC8CON)*8+3;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICOV                 @ ((unsigned)&IC8CON)*8+4;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICTMR                @ ((unsigned)&IC8CON)*8+7;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICSIDL               @ ((unsigned)&IC8CON)*8+13;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM0                 @ ((unsigned)&IC8CON)*8+0;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM1                 @ ((unsigned)&IC8CON)*8+1;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICM2                 @ ((unsigned)&IC8CON)*8+2;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI0                 @ ((unsigned)&IC8CON)*8+5;
// duplicate bit in register IC1CON, definition disabled
// static volatile bit ICI1                 @ ((unsigned)&IC8CON)*8+6;

// Register: OC1RS
static volatile unsigned int            OC1RS               @ 0x180;

// Register: OC1R
static volatile unsigned int            OC1R                @ 0x182;

// Register: OC1CON
static volatile unsigned int            OC1CON              @ 0x184;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned OCSIDL              : 1;
        volatile unsigned                     : 8;
        volatile unsigned OCFLT               : 1;
        volatile unsigned OCTSEL              : 1;
        volatile unsigned OCM                 : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned OCM2                : 1;
        volatile unsigned OCM1                : 1;
        volatile unsigned OCM0                : 1;
    };
} OC1CONbits @ 0x184;
// bit variable definitions
static volatile bit OCTSEL               @ ((unsigned)&OC1CON)*8+3;
static volatile bit OCFLT                @ ((unsigned)&OC1CON)*8+4;
static volatile bit OCSIDL               @ ((unsigned)&OC1CON)*8+13;
static volatile bit OCM0                 @ ((unsigned)&OC1CON)*8+0;
static volatile bit OCM1                 @ ((unsigned)&OC1CON)*8+1;
static volatile bit OCM2                 @ ((unsigned)&OC1CON)*8+2;

// Register: OC2RS
static volatile unsigned int            OC2RS               @ 0x186;

// Register: OC2R
static volatile unsigned int            OC2R                @ 0x188;

// Register: OC2CON
static volatile unsigned int            OC2CON              @ 0x18A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned OCSIDL              : 1;
        volatile unsigned                     : 8;
        volatile unsigned OCFLT               : 1;
        volatile unsigned OCTSEL              : 1;
        volatile unsigned OCM                 : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned OCM2                : 1;
        volatile unsigned OCM1                : 1;
        volatile unsigned OCM0                : 1;
    };
} OC2CONbits @ 0x18A;
// bit variable definitions
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCTSEL               @ ((unsigned)&OC2CON)*8+3;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCFLT                @ ((unsigned)&OC2CON)*8+4;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCSIDL               @ ((unsigned)&OC2CON)*8+13;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM0                 @ ((unsigned)&OC2CON)*8+0;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM1                 @ ((unsigned)&OC2CON)*8+1;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM2                 @ ((unsigned)&OC2CON)*8+2;

// Register: OC3RS
static volatile unsigned int            OC3RS               @ 0x18C;

// Register: OC3R
static volatile unsigned int            OC3R                @ 0x18E;

// Register: OC3CON
static volatile unsigned int            OC3CON              @ 0x190;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned OCSIDL              : 1;
        volatile unsigned                     : 8;
        volatile unsigned OCFLT               : 1;
        volatile unsigned OCTSEL              : 1;
        volatile unsigned OCM                 : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned OCM2                : 1;
        volatile unsigned OCM1                : 1;
        volatile unsigned OCM0                : 1;
    };
} OC3CONbits @ 0x190;
// bit variable definitions
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCTSEL               @ ((unsigned)&OC3CON)*8+3;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCFLT                @ ((unsigned)&OC3CON)*8+4;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCSIDL               @ ((unsigned)&OC3CON)*8+13;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM0                 @ ((unsigned)&OC3CON)*8+0;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM1                 @ ((unsigned)&OC3CON)*8+1;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM2                 @ ((unsigned)&OC3CON)*8+2;

// Register: OC4RS
static volatile unsigned int            OC4RS               @ 0x192;

// Register: OC4R
static volatile unsigned int            OC4R                @ 0x194;

// Register: OC4CON
static volatile unsigned int            OC4CON              @ 0x196;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned OCSIDL              : 1;
        volatile unsigned                     : 8;
        volatile unsigned OCFLT               : 1;
        volatile unsigned OCTSEL              : 1;
        volatile unsigned OCM                 : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned OCM2                : 1;
        volatile unsigned OCM1                : 1;
        volatile unsigned OCM0                : 1;
    };
} OC4CONbits @ 0x196;
// bit variable definitions
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCTSEL               @ ((unsigned)&OC4CON)*8+3;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCFLT                @ ((unsigned)&OC4CON)*8+4;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCSIDL               @ ((unsigned)&OC4CON)*8+13;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM0                 @ ((unsigned)&OC4CON)*8+0;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM1                 @ ((unsigned)&OC4CON)*8+1;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM2                 @ ((unsigned)&OC4CON)*8+2;

// Register: OC5RS
static volatile unsigned int            OC5RS               @ 0x198;

// Register: OC5R
static volatile unsigned int            OC5R                @ 0x19A;

// Register: OC5CON
static volatile unsigned int            OC5CON              @ 0x19C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned OCSIDL              : 1;
        volatile unsigned                     : 8;
        volatile unsigned OCFLT               : 1;
        volatile unsigned OCTSEL              : 1;
        volatile unsigned OCM                 : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned OCM2                : 1;
        volatile unsigned OCM1                : 1;
        volatile unsigned OCM0                : 1;
    };
} OC5CONbits @ 0x19C;
// bit variable definitions
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCTSEL               @ ((unsigned)&OC5CON)*8+3;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCFLT                @ ((unsigned)&OC5CON)*8+4;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCSIDL               @ ((unsigned)&OC5CON)*8+13;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM0                 @ ((unsigned)&OC5CON)*8+0;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM1                 @ ((unsigned)&OC5CON)*8+1;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM2                 @ ((unsigned)&OC5CON)*8+2;

// Register: OC6RS
static volatile unsigned int            OC6RS               @ 0x19E;

// Register: OC6R
static volatile unsigned int            OC6R                @ 0x1A0;

// Register: OC6CON
static volatile unsigned int            OC6CON              @ 0x1A2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned OCSIDL              : 1;
        volatile unsigned                     : 8;
        volatile unsigned OCFLT               : 1;
        volatile unsigned OCTSEL              : 1;
        volatile unsigned OCM                 : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned OCM2                : 1;
        volatile unsigned OCM1                : 1;
        volatile unsigned OCM0                : 1;
    };
} OC6CONbits @ 0x1A2;
// bit variable definitions
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCTSEL               @ ((unsigned)&OC6CON)*8+3;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCFLT                @ ((unsigned)&OC6CON)*8+4;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCSIDL               @ ((unsigned)&OC6CON)*8+13;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM0                 @ ((unsigned)&OC6CON)*8+0;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM1                 @ ((unsigned)&OC6CON)*8+1;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM2                 @ ((unsigned)&OC6CON)*8+2;

// Register: OC7RS
static volatile unsigned int            OC7RS               @ 0x1A4;

// Register: OC7R
static volatile unsigned int            OC7R                @ 0x1A6;

// Register: OC7CON
static volatile unsigned int            OC7CON              @ 0x1A8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned OCSIDL              : 1;
        volatile unsigned                     : 8;
        volatile unsigned OCFLT               : 1;
        volatile unsigned OCTSEL              : 1;
        volatile unsigned OCM                 : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned OCM2                : 1;
        volatile unsigned OCM1                : 1;
        volatile unsigned OCM0                : 1;
    };
} OC7CONbits @ 0x1A8;
// bit variable definitions
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCTSEL               @ ((unsigned)&OC7CON)*8+3;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCFLT                @ ((unsigned)&OC7CON)*8+4;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCSIDL               @ ((unsigned)&OC7CON)*8+13;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM0                 @ ((unsigned)&OC7CON)*8+0;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM1                 @ ((unsigned)&OC7CON)*8+1;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM2                 @ ((unsigned)&OC7CON)*8+2;

// Register: OC8RS
static volatile unsigned int            OC8RS               @ 0x1AA;

// Register: OC8R
static volatile unsigned int            OC8R                @ 0x1AC;

// Register: OC8CON
static volatile unsigned int            OC8CON              @ 0x1AE;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 2;
        volatile unsigned OCSIDL              : 1;
        volatile unsigned                     : 8;
        volatile unsigned OCFLT               : 1;
        volatile unsigned OCTSEL              : 1;
        volatile unsigned OCM                 : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned OCM2                : 1;
        volatile unsigned OCM1                : 1;
        volatile unsigned OCM0                : 1;
    };
} OC8CONbits @ 0x1AE;
// bit variable definitions
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCTSEL               @ ((unsigned)&OC8CON)*8+3;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCFLT                @ ((unsigned)&OC8CON)*8+4;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCSIDL               @ ((unsigned)&OC8CON)*8+13;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM0                 @ ((unsigned)&OC8CON)*8+0;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM1                 @ ((unsigned)&OC8CON)*8+1;
// duplicate bit in register OC1CON, definition disabled
// static volatile bit OCM2                 @ ((unsigned)&OC8CON)*8+2;

// Register: PTCON
static volatile unsigned int            PTCON               @ 0x1C0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned PTEN                : 1;
        volatile unsigned                     : 1;
        volatile unsigned PTSIDL              : 1;
        volatile unsigned                     : 5;
        volatile unsigned PTOPS               : 4;
        volatile unsigned PTCKPS              : 2;
        volatile unsigned PTMOD               : 2;
    };
    struct {
        volatile unsigned                     : 8;
        volatile unsigned PTOPS3              : 1;
        volatile unsigned PTOPS2              : 1;
        volatile unsigned PTOPS1              : 1;
        volatile unsigned PTOPS0              : 1;
        volatile unsigned PTCKPS1             : 1;
        volatile unsigned PTCKPS0             : 1;
        volatile unsigned PTMOD1              : 1;
        volatile unsigned PTMOD0              : 1;
    };
} PTCONbits @ 0x1C0;
// bit variable definitions
static volatile bit PTSIDL               @ ((unsigned)&PTCON)*8+13;
static volatile bit PTEN                 @ ((unsigned)&PTCON)*8+15;
static volatile bit PTMOD0               @ ((unsigned)&PTCON)*8+0;
static volatile bit PTMOD1               @ ((unsigned)&PTCON)*8+1;
static volatile bit PTCKPS0              @ ((unsigned)&PTCON)*8+2;
static volatile bit PTCKPS1              @ ((unsigned)&PTCON)*8+3;
static volatile bit PTOPS0               @ ((unsigned)&PTCON)*8+4;
static volatile bit PTOPS1               @ ((unsigned)&PTCON)*8+5;
static volatile bit PTOPS2               @ ((unsigned)&PTCON)*8+6;
static volatile bit PTOPS3               @ ((unsigned)&PTCON)*8+7;

// Register: PTMR
static volatile unsigned int            PTMR                @ 0x1C2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned PTDIR               : 1;
        volatile unsigned PTMR                : 15;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned PTMR14              : 1;
        volatile unsigned PTMR13              : 1;
        volatile unsigned PTMR12              : 1;
        volatile unsigned PTMR11              : 1;
        volatile unsigned PTMR10              : 1;
        volatile unsigned PTMR9               : 1;
        volatile unsigned PTMR8               : 1;
        volatile unsigned PTMR7               : 1;
        volatile unsigned PTMR6               : 1;
        volatile unsigned PTMR5               : 1;
        volatile unsigned PTMR4               : 1;
        volatile unsigned PTMR3               : 1;
        volatile unsigned PTMR2               : 1;
        volatile unsigned PTMR1               : 1;
        volatile unsigned PTMR0               : 1;
    };
} PTMRbits @ 0x1C2;
// bit variable definitions
static volatile bit PTDIR                @ ((unsigned)&PTMR)*8+15;
static volatile bit PTMR0                @ ((unsigned)&PTMR)*8+0;
static volatile bit PTMR1                @ ((unsigned)&PTMR)*8+1;
static volatile bit PTMR2                @ ((unsigned)&PTMR)*8+2;
static volatile bit PTMR3                @ ((unsigned)&PTMR)*8+3;
static volatile bit PTMR4                @ ((unsigned)&PTMR)*8+4;
static volatile bit PTMR5                @ ((unsigned)&PTMR)*8+5;
static volatile bit PTMR6                @ ((unsigned)&PTMR)*8+6;
static volatile bit PTMR7                @ ((unsigned)&PTMR)*8+7;
static volatile bit PTMR8                @ ((unsigned)&PTMR)*8+8;
static volatile bit PTMR9                @ ((unsigned)&PTMR)*8+9;
static volatile bit PTMR10               @ ((unsigned)&PTMR)*8+10;
static volatile bit PTMR11               @ ((unsigned)&PTMR)*8+11;
static volatile bit PTMR12               @ ((unsigned)&PTMR)*8+12;
static volatile bit PTMR13               @ ((unsigned)&PTMR)*8+13;
static volatile bit PTMR14               @ ((unsigned)&PTMR)*8+14;

// Register: PTPER
static volatile unsigned int            PTPER               @ 0x1C4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned PTPER               : 15;
    };
} PTPERbits @ 0x1C4;

// Register: SEVTCMP
static volatile unsigned int            SEVTCMP             @ 0x1C6;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SEVTDIR             : 1;
        volatile unsigned SEVTCMP             : 15;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned SEVTCMP14           : 1;
        volatile unsigned SEVTCMP13           : 1;
        volatile unsigned SEVTCMP12           : 1;
        volatile unsigned SEVTCMP11           : 1;
        volatile unsigned SEVTCMP10           : 1;
        volatile unsigned SEVTCMP9            : 1;
        volatile unsigned SEVTCMP8            : 1;
        volatile unsigned SEVTCMP7            : 1;
        volatile unsigned SEVTCMP6            : 1;
        volatile unsigned SEVTCMP5            : 1;
        volatile unsigned SEVTCMP4            : 1;
        volatile unsigned SEVTCMP3            : 1;
        volatile unsigned SEVTCMP2            : 1;
        volatile unsigned SEVTCMP1            : 1;
        volatile unsigned SEVTCMP0            : 1;
    };
} SEVTCMPbits @ 0x1C6;
// bit variable definitions
static volatile bit SEVTDIR              @ ((unsigned)&SEVTCMP)*8+15;
static volatile bit SEVTCMP0             @ ((unsigned)&SEVTCMP)*8+0;
static volatile bit SEVTCMP1             @ ((unsigned)&SEVTCMP)*8+1;
static volatile bit SEVTCMP2             @ ((unsigned)&SEVTCMP)*8+2;
static volatile bit SEVTCMP3             @ ((unsigned)&SEVTCMP)*8+3;
static volatile bit SEVTCMP4             @ ((unsigned)&SEVTCMP)*8+4;
static volatile bit SEVTCMP5             @ ((unsigned)&SEVTCMP)*8+5;
static volatile bit SEVTCMP6             @ ((unsigned)&SEVTCMP)*8+6;
static volatile bit SEVTCMP7             @ ((unsigned)&SEVTCMP)*8+7;
static volatile bit SEVTCMP8             @ ((unsigned)&SEVTCMP)*8+8;
static volatile bit SEVTCMP9             @ ((unsigned)&SEVTCMP)*8+9;
static volatile bit SEVTCMP10            @ ((unsigned)&SEVTCMP)*8+10;
static volatile bit SEVTCMP11            @ ((unsigned)&SEVTCMP)*8+11;
static volatile bit SEVTCMP12            @ ((unsigned)&SEVTCMP)*8+12;
static volatile bit SEVTCMP13            @ ((unsigned)&SEVTCMP)*8+13;
static volatile bit SEVTCMP14            @ ((unsigned)&SEVTCMP)*8+14;

// Register: PWMCON1
static volatile unsigned int            PWMCON1             @ 0x1C8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned PTMOD4              : 1;
        volatile unsigned PTMOD3              : 1;
        volatile unsigned PTMOD2              : 1;
        volatile unsigned PTMOD1              : 1;
        volatile unsigned PEN4H               : 1;
        volatile unsigned PEN3H               : 1;
        volatile unsigned PEN2H               : 1;
        volatile unsigned PEN1H               : 1;
        volatile unsigned PEN4L               : 1;
        volatile unsigned PEN3L               : 1;
        volatile unsigned PEN2L               : 1;
        volatile unsigned PEN1L               : 1;
    };
} PWMCON1bits @ 0x1C8;
// bit variable definitions
static volatile bit PEN1L                @ ((unsigned)&PWMCON1)*8+0;
static volatile bit PEN2L                @ ((unsigned)&PWMCON1)*8+1;
static volatile bit PEN3L                @ ((unsigned)&PWMCON1)*8+2;
static volatile bit PEN4L                @ ((unsigned)&PWMCON1)*8+3;
static volatile bit PEN1H                @ ((unsigned)&PWMCON1)*8+4;
static volatile bit PEN2H                @ ((unsigned)&PWMCON1)*8+5;
static volatile bit PEN3H                @ ((unsigned)&PWMCON1)*8+6;
static volatile bit PEN4H                @ ((unsigned)&PWMCON1)*8+7;
// duplicate bit in register PTCON, definition disabled
// static volatile bit PTMOD1               @ ((unsigned)&PWMCON1)*8+8;
static volatile bit PTMOD2               @ ((unsigned)&PWMCON1)*8+9;
static volatile bit PTMOD3               @ ((unsigned)&PWMCON1)*8+10;
static volatile bit PTMOD4               @ ((unsigned)&PWMCON1)*8+11;

// Register: PWMCON2
static volatile unsigned int            PWMCON2             @ 0x1CA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned SEVOPS              : 4;
        volatile unsigned                     : 5;
        volatile unsigned IUE                 : 1;
        volatile unsigned OSYNC               : 1;
        volatile unsigned UDIS                : 1;
    };
    struct {
        volatile unsigned                     : 4;
        volatile unsigned SEVOPS3             : 1;
        volatile unsigned SEVOPS2             : 1;
        volatile unsigned SEVOPS1             : 1;
        volatile unsigned SEVOPS0             : 1;
        volatile unsigned                     : 8;
    };
} PWMCON2bits @ 0x1CA;
// bit variable definitions
static volatile bit UDIS                 @ ((unsigned)&PWMCON2)*8+0;
static volatile bit OSYNC                @ ((unsigned)&PWMCON2)*8+1;
static volatile bit IUE                  @ ((unsigned)&PWMCON2)*8+2;
static volatile bit SEVOPS0              @ ((unsigned)&PWMCON2)*8+8;
static volatile bit SEVOPS1              @ ((unsigned)&PWMCON2)*8+9;
static volatile bit SEVOPS2              @ ((unsigned)&PWMCON2)*8+10;
static volatile bit SEVOPS3              @ ((unsigned)&PWMCON2)*8+11;

// Register: DTCON1
static volatile unsigned int            DTCON1              @ 0x1CC;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned DTBPS               : 2;
        volatile unsigned DTB                 : 6;
        volatile unsigned DTAPS               : 2;
        volatile unsigned DTA                 : 6;
    };
    struct {
        volatile unsigned DTBPS1              : 1;
        volatile unsigned DTBPS0              : 1;
        volatile unsigned DTB5                : 1;
        volatile unsigned DTB4                : 1;
        volatile unsigned DTB3                : 1;
        volatile unsigned DTB2                : 1;
        volatile unsigned DTB1                : 1;
        volatile unsigned DTB0                : 1;
        volatile unsigned DTAPS1              : 1;
        volatile unsigned DTAPS0              : 1;
        volatile unsigned DTA5                : 1;
        volatile unsigned DTA4                : 1;
        volatile unsigned DTA3                : 1;
        volatile unsigned DTA2                : 1;
        volatile unsigned DTA1                : 1;
        volatile unsigned DTA0                : 1;
    };
} DTCON1bits @ 0x1CC;
// bit variable definitions
static volatile bit DTA0                 @ ((unsigned)&DTCON1)*8+0;
static volatile bit DTA1                 @ ((unsigned)&DTCON1)*8+1;
static volatile bit DTA2                 @ ((unsigned)&DTCON1)*8+2;
static volatile bit DTA3                 @ ((unsigned)&DTCON1)*8+3;
static volatile bit DTA4                 @ ((unsigned)&DTCON1)*8+4;
static volatile bit DTA5                 @ ((unsigned)&DTCON1)*8+5;
static volatile bit DTAPS0               @ ((unsigned)&DTCON1)*8+6;
static volatile bit DTAPS1               @ ((unsigned)&DTCON1)*8+7;
static volatile bit DTB0                 @ ((unsigned)&DTCON1)*8+8;
static volatile bit DTB1                 @ ((unsigned)&DTCON1)*8+9;
static volatile bit DTB2                 @ ((unsigned)&DTCON1)*8+10;
static volatile bit DTB3                 @ ((unsigned)&DTCON1)*8+11;
static volatile bit DTB4                 @ ((unsigned)&DTCON1)*8+12;
static volatile bit DTB5                 @ ((unsigned)&DTCON1)*8+13;
static volatile bit DTBPS0               @ ((unsigned)&DTCON1)*8+14;
static volatile bit DTBPS1               @ ((unsigned)&DTCON1)*8+15;

// Register: DTCON2
static volatile unsigned int            DTCON2              @ 0x1CE;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned DTS4A               : 1;
        volatile unsigned DTS4I               : 1;
        volatile unsigned DTS3A               : 1;
        volatile unsigned DTS3I               : 1;
        volatile unsigned DTS2A               : 1;
        volatile unsigned DTS2I               : 1;
        volatile unsigned DTS1A               : 1;
        volatile unsigned DTS1I               : 1;
    };
} DTCON2bits @ 0x1CE;
// bit variable definitions
static volatile bit DTS1I                @ ((unsigned)&DTCON2)*8+0;
static volatile bit DTS1A                @ ((unsigned)&DTCON2)*8+1;
static volatile bit DTS2I                @ ((unsigned)&DTCON2)*8+2;
static volatile bit DTS2A                @ ((unsigned)&DTCON2)*8+3;
static volatile bit DTS3I                @ ((unsigned)&DTCON2)*8+4;
static volatile bit DTS3A                @ ((unsigned)&DTCON2)*8+5;
static volatile bit DTS4I                @ ((unsigned)&DTCON2)*8+6;
static volatile bit DTS4A                @ ((unsigned)&DTCON2)*8+7;

// Register: FLTACON
static volatile unsigned int            FLTACON             @ 0x1D0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned FAOV4H              : 1;
        volatile unsigned FAOV4L              : 1;
        volatile unsigned FAOV3H              : 1;
        volatile unsigned FAOV3L              : 1;
        volatile unsigned FAOV2H              : 1;
        volatile unsigned FAOV2L              : 1;
        volatile unsigned FAOV1H              : 1;
        volatile unsigned FAOV1L              : 1;
        volatile unsigned FLTAM               : 1;
        volatile unsigned                     : 3;
        volatile unsigned FAEN4               : 1;
        volatile unsigned FAEN3               : 1;
        volatile unsigned FAEN2               : 1;
        volatile unsigned FAEN1               : 1;
    };
} FLTACONbits @ 0x1D0;
// bit variable definitions
static volatile bit FAEN1                @ ((unsigned)&FLTACON)*8+0;
static volatile bit FAEN2                @ ((unsigned)&FLTACON)*8+1;
static volatile bit FAEN3                @ ((unsigned)&FLTACON)*8+2;
static volatile bit FAEN4                @ ((unsigned)&FLTACON)*8+3;
static volatile bit FLTAM                @ ((unsigned)&FLTACON)*8+7;
static volatile bit FAOV1L               @ ((unsigned)&FLTACON)*8+8;
static volatile bit FAOV1H               @ ((unsigned)&FLTACON)*8+9;
static volatile bit FAOV2L               @ ((unsigned)&FLTACON)*8+10;
static volatile bit FAOV2H               @ ((unsigned)&FLTACON)*8+11;
static volatile bit FAOV3L               @ ((unsigned)&FLTACON)*8+12;
static volatile bit FAOV3H               @ ((unsigned)&FLTACON)*8+13;
static volatile bit FAOV4L               @ ((unsigned)&FLTACON)*8+14;
static volatile bit FAOV4H               @ ((unsigned)&FLTACON)*8+15;

// Register: FLTBCON
static volatile unsigned int            FLTBCON             @ 0x1D2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned FBOV4H              : 1;
        volatile unsigned FBOV4L              : 1;
        volatile unsigned FBOV3H              : 1;
        volatile unsigned FBOV3L              : 1;
        volatile unsigned FBOV2H              : 1;
        volatile unsigned FBOV2L              : 1;
        volatile unsigned FBOV1H              : 1;
        volatile unsigned FBOV1L              : 1;
        volatile unsigned FLTBM               : 1;
        volatile unsigned                     : 3;
        volatile unsigned FBEN4               : 1;
        volatile unsigned FBEN3               : 1;
        volatile unsigned FBEN2               : 1;
        volatile unsigned FBEN1               : 1;
    };
} FLTBCONbits @ 0x1D2;
// bit variable definitions
static volatile bit FBEN1                @ ((unsigned)&FLTBCON)*8+0;
static volatile bit FBEN2                @ ((unsigned)&FLTBCON)*8+1;
static volatile bit FBEN3                @ ((unsigned)&FLTBCON)*8+2;
static volatile bit FBEN4                @ ((unsigned)&FLTBCON)*8+3;
static volatile bit FLTBM                @ ((unsigned)&FLTBCON)*8+7;
static volatile bit FBOV1L               @ ((unsigned)&FLTBCON)*8+8;
static volatile bit FBOV1H               @ ((unsigned)&FLTBCON)*8+9;
static volatile bit FBOV2L               @ ((unsigned)&FLTBCON)*8+10;
static volatile bit FBOV2H               @ ((unsigned)&FLTBCON)*8+11;
static volatile bit FBOV3L               @ ((unsigned)&FLTBCON)*8+12;
static volatile bit FBOV3H               @ ((unsigned)&FLTBCON)*8+13;
static volatile bit FBOV4L               @ ((unsigned)&FLTBCON)*8+14;
static volatile bit FBOV4H               @ ((unsigned)&FLTBCON)*8+15;

// Register: OVDCON
static volatile unsigned int            OVDCON              @ 0x1D4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned POVD4H              : 1;
        volatile unsigned POVD4L              : 1;
        volatile unsigned POVD3H              : 1;
        volatile unsigned POVD3L              : 1;
        volatile unsigned POVD2H              : 1;
        volatile unsigned POVD2L              : 1;
        volatile unsigned POVD1H              : 1;
        volatile unsigned POVD1L              : 1;
        volatile unsigned POUT4H              : 1;
        volatile unsigned POUT4L              : 1;
        volatile unsigned POUT3H              : 1;
        volatile unsigned POUT3L              : 1;
        volatile unsigned POUT2H              : 1;
        volatile unsigned POUT2L              : 1;
        volatile unsigned POUT1H              : 1;
        volatile unsigned POUT1L              : 1;
    };
} OVDCONbits @ 0x1D4;
// bit variable definitions
static volatile bit POUT1L               @ ((unsigned)&OVDCON)*8+0;
static volatile bit POUT1H               @ ((unsigned)&OVDCON)*8+1;
static volatile bit POUT2L               @ ((unsigned)&OVDCON)*8+2;
static volatile bit POUT2H               @ ((unsigned)&OVDCON)*8+3;
static volatile bit POUT3L               @ ((unsigned)&OVDCON)*8+4;
static volatile bit POUT3H               @ ((unsigned)&OVDCON)*8+5;
static volatile bit POUT4L               @ ((unsigned)&OVDCON)*8+6;
static volatile bit POUT4H               @ ((unsigned)&OVDCON)*8+7;
static volatile bit POVD1L               @ ((unsigned)&OVDCON)*8+8;
static volatile bit POVD1H               @ ((unsigned)&OVDCON)*8+9;
static volatile bit POVD2L               @ ((unsigned)&OVDCON)*8+10;
static volatile bit POVD2H               @ ((unsigned)&OVDCON)*8+11;
static volatile bit POVD3L               @ ((unsigned)&OVDCON)*8+12;
static volatile bit POVD3H               @ ((unsigned)&OVDCON)*8+13;
static volatile bit POVD4L               @ ((unsigned)&OVDCON)*8+14;
static volatile bit POVD4H               @ ((unsigned)&OVDCON)*8+15;

// Register: PDC1
static volatile unsigned int            PDC1                @ 0x1D6;

// Register: PDC2
static volatile unsigned int            PDC2                @ 0x1D8;

// Register: PDC3
static volatile unsigned int            PDC3                @ 0x1DA;

// Register: PDC4
static volatile unsigned int            PDC4                @ 0x1DC;

// Register: I2CRCV
static volatile unsigned int            I2CRCV              @ 0x200;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned I2CRCV              : 8;
    };
} I2CRCVbits @ 0x200;

// Register: I2CTRN
static volatile unsigned int            I2CTRN              @ 0x202;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned I2CTRN              : 8;
    };
} I2CTRNbits @ 0x202;

// Register: I2CBRG
static volatile unsigned int            I2CBRG              @ 0x204;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 7;
        volatile unsigned I2CBRG              : 9;
    };
} I2CBRGbits @ 0x204;

// Register: I2CCON
static volatile unsigned int            I2CCON              @ 0x206;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned I2CEN               : 1;
        volatile unsigned                     : 1;
        volatile unsigned I2CSIDL             : 1;
        volatile unsigned SCLREL              : 1;
        volatile unsigned IPMIEN              : 1;
        volatile unsigned A10M                : 1;
        volatile unsigned DISSLW              : 1;
        volatile unsigned SMEN                : 1;
        volatile unsigned GCEN                : 1;
        volatile unsigned STREN               : 1;
        volatile unsigned ACKDT               : 1;
        volatile unsigned ACKEN               : 1;
        volatile unsigned RCEN                : 1;
        volatile unsigned PEN                 : 1;
        volatile unsigned RSEN                : 1;
        volatile unsigned SEN                 : 1;
    };
} I2CCONbits @ 0x206;
// bit variable definitions
static volatile bit SEN                  @ ((unsigned)&I2CCON)*8+0;
static volatile bit RSEN                 @ ((unsigned)&I2CCON)*8+1;
static volatile bit PEN                  @ ((unsigned)&I2CCON)*8+2;
static volatile bit RCEN                 @ ((unsigned)&I2CCON)*8+3;
static volatile bit ACKEN                @ ((unsigned)&I2CCON)*8+4;
static volatile bit ACKDT                @ ((unsigned)&I2CCON)*8+5;
static volatile bit STREN                @ ((unsigned)&I2CCON)*8+6;
static volatile bit GCEN                 @ ((unsigned)&I2CCON)*8+7;
static volatile bit SMEN                 @ ((unsigned)&I2CCON)*8+8;
static volatile bit DISSLW               @ ((unsigned)&I2CCON)*8+9;
static volatile bit A10M                 @ ((unsigned)&I2CCON)*8+10;
static volatile bit IPMIEN               @ ((unsigned)&I2CCON)*8+11;
static volatile bit SCLREL               @ ((unsigned)&I2CCON)*8+12;
static volatile bit I2CSIDL              @ ((unsigned)&I2CCON)*8+13;
static volatile bit I2CEN                @ ((unsigned)&I2CCON)*8+15;

// Register: I2CSTAT
static volatile unsigned int            I2CSTAT             @ 0x208;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned ACKSTAT             : 1;
        volatile unsigned TRSTAT              : 1;
        volatile unsigned                     : 3;
        volatile unsigned BCL                 : 1;
        volatile unsigned GCSTAT              : 1;
        volatile unsigned ADD10               : 1;
        volatile unsigned IWCOL               : 1;
        volatile unsigned I2COV               : 1;
        volatile unsigned D_A                 : 1;
        volatile unsigned P                   : 1;
        volatile unsigned S                   : 1;
        volatile unsigned R_W                 : 1;
        volatile unsigned RBF                 : 1;
        volatile unsigned TBF                 : 1;
    };
    struct {
        volatile unsigned                     : 10;
        volatile unsigned D_nA                : 1;
        volatile unsigned                     : 2;
        volatile unsigned R_nW                : 1;
        volatile unsigned                     : 2;
    };
} I2CSTATbits @ 0x208;
// bit variable definitions
static volatile bit TBF                  @ ((unsigned)&I2CSTAT)*8+0;
static volatile bit RBF                  @ ((unsigned)&I2CSTAT)*8+1;
static volatile bit R_W                  @ ((unsigned)&I2CSTAT)*8+2;
static volatile bit S                    @ ((unsigned)&I2CSTAT)*8+3;
static volatile bit P                    @ ((unsigned)&I2CSTAT)*8+4;
static volatile bit D_A                  @ ((unsigned)&I2CSTAT)*8+5;
static volatile bit I2COV                @ ((unsigned)&I2CSTAT)*8+6;
static volatile bit IWCOL                @ ((unsigned)&I2CSTAT)*8+7;
static volatile bit ADD10                @ ((unsigned)&I2CSTAT)*8+8;
static volatile bit GCSTAT               @ ((unsigned)&I2CSTAT)*8+9;
static volatile bit BCL                  @ ((unsigned)&I2CSTAT)*8+10;
static volatile bit TRSTAT               @ ((unsigned)&I2CSTAT)*8+14;
static volatile bit ACKSTAT              @ ((unsigned)&I2CSTAT)*8+15;
static volatile bit R_nW                 @ ((unsigned)&I2CSTAT)*8+2;
static volatile bit D_nA                 @ ((unsigned)&I2CSTAT)*8+5;

// Register: I2CADD
static volatile unsigned int            I2CADD              @ 0x20A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned I2CADD              : 10;
    };
} I2CADDbits @ 0x20A;

// Register: U1MODE
static volatile unsigned int            U1MODE              @ 0x20C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned UARTEN              : 1;
        volatile unsigned                     : 1;
        volatile unsigned USIDL               : 1;
        volatile unsigned                     : 2;
        volatile unsigned ALTIO               : 1;
        volatile unsigned                     : 2;
        volatile unsigned WAKE                : 1;
        volatile unsigned LPBACK              : 1;
        volatile unsigned ABAUD               : 1;
        volatile unsigned                     : 2;
        volatile unsigned PDSEL               : 2;
        volatile unsigned STSEL               : 1;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned PDSEL1              : 1;
        volatile unsigned PDSEL0              : 1;
        volatile unsigned                     : 1;
    };
} U1MODEbits @ 0x20C;
// bit variable definitions
static volatile bit STSEL                @ ((unsigned)&U1MODE)*8+0;
static volatile bit ABAUD                @ ((unsigned)&U1MODE)*8+5;
static volatile bit LPBACK               @ ((unsigned)&U1MODE)*8+6;
static volatile bit WAKE                 @ ((unsigned)&U1MODE)*8+7;
static volatile bit ALTIO                @ ((unsigned)&U1MODE)*8+10;
static volatile bit USIDL                @ ((unsigned)&U1MODE)*8+13;
static volatile bit UARTEN               @ ((unsigned)&U1MODE)*8+15;
static volatile bit PDSEL0               @ ((unsigned)&U1MODE)*8+1;
static volatile bit PDSEL1               @ ((unsigned)&U1MODE)*8+2;

// Register: U1STA
static volatile unsigned int            U1STA               @ 0x20E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned UTXISEL             : 1;
        volatile unsigned                     : 3;
        volatile unsigned UTXBRK              : 1;
        volatile unsigned UTXEN               : 1;
        volatile unsigned UTXBF               : 1;
        volatile unsigned TRMT                : 1;
        volatile unsigned URXISEL             : 2;
        volatile unsigned ADDEN               : 1;
        volatile unsigned RIDLE               : 1;
        volatile unsigned PERR                : 1;
        volatile unsigned FERR                : 1;
        volatile unsigned OERR                : 1;
        volatile unsigned URXDA               : 1;
    };
    struct {
        volatile unsigned                     : 8;
        volatile unsigned URXISEL1            : 1;
        volatile unsigned URXISEL0            : 1;
        volatile unsigned                     : 6;
    };
} U1STAbits @ 0x20E;
// bit variable definitions
static volatile bit URXDA                @ ((unsigned)&U1STA)*8+0;
static volatile bit OERR                 @ ((unsigned)&U1STA)*8+1;
static volatile bit FERR                 @ ((unsigned)&U1STA)*8+2;
static volatile bit PERR                 @ ((unsigned)&U1STA)*8+3;
static volatile bit RIDLE                @ ((unsigned)&U1STA)*8+4;
static volatile bit ADDEN                @ ((unsigned)&U1STA)*8+5;
static volatile bit TRMT                 @ ((unsigned)&U1STA)*8+8;
static volatile bit UTXBF                @ ((unsigned)&U1STA)*8+9;
static volatile bit UTXEN                @ ((unsigned)&U1STA)*8+10;
static volatile bit UTXBRK               @ ((unsigned)&U1STA)*8+11;
static volatile bit UTXISEL              @ ((unsigned)&U1STA)*8+15;
static volatile bit URXISEL0             @ ((unsigned)&U1STA)*8+6;
static volatile bit URXISEL1             @ ((unsigned)&U1STA)*8+7;

// Register: U1TXREG
static volatile unsigned int            U1TXREG             @ 0x210;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 7;
        volatile unsigned U1TXREG             : 9;
    };
    struct {
        volatile unsigned                     : 7;
        volatile unsigned UTXREG8             : 1;
        volatile unsigned UTXREG7             : 1;
        volatile unsigned UTXREG6             : 1;
        volatile unsigned UTXREG5             : 1;
        volatile unsigned UTXREG4             : 1;
        volatile unsigned UTXREG3             : 1;
        volatile unsigned UTXREG2             : 1;
        volatile unsigned UTXREG1             : 1;
        volatile unsigned UTXREG0             : 1;
    };
} U1TXREGbits @ 0x210;
// bit variable definitions
static volatile bit UTXREG0              @ ((unsigned)&U1TXREG)*8+0;
static volatile bit UTXREG1              @ ((unsigned)&U1TXREG)*8+1;
static volatile bit UTXREG2              @ ((unsigned)&U1TXREG)*8+2;
static volatile bit UTXREG3              @ ((unsigned)&U1TXREG)*8+3;
static volatile bit UTXREG4              @ ((unsigned)&U1TXREG)*8+4;
static volatile bit UTXREG5              @ ((unsigned)&U1TXREG)*8+5;
static volatile bit UTXREG6              @ ((unsigned)&U1TXREG)*8+6;
static volatile bit UTXREG7              @ ((unsigned)&U1TXREG)*8+7;
static volatile bit UTXREG8              @ ((unsigned)&U1TXREG)*8+8;

// Register: U1RXREG
static volatile unsigned int            U1RXREG             @ 0x212;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 7;
        volatile unsigned U1RXREG             : 9;
    };
    struct {
        volatile unsigned                     : 7;
        volatile unsigned URXREG8             : 1;
        volatile unsigned URXREG7             : 1;
        volatile unsigned URXREG6             : 1;
        volatile unsigned URXREG5             : 1;
        volatile unsigned URXREG4             : 1;
        volatile unsigned URXREG3             : 1;
        volatile unsigned URXREG2             : 1;
        volatile unsigned URXREG1             : 1;
        volatile unsigned URXREG0             : 1;
    };
} U1RXREGbits @ 0x212;
// bit variable definitions
static volatile bit URXREG0              @ ((unsigned)&U1RXREG)*8+0;
static volatile bit URXREG1              @ ((unsigned)&U1RXREG)*8+1;
static volatile bit URXREG2              @ ((unsigned)&U1RXREG)*8+2;
static volatile bit URXREG3              @ ((unsigned)&U1RXREG)*8+3;
static volatile bit URXREG4              @ ((unsigned)&U1RXREG)*8+4;
static volatile bit URXREG5              @ ((unsigned)&U1RXREG)*8+5;
static volatile bit URXREG6              @ ((unsigned)&U1RXREG)*8+6;
static volatile bit URXREG7              @ ((unsigned)&U1RXREG)*8+7;
static volatile bit URXREG8              @ ((unsigned)&U1RXREG)*8+8;

// Register: U1BRG
static volatile unsigned int            U1BRG               @ 0x214;

// Register: U2MODE
static volatile unsigned int            U2MODE              @ 0x216;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned UARTEN              : 1;
        volatile unsigned                     : 1;
        volatile unsigned USIDL               : 1;
        volatile unsigned                     : 5;
        volatile unsigned WAKE                : 1;
        volatile unsigned LPBACK              : 1;
        volatile unsigned ABAUD               : 1;
        volatile unsigned                     : 2;
        volatile unsigned PDSEL               : 2;
        volatile unsigned STSEL               : 1;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned PDSEL1              : 1;
        volatile unsigned PDSEL0              : 1;
        volatile unsigned                     : 1;
    };
} U2MODEbits @ 0x216;
// bit variable definitions
// duplicate bit in register U1MODE, definition disabled
// static volatile bit STSEL                @ ((unsigned)&U2MODE)*8+0;
// duplicate bit in register U1MODE, definition disabled
// static volatile bit ABAUD                @ ((unsigned)&U2MODE)*8+5;
// duplicate bit in register U1MODE, definition disabled
// static volatile bit LPBACK               @ ((unsigned)&U2MODE)*8+6;
// duplicate bit in register U1MODE, definition disabled
// static volatile bit WAKE                 @ ((unsigned)&U2MODE)*8+7;
// duplicate bit in register U1MODE, definition disabled
// static volatile bit USIDL                @ ((unsigned)&U2MODE)*8+13;
// duplicate bit in register U1MODE, definition disabled
// static volatile bit UARTEN               @ ((unsigned)&U2MODE)*8+15;
// duplicate bit in register U1MODE, definition disabled
// static volatile bit PDSEL0               @ ((unsigned)&U2MODE)*8+1;
// duplicate bit in register U1MODE, definition disabled
// static volatile bit PDSEL1               @ ((unsigned)&U2MODE)*8+2;

// Register: U2STA
static volatile unsigned int            U2STA               @ 0x218;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned UTXISEL             : 1;
        volatile unsigned                     : 3;
        volatile unsigned UTXBRK              : 1;
        volatile unsigned UTXEN               : 1;
        volatile unsigned UTXBF               : 1;
        volatile unsigned TRMT                : 1;
        volatile unsigned URXISEL             : 2;
        volatile unsigned ADDEN               : 1;
        volatile unsigned RIDLE               : 1;
        volatile unsigned PERR                : 1;
        volatile unsigned FERR                : 1;
        volatile unsigned OERR                : 1;
        volatile unsigned URXDA               : 1;
    };
    struct {
        volatile unsigned                     : 8;
        volatile unsigned URXISEL1            : 1;
        volatile unsigned URXISEL0            : 1;
        volatile unsigned                     : 6;
    };
} U2STAbits @ 0x218;
// bit variable definitions
// duplicate bit in register U1STA, definition disabled
// static volatile bit URXDA                @ ((unsigned)&U2STA)*8+0;
// duplicate bit in register U1STA, definition disabled
// static volatile bit OERR                 @ ((unsigned)&U2STA)*8+1;
// duplicate bit in register U1STA, definition disabled
// static volatile bit FERR                 @ ((unsigned)&U2STA)*8+2;
// duplicate bit in register U1STA, definition disabled
// static volatile bit PERR                 @ ((unsigned)&U2STA)*8+3;
// duplicate bit in register U1STA, definition disabled
// static volatile bit RIDLE                @ ((unsigned)&U2STA)*8+4;
// duplicate bit in register U1STA, definition disabled
// static volatile bit ADDEN                @ ((unsigned)&U2STA)*8+5;
// duplicate bit in register U1STA, definition disabled
// static volatile bit TRMT                 @ ((unsigned)&U2STA)*8+8;
// duplicate bit in register U1STA, definition disabled
// static volatile bit UTXBF                @ ((unsigned)&U2STA)*8+9;
// duplicate bit in register U1STA, definition disabled
// static volatile bit UTXEN                @ ((unsigned)&U2STA)*8+10;
// duplicate bit in register U1STA, definition disabled
// static volatile bit UTXBRK               @ ((unsigned)&U2STA)*8+11;
// duplicate bit in register U1STA, definition disabled
// static volatile bit UTXISEL              @ ((unsigned)&U2STA)*8+15;
// duplicate bit in register U1STA, definition disabled
// static volatile bit URXISEL0             @ ((unsigned)&U2STA)*8+6;
// duplicate bit in register U1STA, definition disabled
// static volatile bit URXISEL1             @ ((unsigned)&U2STA)*8+7;

// Register: U2TXREG
static volatile unsigned int            U2TXREG             @ 0x21A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 7;
        volatile unsigned U2TXREG             : 9;
    };
    struct {
        volatile unsigned                     : 7;
        volatile unsigned UTXREG8             : 1;
        volatile unsigned UTXREG7             : 1;
        volatile unsigned UTXREG6             : 1;
        volatile unsigned UTXREG5             : 1;
        volatile unsigned UTXREG4             : 1;
        volatile unsigned UTXREG3             : 1;
        volatile unsigned UTXREG2             : 1;
        volatile unsigned UTXREG1             : 1;
        volatile unsigned UTXREG0             : 1;
    };
} U2TXREGbits @ 0x21A;
// bit variable definitions
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG0              @ ((unsigned)&U2TXREG)*8+0;
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG1              @ ((unsigned)&U2TXREG)*8+1;
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG2              @ ((unsigned)&U2TXREG)*8+2;
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG3              @ ((unsigned)&U2TXREG)*8+3;
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG4              @ ((unsigned)&U2TXREG)*8+4;
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG5              @ ((unsigned)&U2TXREG)*8+5;
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG6              @ ((unsigned)&U2TXREG)*8+6;
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG7              @ ((unsigned)&U2TXREG)*8+7;
// duplicate bit in register U1TXREG, definition disabled
// static volatile bit UTXREG8              @ ((unsigned)&U2TXREG)*8+8;

// Register: U2RXREG
static volatile unsigned int            U2RXREG             @ 0x21C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 7;
        volatile unsigned U2RXREG             : 9;
    };
    struct {
        volatile unsigned                     : 7;
        volatile unsigned URXREG8             : 1;
        volatile unsigned URXREG7             : 1;
        volatile unsigned URXREG6             : 1;
        volatile unsigned URXREG5             : 1;
        volatile unsigned URXREG4             : 1;
        volatile unsigned URXREG3             : 1;
        volatile unsigned URXREG2             : 1;
        volatile unsigned URXREG1             : 1;
        volatile unsigned URXREG0             : 1;
    };
} U2RXREGbits @ 0x21C;
// bit variable definitions
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG0              @ ((unsigned)&U2RXREG)*8+0;
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG1              @ ((unsigned)&U2RXREG)*8+1;
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG2              @ ((unsigned)&U2RXREG)*8+2;
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG3              @ ((unsigned)&U2RXREG)*8+3;
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG4              @ ((unsigned)&U2RXREG)*8+4;
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG5              @ ((unsigned)&U2RXREG)*8+5;
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG6              @ ((unsigned)&U2RXREG)*8+6;
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG7              @ ((unsigned)&U2RXREG)*8+7;
// duplicate bit in register U1RXREG, definition disabled
// static volatile bit URXREG8              @ ((unsigned)&U2RXREG)*8+8;

// Register: U2BRG
static volatile unsigned int            U2BRG               @ 0x21E;

// Register: SPI1STAT
static volatile unsigned int            SPI1STAT            @ 0x220;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SPIEN               : 1;
        volatile unsigned                     : 1;
        volatile unsigned SPISIDL             : 1;
        volatile unsigned                     : 6;
        volatile unsigned SPIROV              : 1;
        volatile unsigned                     : 4;
        volatile unsigned SPITBF              : 1;
        volatile unsigned SPIRBF              : 1;
    };
} SPI1STATbits @ 0x220;
// bit variable definitions
static volatile bit SPIRBF               @ ((unsigned)&SPI1STAT)*8+0;
static volatile bit SPITBF               @ ((unsigned)&SPI1STAT)*8+1;
static volatile bit SPIROV               @ ((unsigned)&SPI1STAT)*8+6;
static volatile bit SPISIDL              @ ((unsigned)&SPI1STAT)*8+13;
static volatile bit SPIEN                @ ((unsigned)&SPI1STAT)*8+15;

// Register: SPI1CON
static volatile unsigned int            SPI1CON             @ 0x222;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned FRMEN               : 1;
        volatile unsigned SPIFSD              : 1;
        volatile unsigned                     : 1;
        volatile unsigned DISSDO              : 1;
        volatile unsigned MODE16              : 1;
        volatile unsigned SMP                 : 1;
        volatile unsigned CKE                 : 1;
        volatile unsigned SSEN                : 1;
        volatile unsigned CKP                 : 1;
        volatile unsigned MSTEN               : 1;
        volatile unsigned SPRE2               : 1;
        volatile unsigned SPRE1               : 1;
        volatile unsigned SPRE0               : 1;
        volatile unsigned PPRE1               : 1;
        volatile unsigned PPRE0               : 1;
    };
} SPI1CONbits @ 0x222;
// bit variable definitions
static volatile bit PPRE0                @ ((unsigned)&SPI1CON)*8+0;
static volatile bit PPRE1                @ ((unsigned)&SPI1CON)*8+1;
static volatile bit SPRE0                @ ((unsigned)&SPI1CON)*8+2;
static volatile bit SPRE1                @ ((unsigned)&SPI1CON)*8+3;
static volatile bit SPRE2                @ ((unsigned)&SPI1CON)*8+4;
static volatile bit MSTEN                @ ((unsigned)&SPI1CON)*8+5;
static volatile bit CKP                  @ ((unsigned)&SPI1CON)*8+6;
static volatile bit SSEN                 @ ((unsigned)&SPI1CON)*8+7;
static volatile bit CKE                  @ ((unsigned)&SPI1CON)*8+8;
static volatile bit SMP                  @ ((unsigned)&SPI1CON)*8+9;
static volatile bit MODE16               @ ((unsigned)&SPI1CON)*8+10;
static volatile bit DISSDO               @ ((unsigned)&SPI1CON)*8+11;
static volatile bit SPIFSD               @ ((unsigned)&SPI1CON)*8+13;
static volatile bit FRMEN                @ ((unsigned)&SPI1CON)*8+14;

// Register: SPI1BUF
static volatile unsigned int            SPI1BUF             @ 0x224;

// Register: SPI2STAT
static volatile unsigned int            SPI2STAT            @ 0x226;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SPIEN               : 1;
        volatile unsigned                     : 1;
        volatile unsigned SPISIDL             : 1;
        volatile unsigned                     : 6;
        volatile unsigned SPIROV              : 1;
        volatile unsigned                     : 4;
        volatile unsigned SPITBF              : 1;
        volatile unsigned SPIRBF              : 1;
    };
} SPI2STATbits @ 0x226;
// bit variable definitions
// duplicate bit in register SPI1STAT, definition disabled
// static volatile bit SPIRBF               @ ((unsigned)&SPI2STAT)*8+0;
// duplicate bit in register SPI1STAT, definition disabled
// static volatile bit SPITBF               @ ((unsigned)&SPI2STAT)*8+1;
// duplicate bit in register SPI1STAT, definition disabled
// static volatile bit SPIROV               @ ((unsigned)&SPI2STAT)*8+6;
// duplicate bit in register SPI1STAT, definition disabled
// static volatile bit SPISIDL              @ ((unsigned)&SPI2STAT)*8+13;
// duplicate bit in register SPI1STAT, definition disabled
// static volatile bit SPIEN                @ ((unsigned)&SPI2STAT)*8+15;

// Register: SPI2CON
static volatile unsigned int            SPI2CON             @ 0x228;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned FRMEN               : 1;
        volatile unsigned SPIFSD              : 1;
        volatile unsigned                     : 1;
        volatile unsigned DISSDO              : 1;
        volatile unsigned MODE16              : 1;
        volatile unsigned SMP                 : 1;
        volatile unsigned CKE                 : 1;
        volatile unsigned SSEN                : 1;
        volatile unsigned CKP                 : 1;
        volatile unsigned MSTEN               : 1;
        volatile unsigned SPRE2               : 1;
        volatile unsigned SPRE1               : 1;
        volatile unsigned SPRE0               : 1;
        volatile unsigned PPRE1               : 1;
        volatile unsigned PPRE0               : 1;
    };
} SPI2CONbits @ 0x228;
// bit variable definitions
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit PPRE0                @ ((unsigned)&SPI2CON)*8+0;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit PPRE1                @ ((unsigned)&SPI2CON)*8+1;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit SPRE0                @ ((unsigned)&SPI2CON)*8+2;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit SPRE1                @ ((unsigned)&SPI2CON)*8+3;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit SPRE2                @ ((unsigned)&SPI2CON)*8+4;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit MSTEN                @ ((unsigned)&SPI2CON)*8+5;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit CKP                  @ ((unsigned)&SPI2CON)*8+6;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit SSEN                 @ ((unsigned)&SPI2CON)*8+7;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit CKE                  @ ((unsigned)&SPI2CON)*8+8;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit SMP                  @ ((unsigned)&SPI2CON)*8+9;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit MODE16               @ ((unsigned)&SPI2CON)*8+10;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit DISSDO               @ ((unsigned)&SPI2CON)*8+11;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit SPIFSD               @ ((unsigned)&SPI2CON)*8+13;
// duplicate bit in register SPI1CON, definition disabled
// static volatile bit FRMEN                @ ((unsigned)&SPI2CON)*8+14;

// Register: SPI2BUF
static volatile unsigned int            SPI2BUF             @ 0x22A;

// Register: ADCBUF0
static volatile unsigned int            ADCBUF0             @ 0x280;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF0             : 10;
    };
} ADCBUF0bits @ 0x280;

// Register: ADCBUF1
static volatile unsigned int            ADCBUF1             @ 0x282;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF1             : 10;
    };
} ADCBUF1bits @ 0x282;

// Register: ADCBUF2
static volatile unsigned int            ADCBUF2             @ 0x284;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF2             : 10;
    };
} ADCBUF2bits @ 0x284;

// Register: ADCBUF3
static volatile unsigned int            ADCBUF3             @ 0x286;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF3             : 10;
    };
} ADCBUF3bits @ 0x286;

// Register: ADCBUF4
static volatile unsigned int            ADCBUF4             @ 0x288;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF4             : 10;
    };
} ADCBUF4bits @ 0x288;

// Register: ADCBUF5
static volatile unsigned int            ADCBUF5             @ 0x28A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF5             : 10;
    };
} ADCBUF5bits @ 0x28A;

// Register: ADCBUF6
static volatile unsigned int            ADCBUF6             @ 0x28C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF6             : 10;
    };
} ADCBUF6bits @ 0x28C;

// Register: ADCBUF7
static volatile unsigned int            ADCBUF7             @ 0x28E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF7             : 10;
    };
} ADCBUF7bits @ 0x28E;

// Register: ADCBUF8
static volatile unsigned int            ADCBUF8             @ 0x290;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF8             : 10;
    };
} ADCBUF8bits @ 0x290;

// Register: ADCBUF9
static volatile unsigned int            ADCBUF9             @ 0x292;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUF9             : 10;
    };
} ADCBUF9bits @ 0x292;

// Register: ADCBUFA
static volatile unsigned int            ADCBUFA             @ 0x294;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUFA             : 10;
    };
} ADCBUFAbits @ 0x294;

// Register: ADCBUFB
static volatile unsigned int            ADCBUFB             @ 0x296;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUFB             : 10;
    };
} ADCBUFBbits @ 0x296;

// Register: ADCBUFC
static volatile unsigned int            ADCBUFC             @ 0x298;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUFC             : 10;
    };
} ADCBUFCbits @ 0x298;

// Register: ADCBUFD
static volatile unsigned int            ADCBUFD             @ 0x29A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUFD             : 10;
    };
} ADCBUFDbits @ 0x29A;

// Register: ADCBUFE
static volatile unsigned int            ADCBUFE             @ 0x29C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUFE             : 10;
    };
} ADCBUFEbits @ 0x29C;

// Register: ADCBUFF
static volatile unsigned int            ADCBUFF             @ 0x29E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned ADCBUFF             : 10;
    };
} ADCBUFFbits @ 0x29E;

// Register: ADCON1
static volatile unsigned int            ADCON1              @ 0x2A0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned ADON                : 1;
        volatile unsigned                     : 1;
        volatile unsigned ADSIDL              : 1;
        volatile unsigned                     : 3;
        volatile unsigned FORM                : 2;
        volatile unsigned SSRC                : 3;
        volatile unsigned                     : 1;
        volatile unsigned SIMSAM              : 1;
        volatile unsigned ASAM                : 1;
        volatile unsigned SAMP                : 1;
        volatile unsigned DONE                : 1;
    };
    struct {
        volatile unsigned                     : 6;
        volatile unsigned FORM1               : 1;
        volatile unsigned FORM0               : 1;
        volatile unsigned SSRC2               : 1;
        volatile unsigned SSRC1               : 1;
        volatile unsigned SSRC0               : 1;
        volatile unsigned                     : 5;
    };
} ADCON1bits @ 0x2A0;
// bit variable definitions
static volatile bit DONE                 @ ((unsigned)&ADCON1)*8+0;
static volatile bit SAMP                 @ ((unsigned)&ADCON1)*8+1;
static volatile bit ASAM                 @ ((unsigned)&ADCON1)*8+2;
static volatile bit SIMSAM               @ ((unsigned)&ADCON1)*8+3;
static volatile bit ADSIDL               @ ((unsigned)&ADCON1)*8+13;
static volatile bit ADON                 @ ((unsigned)&ADCON1)*8+15;
static volatile bit SSRC0                @ ((unsigned)&ADCON1)*8+5;
static volatile bit SSRC1                @ ((unsigned)&ADCON1)*8+6;
static volatile bit SSRC2                @ ((unsigned)&ADCON1)*8+7;
static volatile bit FORM0                @ ((unsigned)&ADCON1)*8+8;
static volatile bit FORM1                @ ((unsigned)&ADCON1)*8+9;

// Register: ADCON2
static volatile unsigned int            ADCON2              @ 0x2A2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned VCFG                : 3;
        volatile unsigned OFFCAL              : 1;
        volatile unsigned                     : 1;
        volatile unsigned CSCNA               : 1;
        volatile unsigned CHPS                : 2;
        volatile unsigned BUFS                : 1;
        volatile unsigned                     : 1;
        volatile unsigned SMPI                : 4;
        volatile unsigned BUFM                : 1;
        volatile unsigned ALTS                : 1;
    };
    struct {
        volatile unsigned VCFG2               : 1;
        volatile unsigned VCFG1               : 1;
        volatile unsigned VCFG0               : 1;
        volatile unsigned                     : 3;
        volatile unsigned CHPS1               : 1;
        volatile unsigned CHPS0               : 1;
        volatile unsigned                     : 2;
        volatile unsigned SMPI3               : 1;
        volatile unsigned SMPI2               : 1;
        volatile unsigned SMPI1               : 1;
        volatile unsigned SMPI0               : 1;
        volatile unsigned                     : 2;
    };
} ADCON2bits @ 0x2A2;
// bit variable definitions
static volatile bit ALTS                 @ ((unsigned)&ADCON2)*8+0;
static volatile bit BUFM                 @ ((unsigned)&ADCON2)*8+1;
static volatile bit BUFS                 @ ((unsigned)&ADCON2)*8+7;
static volatile bit CSCNA                @ ((unsigned)&ADCON2)*8+10;
static volatile bit OFFCAL               @ ((unsigned)&ADCON2)*8+12;
static volatile bit SMPI0                @ ((unsigned)&ADCON2)*8+2;
static volatile bit SMPI1                @ ((unsigned)&ADCON2)*8+3;
static volatile bit SMPI2                @ ((unsigned)&ADCON2)*8+4;
static volatile bit SMPI3                @ ((unsigned)&ADCON2)*8+5;
static volatile bit CHPS0                @ ((unsigned)&ADCON2)*8+8;
static volatile bit CHPS1                @ ((unsigned)&ADCON2)*8+9;
static volatile bit VCFG0                @ ((unsigned)&ADCON2)*8+13;
static volatile bit VCFG1                @ ((unsigned)&ADCON2)*8+14;
static volatile bit VCFG2                @ ((unsigned)&ADCON2)*8+15;

// Register: ADCON3
static volatile unsigned int            ADCON3              @ 0x2A4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SAMC                : 5;
        volatile unsigned ADRC                : 1;
        volatile unsigned                     : 1;
        volatile unsigned ADCS                : 6;
    };
    struct {
        volatile unsigned                     : 2;
        volatile unsigned                     : 1;
        volatile unsigned SAMC4               : 1;
        volatile unsigned SAMC3               : 1;
        volatile unsigned SAMC2               : 1;
        volatile unsigned SAMC1               : 1;
        volatile unsigned SAMC0               : 1;
        volatile unsigned                     : 2;
        volatile unsigned ADCS5               : 1;
        volatile unsigned ADCS4               : 1;
        volatile unsigned ADCS3               : 1;
        volatile unsigned ADCS2               : 1;
        volatile unsigned ADCS1               : 1;
        volatile unsigned ADCS0               : 1;
    };
} ADCON3bits @ 0x2A4;
// bit variable definitions
static volatile bit ADRC                 @ ((unsigned)&ADCON3)*8+7;
static volatile bit ADCS0                @ ((unsigned)&ADCON3)*8+0;
static volatile bit ADCS1                @ ((unsigned)&ADCON3)*8+1;
static volatile bit ADCS2                @ ((unsigned)&ADCON3)*8+2;
static volatile bit ADCS3                @ ((unsigned)&ADCON3)*8+3;
static volatile bit ADCS4                @ ((unsigned)&ADCON3)*8+4;
static volatile bit ADCS5                @ ((unsigned)&ADCON3)*8+5;
static volatile bit SAMC0                @ ((unsigned)&ADCON3)*8+8;
static volatile bit SAMC1                @ ((unsigned)&ADCON3)*8+9;
static volatile bit SAMC2                @ ((unsigned)&ADCON3)*8+10;
static volatile bit SAMC3                @ ((unsigned)&ADCON3)*8+11;
static volatile bit SAMC4                @ ((unsigned)&ADCON3)*8+12;

// Register: ADCHS
static volatile unsigned int            ADCHS               @ 0x2A6;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CH123NB             : 2;
        volatile unsigned CH123SB             : 1;
        volatile unsigned CH0NB               : 1;
        volatile unsigned CH0SB               : 4;
        volatile unsigned CH123NA             : 2;
        volatile unsigned CH123SA             : 1;
        volatile unsigned CH0NA               : 1;
        volatile unsigned CH0SA               : 4;
    };
    struct {
        volatile unsigned CH123NB1            : 1;
        volatile unsigned CH123NB0            : 1;
        volatile unsigned                     : 2;
        volatile unsigned CH0SB3              : 1;
        volatile unsigned CH0SB2              : 1;
        volatile unsigned CH0SB1              : 1;
        volatile unsigned CH0SB0              : 1;
        volatile unsigned CH123NA1            : 1;
        volatile unsigned CH123NA0            : 1;
        volatile unsigned                     : 2;
        volatile unsigned CH0SA3              : 1;
        volatile unsigned CH0SA2              : 1;
        volatile unsigned CH0SA1              : 1;
        volatile unsigned CH0SA0              : 1;
    };
} ADCHSbits @ 0x2A6;
// bit variable definitions
static volatile bit CH0NA                @ ((unsigned)&ADCHS)*8+4;
static volatile bit CH123SA              @ ((unsigned)&ADCHS)*8+5;
static volatile bit CH0NB                @ ((unsigned)&ADCHS)*8+12;
static volatile bit CH123SB              @ ((unsigned)&ADCHS)*8+13;
static volatile bit CH0SA0               @ ((unsigned)&ADCHS)*8+0;
static volatile bit CH0SA1               @ ((unsigned)&ADCHS)*8+1;
static volatile bit CH0SA2               @ ((unsigned)&ADCHS)*8+2;
static volatile bit CH0SA3               @ ((unsigned)&ADCHS)*8+3;
static volatile bit CH123NA0             @ ((unsigned)&ADCHS)*8+6;
static volatile bit CH123NA1             @ ((unsigned)&ADCHS)*8+7;
static volatile bit CH0SB0               @ ((unsigned)&ADCHS)*8+8;
static volatile bit CH0SB1               @ ((unsigned)&ADCHS)*8+9;
static volatile bit CH0SB2               @ ((unsigned)&ADCHS)*8+10;
static volatile bit CH0SB3               @ ((unsigned)&ADCHS)*8+11;
static volatile bit CH123NB0             @ ((unsigned)&ADCHS)*8+14;
static volatile bit CH123NB1             @ ((unsigned)&ADCHS)*8+15;

// Register: ADPCFG
static volatile unsigned int            ADPCFG              @ 0x2A8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned PCFG15              : 1;
        volatile unsigned PCFG14              : 1;
        volatile unsigned PCFG13              : 1;
        volatile unsigned PCFG12              : 1;
        volatile unsigned PCFG11              : 1;
        volatile unsigned PCFG10              : 1;
        volatile unsigned PCFG9               : 1;
        volatile unsigned PCFG8               : 1;
        volatile unsigned PCFG7               : 1;
        volatile unsigned PCFG6               : 1;
        volatile unsigned PCFG5               : 1;
        volatile unsigned PCFG4               : 1;
        volatile unsigned PCFG3               : 1;
        volatile unsigned PCFG2               : 1;
        volatile unsigned PCFG1               : 1;
        volatile unsigned PCFG0               : 1;
    };
} ADPCFGbits @ 0x2A8;
// bit variable definitions
static volatile bit PCFG0                @ ((unsigned)&ADPCFG)*8+0;
static volatile bit PCFG1                @ ((unsigned)&ADPCFG)*8+1;
static volatile bit PCFG2                @ ((unsigned)&ADPCFG)*8+2;
static volatile bit PCFG3                @ ((unsigned)&ADPCFG)*8+3;
static volatile bit PCFG4                @ ((unsigned)&ADPCFG)*8+4;
static volatile bit PCFG5                @ ((unsigned)&ADPCFG)*8+5;
static volatile bit PCFG6                @ ((unsigned)&ADPCFG)*8+6;
static volatile bit PCFG7                @ ((unsigned)&ADPCFG)*8+7;
static volatile bit PCFG8                @ ((unsigned)&ADPCFG)*8+8;
static volatile bit PCFG9                @ ((unsigned)&ADPCFG)*8+9;
static volatile bit PCFG10               @ ((unsigned)&ADPCFG)*8+10;
static volatile bit PCFG11               @ ((unsigned)&ADPCFG)*8+11;
static volatile bit PCFG12               @ ((unsigned)&ADPCFG)*8+12;
static volatile bit PCFG13               @ ((unsigned)&ADPCFG)*8+13;
static volatile bit PCFG14               @ ((unsigned)&ADPCFG)*8+14;
static volatile bit PCFG15               @ ((unsigned)&ADPCFG)*8+15;

// Register: ADCSSL
static volatile unsigned int            ADCSSL              @ 0x2AA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CSSL15              : 1;
        volatile unsigned CSSL14              : 1;
        volatile unsigned CSSL13              : 1;
        volatile unsigned CSSL12              : 1;
        volatile unsigned CSSL11              : 1;
        volatile unsigned CSSL10              : 1;
        volatile unsigned CSSL9               : 1;
        volatile unsigned CSSL8               : 1;
        volatile unsigned CSSL7               : 1;
        volatile unsigned CSSL6               : 1;
        volatile unsigned CSSL5               : 1;
        volatile unsigned CSSL4               : 1;
        volatile unsigned CSSL3               : 1;
        volatile unsigned CSSL2               : 1;
        volatile unsigned CSSL1               : 1;
        volatile unsigned CSSL0               : 1;
    };
} ADCSSLbits @ 0x2AA;
// bit variable definitions
static volatile bit CSSL0                @ ((unsigned)&ADCSSL)*8+0;
static volatile bit CSSL1                @ ((unsigned)&ADCSSL)*8+1;
static volatile bit CSSL2                @ ((unsigned)&ADCSSL)*8+2;
static volatile bit CSSL3                @ ((unsigned)&ADCSSL)*8+3;
static volatile bit CSSL4                @ ((unsigned)&ADCSSL)*8+4;
static volatile bit CSSL5                @ ((unsigned)&ADCSSL)*8+5;
static volatile bit CSSL6                @ ((unsigned)&ADCSSL)*8+6;
static volatile bit CSSL7                @ ((unsigned)&ADCSSL)*8+7;
static volatile bit CSSL8                @ ((unsigned)&ADCSSL)*8+8;
static volatile bit CSSL9                @ ((unsigned)&ADCSSL)*8+9;
static volatile bit CSSL10               @ ((unsigned)&ADCSSL)*8+10;
static volatile bit CSSL11               @ ((unsigned)&ADCSSL)*8+11;
static volatile bit CSSL12               @ ((unsigned)&ADCSSL)*8+12;
static volatile bit CSSL13               @ ((unsigned)&ADCSSL)*8+13;
static volatile bit CSSL14               @ ((unsigned)&ADCSSL)*8+14;
static volatile bit CSSL15               @ ((unsigned)&ADCSSL)*8+15;

// Register: TRISA
static volatile unsigned int            TRISA               @ 0x2C0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TRISA15             : 1;
        volatile unsigned TRISA14             : 1;
        volatile unsigned                     : 3;
        volatile unsigned TRISA10             : 1;
        volatile unsigned TRISA9              : 1;
        volatile unsigned                     : 9;
    };
} TRISAbits @ 0x2C0;
// bit variable definitions
static volatile bit TRISA9               @ ((unsigned)&TRISA)*8+9;
static volatile bit TRISA10              @ ((unsigned)&TRISA)*8+10;
static volatile bit TRISA14              @ ((unsigned)&TRISA)*8+14;
static volatile bit TRISA15              @ ((unsigned)&TRISA)*8+15;

// Register: PORTA
static volatile unsigned int            PORTA               @ 0x2C2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned RA15                : 1;
        volatile unsigned RA14                : 1;
        volatile unsigned                     : 3;
        volatile unsigned RA10                : 1;
        volatile unsigned RA9                 : 1;
        volatile unsigned                     : 9;
    };
} PORTAbits @ 0x2C2;
// bit variable definitions
static volatile bit RA9                  @ ((unsigned)&PORTA)*8+9;
static volatile bit RA10                 @ ((unsigned)&PORTA)*8+10;
static volatile bit RA14                 @ ((unsigned)&PORTA)*8+14;
static volatile bit RA15                 @ ((unsigned)&PORTA)*8+15;

// Register: LATA
static volatile unsigned int            LATA                @ 0x2C4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned LATA15              : 1;
        volatile unsigned LATA14              : 1;
        volatile unsigned                     : 3;
        volatile unsigned LATA10              : 1;
        volatile unsigned LATA9               : 1;
        volatile unsigned                     : 9;
    };
} LATAbits @ 0x2C4;
// bit variable definitions
static volatile bit LATA9                @ ((unsigned)&LATA)*8+9;
static volatile bit LATA10               @ ((unsigned)&LATA)*8+10;
static volatile bit LATA14               @ ((unsigned)&LATA)*8+14;
static volatile bit LATA15               @ ((unsigned)&LATA)*8+15;

// Register: TRISB
static volatile unsigned int            TRISB               @ 0x2C6;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TRISB15             : 1;
        volatile unsigned TRISB14             : 1;
        volatile unsigned TRISB13             : 1;
        volatile unsigned TRISB12             : 1;
        volatile unsigned TRISB11             : 1;
        volatile unsigned TRISB10             : 1;
        volatile unsigned TRISB9              : 1;
        volatile unsigned TRISB8              : 1;
        volatile unsigned TRISB7              : 1;
        volatile unsigned TRISB6              : 1;
        volatile unsigned TRISB5              : 1;
        volatile unsigned TRISB4              : 1;
        volatile unsigned TRISB3              : 1;
        volatile unsigned TRISB2              : 1;
        volatile unsigned TRISB1              : 1;
        volatile unsigned TRISB0              : 1;
    };
} TRISBbits @ 0x2C6;
// bit variable definitions
static volatile bit TRISB0               @ ((unsigned)&TRISB)*8+0;
static volatile bit TRISB1               @ ((unsigned)&TRISB)*8+1;
static volatile bit TRISB2               @ ((unsigned)&TRISB)*8+2;
static volatile bit TRISB3               @ ((unsigned)&TRISB)*8+3;
static volatile bit TRISB4               @ ((unsigned)&TRISB)*8+4;
static volatile bit TRISB5               @ ((unsigned)&TRISB)*8+5;
static volatile bit TRISB6               @ ((unsigned)&TRISB)*8+6;
static volatile bit TRISB7               @ ((unsigned)&TRISB)*8+7;
static volatile bit TRISB8               @ ((unsigned)&TRISB)*8+8;
static volatile bit TRISB9               @ ((unsigned)&TRISB)*8+9;
static volatile bit TRISB10              @ ((unsigned)&TRISB)*8+10;
static volatile bit TRISB11              @ ((unsigned)&TRISB)*8+11;
static volatile bit TRISB12              @ ((unsigned)&TRISB)*8+12;
static volatile bit TRISB13              @ ((unsigned)&TRISB)*8+13;
static volatile bit TRISB14              @ ((unsigned)&TRISB)*8+14;
static volatile bit TRISB15              @ ((unsigned)&TRISB)*8+15;

// Register: PORTB
static volatile unsigned int            PORTB               @ 0x2C8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned RB15                : 1;
        volatile unsigned RB14                : 1;
        volatile unsigned RB13                : 1;
        volatile unsigned RB12                : 1;
        volatile unsigned RB11                : 1;
        volatile unsigned RB10                : 1;
        volatile unsigned RB9                 : 1;
        volatile unsigned RB8                 : 1;
        volatile unsigned RB7                 : 1;
        volatile unsigned RB6                 : 1;
        volatile unsigned RB5                 : 1;
        volatile unsigned RB4                 : 1;
        volatile unsigned RB3                 : 1;
        volatile unsigned RB2                 : 1;
        volatile unsigned RB1                 : 1;
        volatile unsigned RB0                 : 1;
    };
} PORTBbits @ 0x2C8;
// bit variable definitions
static volatile bit RB0                  @ ((unsigned)&PORTB)*8+0;
static volatile bit RB1                  @ ((unsigned)&PORTB)*8+1;
static volatile bit RB2                  @ ((unsigned)&PORTB)*8+2;
static volatile bit RB3                  @ ((unsigned)&PORTB)*8+3;
static volatile bit RB4                  @ ((unsigned)&PORTB)*8+4;
static volatile bit RB5                  @ ((unsigned)&PORTB)*8+5;
static volatile bit RB6                  @ ((unsigned)&PORTB)*8+6;
static volatile bit RB7                  @ ((unsigned)&PORTB)*8+7;
static volatile bit RB8                  @ ((unsigned)&PORTB)*8+8;
static volatile bit RB9                  @ ((unsigned)&PORTB)*8+9;
static volatile bit RB10                 @ ((unsigned)&PORTB)*8+10;
static volatile bit RB11                 @ ((unsigned)&PORTB)*8+11;
static volatile bit RB12                 @ ((unsigned)&PORTB)*8+12;
static volatile bit RB13                 @ ((unsigned)&PORTB)*8+13;
static volatile bit RB14                 @ ((unsigned)&PORTB)*8+14;
static volatile bit RB15                 @ ((unsigned)&PORTB)*8+15;

// Register: LATB
static volatile unsigned int            LATB                @ 0x2CA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned LATB15              : 1;
        volatile unsigned LATB14              : 1;
        volatile unsigned LATB13              : 1;
        volatile unsigned LATB12              : 1;
        volatile unsigned LATB11              : 1;
        volatile unsigned LATB10              : 1;
        volatile unsigned LATB9               : 1;
        volatile unsigned LATB8               : 1;
        volatile unsigned LATB7               : 1;
        volatile unsigned LATB6               : 1;
        volatile unsigned LATB5               : 1;
        volatile unsigned LATB4               : 1;
        volatile unsigned LATB3               : 1;
        volatile unsigned LATB2               : 1;
        volatile unsigned LATB1               : 1;
        volatile unsigned LATB0               : 1;
    };
} LATBbits @ 0x2CA;
// bit variable definitions
static volatile bit LATB0                @ ((unsigned)&LATB)*8+0;
static volatile bit LATB1                @ ((unsigned)&LATB)*8+1;
static volatile bit LATB2                @ ((unsigned)&LATB)*8+2;
static volatile bit LATB3                @ ((unsigned)&LATB)*8+3;
static volatile bit LATB4                @ ((unsigned)&LATB)*8+4;
static volatile bit LATB5                @ ((unsigned)&LATB)*8+5;
static volatile bit LATB6                @ ((unsigned)&LATB)*8+6;
static volatile bit LATB7                @ ((unsigned)&LATB)*8+7;
static volatile bit LATB8                @ ((unsigned)&LATB)*8+8;
static volatile bit LATB9                @ ((unsigned)&LATB)*8+9;
static volatile bit LATB10               @ ((unsigned)&LATB)*8+10;
static volatile bit LATB11               @ ((unsigned)&LATB)*8+11;
static volatile bit LATB12               @ ((unsigned)&LATB)*8+12;
static volatile bit LATB13               @ ((unsigned)&LATB)*8+13;
static volatile bit LATB14               @ ((unsigned)&LATB)*8+14;
static volatile bit LATB15               @ ((unsigned)&LATB)*8+15;

// Register: TRISC
static volatile unsigned int            TRISC               @ 0x2CC;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TRISC15             : 1;
        volatile unsigned TRISC14             : 1;
        volatile unsigned TRISC13             : 1;
        volatile unsigned                     : 9;
        volatile unsigned TRISC3              : 1;
        volatile unsigned                     : 1;
        volatile unsigned TRISC1              : 1;
        volatile unsigned                     : 1;
    };
} TRISCbits @ 0x2CC;
// bit variable definitions
static volatile bit TRISC1               @ ((unsigned)&TRISC)*8+1;
static volatile bit TRISC3               @ ((unsigned)&TRISC)*8+3;
static volatile bit TRISC13              @ ((unsigned)&TRISC)*8+13;
static volatile bit TRISC14              @ ((unsigned)&TRISC)*8+14;
static volatile bit TRISC15              @ ((unsigned)&TRISC)*8+15;

// Register: PORTC
static volatile unsigned int            PORTC               @ 0x2CE;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned RC15                : 1;
        volatile unsigned RC14                : 1;
        volatile unsigned RC13                : 1;
        volatile unsigned                     : 9;
        volatile unsigned RC3                 : 1;
        volatile unsigned                     : 1;
        volatile unsigned RC1                 : 1;
        volatile unsigned                     : 1;
    };
} PORTCbits @ 0x2CE;
// bit variable definitions
static volatile bit RC1                  @ ((unsigned)&PORTC)*8+1;
static volatile bit RC3                  @ ((unsigned)&PORTC)*8+3;
static volatile bit RC13                 @ ((unsigned)&PORTC)*8+13;
static volatile bit RC14                 @ ((unsigned)&PORTC)*8+14;
static volatile bit RC15                 @ ((unsigned)&PORTC)*8+15;

// Register: LATC
static volatile unsigned int            LATC                @ 0x2D0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned LATC15              : 1;
        volatile unsigned LATC14              : 1;
        volatile unsigned LATC13              : 1;
        volatile unsigned                     : 9;
        volatile unsigned LATC3               : 1;
        volatile unsigned                     : 1;
        volatile unsigned LATC1               : 1;
        volatile unsigned                     : 1;
    };
} LATCbits @ 0x2D0;
// bit variable definitions
static volatile bit LATC1                @ ((unsigned)&LATC)*8+1;
static volatile bit LATC3                @ ((unsigned)&LATC)*8+3;
static volatile bit LATC13               @ ((unsigned)&LATC)*8+13;
static volatile bit LATC14               @ ((unsigned)&LATC)*8+14;
static volatile bit LATC15               @ ((unsigned)&LATC)*8+15;

// Register: TRISD
static volatile unsigned int            TRISD               @ 0x2D2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TRISD15             : 1;
        volatile unsigned TRISD14             : 1;
        volatile unsigned TRISD13             : 1;
        volatile unsigned TRISD12             : 1;
        volatile unsigned TRISD11             : 1;
        volatile unsigned TRISD10             : 1;
        volatile unsigned TRISD9              : 1;
        volatile unsigned TRISD8              : 1;
        volatile unsigned TRISD7              : 1;
        volatile unsigned TRISD6              : 1;
        volatile unsigned TRISD5              : 1;
        volatile unsigned TRISD4              : 1;
        volatile unsigned TRISD3              : 1;
        volatile unsigned TRISD2              : 1;
        volatile unsigned TRISD1              : 1;
        volatile unsigned TRISD0              : 1;
    };
} TRISDbits @ 0x2D2;
// bit variable definitions
static volatile bit TRISD0               @ ((unsigned)&TRISD)*8+0;
static volatile bit TRISD1               @ ((unsigned)&TRISD)*8+1;
static volatile bit TRISD2               @ ((unsigned)&TRISD)*8+2;
static volatile bit TRISD3               @ ((unsigned)&TRISD)*8+3;
static volatile bit TRISD4               @ ((unsigned)&TRISD)*8+4;
static volatile bit TRISD5               @ ((unsigned)&TRISD)*8+5;
static volatile bit TRISD6               @ ((unsigned)&TRISD)*8+6;
static volatile bit TRISD7               @ ((unsigned)&TRISD)*8+7;
static volatile bit TRISD8               @ ((unsigned)&TRISD)*8+8;
static volatile bit TRISD9               @ ((unsigned)&TRISD)*8+9;
static volatile bit TRISD10              @ ((unsigned)&TRISD)*8+10;
static volatile bit TRISD11              @ ((unsigned)&TRISD)*8+11;
static volatile bit TRISD12              @ ((unsigned)&TRISD)*8+12;
static volatile bit TRISD13              @ ((unsigned)&TRISD)*8+13;
static volatile bit TRISD14              @ ((unsigned)&TRISD)*8+14;
static volatile bit TRISD15              @ ((unsigned)&TRISD)*8+15;

// Register: PORTD
static volatile unsigned int            PORTD               @ 0x2D4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned RD15                : 1;
        volatile unsigned RD14                : 1;
        volatile unsigned RD13                : 1;
        volatile unsigned RD12                : 1;
        volatile unsigned RD11                : 1;
        volatile unsigned RD10                : 1;
        volatile unsigned RD9                 : 1;
        volatile unsigned RD8                 : 1;
        volatile unsigned RD7                 : 1;
        volatile unsigned RD6                 : 1;
        volatile unsigned RD5                 : 1;
        volatile unsigned RD4                 : 1;
        volatile unsigned RD3                 : 1;
        volatile unsigned RD2                 : 1;
        volatile unsigned RD1                 : 1;
        volatile unsigned RD0                 : 1;
    };
} PORTDbits @ 0x2D4;
// bit variable definitions
static volatile bit RD0                  @ ((unsigned)&PORTD)*8+0;
static volatile bit RD1                  @ ((unsigned)&PORTD)*8+1;
static volatile bit RD2                  @ ((unsigned)&PORTD)*8+2;
static volatile bit RD3                  @ ((unsigned)&PORTD)*8+3;
static volatile bit RD4                  @ ((unsigned)&PORTD)*8+4;
static volatile bit RD5                  @ ((unsigned)&PORTD)*8+5;
static volatile bit RD6                  @ ((unsigned)&PORTD)*8+6;
static volatile bit RD7                  @ ((unsigned)&PORTD)*8+7;
static volatile bit RD8                  @ ((unsigned)&PORTD)*8+8;
static volatile bit RD9                  @ ((unsigned)&PORTD)*8+9;
static volatile bit RD10                 @ ((unsigned)&PORTD)*8+10;
static volatile bit RD11                 @ ((unsigned)&PORTD)*8+11;
static volatile bit RD12                 @ ((unsigned)&PORTD)*8+12;
static volatile bit RD13                 @ ((unsigned)&PORTD)*8+13;
static volatile bit RD14                 @ ((unsigned)&PORTD)*8+14;
static volatile bit RD15                 @ ((unsigned)&PORTD)*8+15;

// Register: LATD
static volatile unsigned int            LATD                @ 0x2D6;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned LATD15              : 1;
        volatile unsigned LATD14              : 1;
        volatile unsigned LATD13              : 1;
        volatile unsigned LATD12              : 1;
        volatile unsigned LATD11              : 1;
        volatile unsigned LATD10              : 1;
        volatile unsigned LATD9               : 1;
        volatile unsigned LATD8               : 1;
        volatile unsigned LATD7               : 1;
        volatile unsigned LATD6               : 1;
        volatile unsigned LATD5               : 1;
        volatile unsigned LATD4               : 1;
        volatile unsigned LATD3               : 1;
        volatile unsigned LATD2               : 1;
        volatile unsigned LATD1               : 1;
        volatile unsigned LATD0               : 1;
    };
} LATDbits @ 0x2D6;
// bit variable definitions
static volatile bit LATD0                @ ((unsigned)&LATD)*8+0;
static volatile bit LATD1                @ ((unsigned)&LATD)*8+1;
static volatile bit LATD2                @ ((unsigned)&LATD)*8+2;
static volatile bit LATD3                @ ((unsigned)&LATD)*8+3;
static volatile bit LATD4                @ ((unsigned)&LATD)*8+4;
static volatile bit LATD5                @ ((unsigned)&LATD)*8+5;
static volatile bit LATD6                @ ((unsigned)&LATD)*8+6;
static volatile bit LATD7                @ ((unsigned)&LATD)*8+7;
static volatile bit LATD8                @ ((unsigned)&LATD)*8+8;
static volatile bit LATD9                @ ((unsigned)&LATD)*8+9;
static volatile bit LATD10               @ ((unsigned)&LATD)*8+10;
static volatile bit LATD11               @ ((unsigned)&LATD)*8+11;
static volatile bit LATD12               @ ((unsigned)&LATD)*8+12;
static volatile bit LATD13               @ ((unsigned)&LATD)*8+13;
static volatile bit LATD14               @ ((unsigned)&LATD)*8+14;
static volatile bit LATD15               @ ((unsigned)&LATD)*8+15;

// Register: TRISE
static volatile unsigned int            TRISE               @ 0x2D8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned TRISE9              : 1;
        volatile unsigned TRISE8              : 1;
        volatile unsigned TRISE7              : 1;
        volatile unsigned TRISE6              : 1;
        volatile unsigned TRISE5              : 1;
        volatile unsigned TRISE4              : 1;
        volatile unsigned TRISE3              : 1;
        volatile unsigned TRISE2              : 1;
        volatile unsigned TRISE1              : 1;
        volatile unsigned TRISE0              : 1;
    };
} TRISEbits @ 0x2D8;
// bit variable definitions
static volatile bit TRISE0               @ ((unsigned)&TRISE)*8+0;
static volatile bit TRISE1               @ ((unsigned)&TRISE)*8+1;
static volatile bit TRISE2               @ ((unsigned)&TRISE)*8+2;
static volatile bit TRISE3               @ ((unsigned)&TRISE)*8+3;
static volatile bit TRISE4               @ ((unsigned)&TRISE)*8+4;
static volatile bit TRISE5               @ ((unsigned)&TRISE)*8+5;
static volatile bit TRISE6               @ ((unsigned)&TRISE)*8+6;
static volatile bit TRISE7               @ ((unsigned)&TRISE)*8+7;
static volatile bit TRISE8               @ ((unsigned)&TRISE)*8+8;
static volatile bit TRISE9               @ ((unsigned)&TRISE)*8+9;

// Register: PORTE
static volatile unsigned int            PORTE               @ 0x2DA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned RE9                 : 1;
        volatile unsigned RE8                 : 1;
        volatile unsigned RE7                 : 1;
        volatile unsigned RE6                 : 1;
        volatile unsigned RE5                 : 1;
        volatile unsigned RE4                 : 1;
        volatile unsigned RE3                 : 1;
        volatile unsigned RE2                 : 1;
        volatile unsigned RE1                 : 1;
        volatile unsigned RE0                 : 1;
    };
} PORTEbits @ 0x2DA;
// bit variable definitions
static volatile bit RE0                  @ ((unsigned)&PORTE)*8+0;
static volatile bit RE1                  @ ((unsigned)&PORTE)*8+1;
static volatile bit RE2                  @ ((unsigned)&PORTE)*8+2;
static volatile bit RE3                  @ ((unsigned)&PORTE)*8+3;
static volatile bit RE4                  @ ((unsigned)&PORTE)*8+4;
static volatile bit RE5                  @ ((unsigned)&PORTE)*8+5;
static volatile bit RE6                  @ ((unsigned)&PORTE)*8+6;
static volatile bit RE7                  @ ((unsigned)&PORTE)*8+7;
static volatile bit RE8                  @ ((unsigned)&PORTE)*8+8;
static volatile bit RE9                  @ ((unsigned)&PORTE)*8+9;

// Register: LATE
static volatile unsigned int            LATE                @ 0x2DC;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned LATE9               : 1;
        volatile unsigned LATE8               : 1;
        volatile unsigned LATE7               : 1;
        volatile unsigned LATE6               : 1;
        volatile unsigned LATE5               : 1;
        volatile unsigned LATE4               : 1;
        volatile unsigned LATE3               : 1;
        volatile unsigned LATE2               : 1;
        volatile unsigned LATE1               : 1;
        volatile unsigned LATE0               : 1;
    };
} LATEbits @ 0x2DC;
// bit variable definitions
static volatile bit LATE0                @ ((unsigned)&LATE)*8+0;
static volatile bit LATE1                @ ((unsigned)&LATE)*8+1;
static volatile bit LATE2                @ ((unsigned)&LATE)*8+2;
static volatile bit LATE3                @ ((unsigned)&LATE)*8+3;
static volatile bit LATE4                @ ((unsigned)&LATE)*8+4;
static volatile bit LATE5                @ ((unsigned)&LATE)*8+5;
static volatile bit LATE6                @ ((unsigned)&LATE)*8+6;
static volatile bit LATE7                @ ((unsigned)&LATE)*8+7;
static volatile bit LATE8                @ ((unsigned)&LATE)*8+8;
static volatile bit LATE9                @ ((unsigned)&LATE)*8+9;

// Register: TRISF
static volatile unsigned int            TRISF               @ 0x2DE;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 7;
        volatile unsigned TRISF8              : 1;
        volatile unsigned TRISF7              : 1;
        volatile unsigned TRISF6              : 1;
        volatile unsigned TRISF5              : 1;
        volatile unsigned TRISF4              : 1;
        volatile unsigned TRISF3              : 1;
        volatile unsigned TRISF2              : 1;
        volatile unsigned TRISF1              : 1;
        volatile unsigned TRISF0              : 1;
    };
} TRISFbits @ 0x2DE;
// bit variable definitions
static volatile bit TRISF0               @ ((unsigned)&TRISF)*8+0;
static volatile bit TRISF1               @ ((unsigned)&TRISF)*8+1;
static volatile bit TRISF2               @ ((unsigned)&TRISF)*8+2;
static volatile bit TRISF3               @ ((unsigned)&TRISF)*8+3;
static volatile bit TRISF4               @ ((unsigned)&TRISF)*8+4;
static volatile bit TRISF5               @ ((unsigned)&TRISF)*8+5;
static volatile bit TRISF6               @ ((unsigned)&TRISF)*8+6;
static volatile bit TRISF7               @ ((unsigned)&TRISF)*8+7;
static volatile bit TRISF8               @ ((unsigned)&TRISF)*8+8;

// Register: PORTF
static volatile unsigned int            PORTF               @ 0x2E0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 7;
        volatile unsigned RF8                 : 1;
        volatile unsigned RF7                 : 1;
        volatile unsigned RF6                 : 1;
        volatile unsigned RF5                 : 1;
        volatile unsigned RF4                 : 1;
        volatile unsigned RF3                 : 1;
        volatile unsigned RF2                 : 1;
        volatile unsigned RF1                 : 1;
        volatile unsigned RF0                 : 1;
    };
} PORTFbits @ 0x2E0;
// bit variable definitions
static volatile bit RF0                  @ ((unsigned)&PORTF)*8+0;
static volatile bit RF1                  @ ((unsigned)&PORTF)*8+1;
static volatile bit RF2                  @ ((unsigned)&PORTF)*8+2;
static volatile bit RF3                  @ ((unsigned)&PORTF)*8+3;
static volatile bit RF4                  @ ((unsigned)&PORTF)*8+4;
static volatile bit RF5                  @ ((unsigned)&PORTF)*8+5;
static volatile bit RF6                  @ ((unsigned)&PORTF)*8+6;
static volatile bit RF7                  @ ((unsigned)&PORTF)*8+7;
static volatile bit RF8                  @ ((unsigned)&PORTF)*8+8;

// Register: LATF
static volatile unsigned int            LATF                @ 0x2E2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 7;
        volatile unsigned LATF8               : 1;
        volatile unsigned LATF7               : 1;
        volatile unsigned LATF6               : 1;
        volatile unsigned LATF5               : 1;
        volatile unsigned LATF4               : 1;
        volatile unsigned LATF3               : 1;
        volatile unsigned LATF2               : 1;
        volatile unsigned LATF1               : 1;
        volatile unsigned LATF0               : 1;
    };
} LATFbits @ 0x2E2;
// bit variable definitions
static volatile bit LATF0                @ ((unsigned)&LATF)*8+0;
static volatile bit LATF1                @ ((unsigned)&LATF)*8+1;
static volatile bit LATF2                @ ((unsigned)&LATF)*8+2;
static volatile bit LATF3                @ ((unsigned)&LATF)*8+3;
static volatile bit LATF4                @ ((unsigned)&LATF)*8+4;
static volatile bit LATF5                @ ((unsigned)&LATF)*8+5;
static volatile bit LATF6                @ ((unsigned)&LATF)*8+6;
static volatile bit LATF7                @ ((unsigned)&LATF)*8+7;
static volatile bit LATF8                @ ((unsigned)&LATF)*8+8;

// Register: TRISG
static volatile unsigned int            TRISG               @ 0x2E4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned TRISG9              : 1;
        volatile unsigned TRISG8              : 1;
        volatile unsigned TRISG7              : 1;
        volatile unsigned TRISG6              : 1;
        volatile unsigned                     : 2;
        volatile unsigned TRISG3              : 1;
        volatile unsigned TRISG2              : 1;
        volatile unsigned TRISG1              : 1;
        volatile unsigned TRISG0              : 1;
    };
} TRISGbits @ 0x2E4;
// bit variable definitions
static volatile bit TRISG0               @ ((unsigned)&TRISG)*8+0;
static volatile bit TRISG1               @ ((unsigned)&TRISG)*8+1;
static volatile bit TRISG2               @ ((unsigned)&TRISG)*8+2;
static volatile bit TRISG3               @ ((unsigned)&TRISG)*8+3;
static volatile bit TRISG6               @ ((unsigned)&TRISG)*8+6;
static volatile bit TRISG7               @ ((unsigned)&TRISG)*8+7;
static volatile bit TRISG8               @ ((unsigned)&TRISG)*8+8;
static volatile bit TRISG9               @ ((unsigned)&TRISG)*8+9;

// Register: PORTG
static volatile unsigned int            PORTG               @ 0x2E6;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned RG9                 : 1;
        volatile unsigned RG8                 : 1;
        volatile unsigned RG7                 : 1;
        volatile unsigned RG6                 : 1;
        volatile unsigned                     : 2;
        volatile unsigned RG3                 : 1;
        volatile unsigned RG2                 : 1;
        volatile unsigned RG1                 : 1;
        volatile unsigned RG0                 : 1;
    };
} PORTGbits @ 0x2E6;
// bit variable definitions
static volatile bit RG0                  @ ((unsigned)&PORTG)*8+0;
static volatile bit RG1                  @ ((unsigned)&PORTG)*8+1;
static volatile bit RG2                  @ ((unsigned)&PORTG)*8+2;
static volatile bit RG3                  @ ((unsigned)&PORTG)*8+3;
static volatile bit RG6                  @ ((unsigned)&PORTG)*8+6;
static volatile bit RG7                  @ ((unsigned)&PORTG)*8+7;
static volatile bit RG8                  @ ((unsigned)&PORTG)*8+8;
static volatile bit RG9                  @ ((unsigned)&PORTG)*8+9;

// Register: LATG
static volatile unsigned int            LATG                @ 0x2E8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 6;
        volatile unsigned LATG9               : 1;
        volatile unsigned LATG8               : 1;
        volatile unsigned LATG7               : 1;
        volatile unsigned LATG6               : 1;
        volatile unsigned                     : 2;
        volatile unsigned LATG3               : 1;
        volatile unsigned LATG2               : 1;
        volatile unsigned LATG1               : 1;
        volatile unsigned LATG0               : 1;
    };
} LATGbits @ 0x2E8;
// bit variable definitions
static volatile bit LATG0                @ ((unsigned)&LATG)*8+0;
static volatile bit LATG1                @ ((unsigned)&LATG)*8+1;
static volatile bit LATG2                @ ((unsigned)&LATG)*8+2;
static volatile bit LATG3                @ ((unsigned)&LATG)*8+3;
static volatile bit LATG6                @ ((unsigned)&LATG)*8+6;
static volatile bit LATG7                @ ((unsigned)&LATG)*8+7;
static volatile bit LATG8                @ ((unsigned)&LATG)*8+8;
static volatile bit LATG9                @ ((unsigned)&LATG)*8+9;

// Register: C1RXF0SID
static volatile unsigned int            C1RXF0SID           @ 0x300;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C1RXF0SIDbits @ 0x300;
// bit variable definitions
static volatile bit EXIDE                @ ((unsigned)&C1RXF0SID)*8+0;
static volatile bit SID0                 @ ((unsigned)&C1RXF0SID)*8+2;
static volatile bit SID1                 @ ((unsigned)&C1RXF0SID)*8+3;
static volatile bit SID2                 @ ((unsigned)&C1RXF0SID)*8+4;
static volatile bit SID3                 @ ((unsigned)&C1RXF0SID)*8+5;
static volatile bit SID4                 @ ((unsigned)&C1RXF0SID)*8+6;
static volatile bit SID5                 @ ((unsigned)&C1RXF0SID)*8+7;
static volatile bit SID6                 @ ((unsigned)&C1RXF0SID)*8+8;
static volatile bit SID7                 @ ((unsigned)&C1RXF0SID)*8+9;
static volatile bit SID8                 @ ((unsigned)&C1RXF0SID)*8+10;
static volatile bit SID9                 @ ((unsigned)&C1RXF0SID)*8+11;
static volatile bit SID10                @ ((unsigned)&C1RXF0SID)*8+12;

// Register: C1RXF0EIDH
static volatile unsigned int            C1RXF0EIDH          @ 0x302;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RXF0EIDHbits @ 0x302;
// bit variable definitions
static volatile bit EID6                 @ ((unsigned)&C1RXF0EIDH)*8+0;
static volatile bit EID7                 @ ((unsigned)&C1RXF0EIDH)*8+1;
static volatile bit EID8                 @ ((unsigned)&C1RXF0EIDH)*8+2;
static volatile bit EID9                 @ ((unsigned)&C1RXF0EIDH)*8+3;
static volatile bit EID10                @ ((unsigned)&C1RXF0EIDH)*8+4;
static volatile bit EID11                @ ((unsigned)&C1RXF0EIDH)*8+5;
static volatile bit EID12                @ ((unsigned)&C1RXF0EIDH)*8+6;
static volatile bit EID13                @ ((unsigned)&C1RXF0EIDH)*8+7;
static volatile bit EID14                @ ((unsigned)&C1RXF0EIDH)*8+8;
static volatile bit EID15                @ ((unsigned)&C1RXF0EIDH)*8+9;
static volatile bit EID16                @ ((unsigned)&C1RXF0EIDH)*8+10;
static volatile bit EID17                @ ((unsigned)&C1RXF0EIDH)*8+11;

// Register: C1RXF0EIDL
static volatile unsigned int            C1RXF0EIDL          @ 0x304;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C1RXF0EIDLbits @ 0x304;
// bit variable definitions
static volatile bit EID0                 @ ((unsigned)&C1RXF0EIDL)*8+10;
static volatile bit EID1                 @ ((unsigned)&C1RXF0EIDL)*8+11;
static volatile bit EID2                 @ ((unsigned)&C1RXF0EIDL)*8+12;
static volatile bit EID3                 @ ((unsigned)&C1RXF0EIDL)*8+13;
static volatile bit EID4                 @ ((unsigned)&C1RXF0EIDL)*8+14;
static volatile bit EID5                 @ ((unsigned)&C1RXF0EIDL)*8+15;

// Register: C1RXF1SID
static volatile unsigned int            C1RXF1SID           @ 0x308;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C1RXF1SIDbits @ 0x308;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C1RXF1SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RXF1SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RXF1SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RXF1SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RXF1SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RXF1SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RXF1SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RXF1SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RXF1SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RXF1SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RXF1SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RXF1SID)*8+12;

// Register: C1RXF1EIDH
static volatile unsigned int            C1RXF1EIDH          @ 0x30A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RXF1EIDHbits @ 0x30A;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RXF1EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RXF1EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RXF1EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RXF1EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RXF1EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RXF1EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RXF1EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RXF1EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RXF1EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RXF1EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RXF1EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RXF1EIDH)*8+11;

// Register: C1RXF1EIDL
static volatile unsigned int            C1RXF1EIDL          @ 0x30C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C1RXF1EIDLbits @ 0x30C;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RXF1EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RXF1EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RXF1EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RXF1EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RXF1EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RXF1EIDL)*8+15;

// Register: C1RXF2SID
static volatile unsigned int            C1RXF2SID           @ 0x310;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C1RXF2SIDbits @ 0x310;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C1RXF2SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RXF2SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RXF2SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RXF2SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RXF2SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RXF2SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RXF2SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RXF2SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RXF2SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RXF2SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RXF2SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RXF2SID)*8+12;

// Register: C1RXF2EIDH
static volatile unsigned int            C1RXF2EIDH          @ 0x312;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RXF2EIDHbits @ 0x312;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RXF2EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RXF2EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RXF2EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RXF2EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RXF2EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RXF2EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RXF2EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RXF2EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RXF2EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RXF2EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RXF2EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RXF2EIDH)*8+11;

// Register: C1RXF2EIDL
static volatile unsigned int            C1RXF2EIDL          @ 0x314;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C1RXF2EIDLbits @ 0x314;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RXF2EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RXF2EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RXF2EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RXF2EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RXF2EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RXF2EIDL)*8+15;

// Register: C1RXF3SID
static volatile unsigned int            C1RXF3SID           @ 0x318;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C1RXF3SIDbits @ 0x318;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C1RXF3SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RXF3SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RXF3SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RXF3SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RXF3SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RXF3SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RXF3SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RXF3SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RXF3SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RXF3SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RXF3SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RXF3SID)*8+12;

// Register: C1RXF3EIDH
static volatile unsigned int            C1RXF3EIDH          @ 0x31A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RXF3EIDHbits @ 0x31A;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RXF3EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RXF3EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RXF3EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RXF3EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RXF3EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RXF3EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RXF3EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RXF3EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RXF3EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RXF3EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RXF3EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RXF3EIDH)*8+11;

// Register: C1RXF3EIDL
static volatile unsigned int            C1RXF3EIDL          @ 0x31C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C1RXF3EIDLbits @ 0x31C;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RXF3EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RXF3EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RXF3EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RXF3EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RXF3EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RXF3EIDL)*8+15;

// Register: C1RXF4SID
static volatile unsigned int            C1RXF4SID           @ 0x320;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C1RXF4SIDbits @ 0x320;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C1RXF4SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RXF4SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RXF4SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RXF4SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RXF4SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RXF4SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RXF4SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RXF4SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RXF4SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RXF4SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RXF4SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RXF4SID)*8+12;

// Register: C1RXF4EIDH
static volatile unsigned int            C1RXF4EIDH          @ 0x322;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RXF4EIDHbits @ 0x322;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RXF4EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RXF4EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RXF4EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RXF4EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RXF4EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RXF4EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RXF4EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RXF4EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RXF4EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RXF4EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RXF4EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RXF4EIDH)*8+11;

// Register: C1RXF4EIDL
static volatile unsigned int            C1RXF4EIDL          @ 0x324;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C1RXF4EIDLbits @ 0x324;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RXF4EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RXF4EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RXF4EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RXF4EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RXF4EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RXF4EIDL)*8+15;

// Register: C1RXF5SID
static volatile unsigned int            C1RXF5SID           @ 0x328;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C1RXF5SIDbits @ 0x328;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C1RXF5SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RXF5SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RXF5SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RXF5SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RXF5SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RXF5SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RXF5SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RXF5SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RXF5SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RXF5SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RXF5SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RXF5SID)*8+12;

// Register: C1RXF5EIDH
static volatile unsigned int            C1RXF5EIDH          @ 0x32A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RXF5EIDHbits @ 0x32A;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RXF5EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RXF5EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RXF5EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RXF5EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RXF5EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RXF5EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RXF5EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RXF5EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RXF5EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RXF5EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RXF5EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RXF5EIDH)*8+11;

// Register: C1RXF5EIDL
static volatile unsigned int            C1RXF5EIDL          @ 0x32C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C1RXF5EIDLbits @ 0x32C;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RXF5EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RXF5EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RXF5EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RXF5EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RXF5EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RXF5EIDL)*8+15;

// Register: C1RXM0SID
static volatile unsigned int            C1RXM0SID           @ 0x330;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned MIDE                : 1;
    };
} C1RXM0SIDbits @ 0x330;
// bit variable definitions
static volatile bit MIDE                 @ ((unsigned)&C1RXM0SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RXM0SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RXM0SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RXM0SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RXM0SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RXM0SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RXM0SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RXM0SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RXM0SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RXM0SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RXM0SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RXM0SID)*8+12;

// Register: C1RXM0EIDH
static volatile unsigned int            C1RXM0EIDH          @ 0x332;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RXM0EIDHbits @ 0x332;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RXM0EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RXM0EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RXM0EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RXM0EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RXM0EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RXM0EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RXM0EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RXM0EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RXM0EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RXM0EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RXM0EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RXM0EIDH)*8+11;

// Register: C1RXM0EIDL
static volatile unsigned int            C1RXM0EIDL          @ 0x334;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C1RXM0EIDLbits @ 0x334;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RXM0EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RXM0EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RXM0EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RXM0EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RXM0EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RXM0EIDL)*8+15;

// Register: C1RXM1SID
static volatile unsigned int            C1RXM1SID           @ 0x338;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned MIDE                : 1;
    };
} C1RXM1SIDbits @ 0x338;
// bit variable definitions
// duplicate bit in register C1RXM0SID, definition disabled
// static volatile bit MIDE                 @ ((unsigned)&C1RXM1SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RXM1SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RXM1SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RXM1SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RXM1SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RXM1SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RXM1SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RXM1SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RXM1SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RXM1SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RXM1SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RXM1SID)*8+12;

// Register: C1RXM1EIDH
static volatile unsigned int            C1RXM1EIDH          @ 0x33A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RXM1EIDHbits @ 0x33A;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RXM1EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RXM1EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RXM1EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RXM1EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RXM1EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RXM1EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RXM1EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RXM1EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RXM1EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RXM1EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RXM1EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RXM1EIDH)*8+11;

// Register: C1RXM1EIDL
static volatile unsigned int            C1RXM1EIDL          @ 0x33C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C1RXM1EIDLbits @ 0x33C;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RXM1EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RXM1EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RXM1EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RXM1EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RXM1EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RXM1EIDL)*8+15;

// Register: C1TX2SID
static volatile unsigned int            C1TX2SID            @ 0x340;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned                     : 3;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C1TX2SIDbits @ 0x340;
// bit variable definitions
static volatile bit TXIDE                @ ((unsigned)&C1TX2SID)*8+0;
static volatile bit SRR                  @ ((unsigned)&C1TX2SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1TX2SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1TX2SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1TX2SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1TX2SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1TX2SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1TX2SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1TX2SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1TX2SID)*8+12;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1TX2SID)*8+13;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1TX2SID)*8+14;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1TX2SID)*8+15;

// Register: C1TX2EID
static volatile unsigned int            C1TX2EID            @ 0x342;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned                     : 4;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1TX2EIDbits @ 0x342;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1TX2EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1TX2EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1TX2EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1TX2EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1TX2EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1TX2EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1TX2EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1TX2EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1TX2EID)*8+12;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1TX2EID)*8+13;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1TX2EID)*8+14;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1TX2EID)*8+15;

// Register: C1TX2DLC
static volatile unsigned int            C1TX2DLC            @ 0x344;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned TXRTR               : 1;
        volatile unsigned TXRB1               : 1;
        volatile unsigned TXRB0               : 1;
        volatile unsigned DLC                 : 4;
        volatile unsigned                     : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
        volatile unsigned                     : 3;
    };
} C1TX2DLCbits @ 0x344;
// bit variable definitions
static volatile bit TXRB0                @ ((unsigned)&C1TX2DLC)*8+7;
static volatile bit TXRB1                @ ((unsigned)&C1TX2DLC)*8+8;
static volatile bit TXRTR                @ ((unsigned)&C1TX2DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1TX2DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1TX2DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1TX2DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1TX2DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1TX2DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1TX2DLC)*8+15;
static volatile bit DLC0                 @ ((unsigned)&C1TX2DLC)*8+3;
static volatile bit DLC1                 @ ((unsigned)&C1TX2DLC)*8+4;
static volatile bit DLC2                 @ ((unsigned)&C1TX2DLC)*8+5;
static volatile bit DLC3                 @ ((unsigned)&C1TX2DLC)*8+6;

// Register: C1TX2B1
static volatile unsigned int            C1TX2B1             @ 0x346;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB2D1              : 8;
        volatile unsigned TXB2D0              : 8;
    };
    struct {
        volatile unsigned TXB2D17             : 1;
        volatile unsigned TXB2D16             : 1;
        volatile unsigned TXB2D15             : 1;
        volatile unsigned TXB2D14             : 1;
        volatile unsigned TXB2D13             : 1;
        volatile unsigned TXB2D12             : 1;
        volatile unsigned TXB2D11             : 1;
        volatile unsigned TXB2D10             : 1;
        volatile unsigned TXB2D07             : 1;
        volatile unsigned TXB2D06             : 1;
        volatile unsigned TXB2D05             : 1;
        volatile unsigned TXB2D04             : 1;
        volatile unsigned TXB2D03             : 1;
        volatile unsigned TXB2D02             : 1;
        volatile unsigned TXB2D01             : 1;
        volatile unsigned TXB2D00             : 1;
    };
} C1TX2B1bits @ 0x346;
// bit variable definitions
static volatile bit TXB2D00              @ ((unsigned)&C1TX2B1)*8+0;
static volatile bit TXB2D01              @ ((unsigned)&C1TX2B1)*8+1;
static volatile bit TXB2D02              @ ((unsigned)&C1TX2B1)*8+2;
static volatile bit TXB2D03              @ ((unsigned)&C1TX2B1)*8+3;
static volatile bit TXB2D04              @ ((unsigned)&C1TX2B1)*8+4;
static volatile bit TXB2D05              @ ((unsigned)&C1TX2B1)*8+5;
static volatile bit TXB2D06              @ ((unsigned)&C1TX2B1)*8+6;
static volatile bit TXB2D07              @ ((unsigned)&C1TX2B1)*8+7;
static volatile bit TXB2D10              @ ((unsigned)&C1TX2B1)*8+8;
static volatile bit TXB2D11              @ ((unsigned)&C1TX2B1)*8+9;
static volatile bit TXB2D12              @ ((unsigned)&C1TX2B1)*8+10;
static volatile bit TXB2D13              @ ((unsigned)&C1TX2B1)*8+11;
static volatile bit TXB2D14              @ ((unsigned)&C1TX2B1)*8+12;
static volatile bit TXB2D15              @ ((unsigned)&C1TX2B1)*8+13;
static volatile bit TXB2D16              @ ((unsigned)&C1TX2B1)*8+14;
static volatile bit TXB2D17              @ ((unsigned)&C1TX2B1)*8+15;

// Register: C1TX2B2
static volatile unsigned int            C1TX2B2             @ 0x348;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB2D3              : 8;
        volatile unsigned TXB2D2              : 8;
    };
    struct {
        volatile unsigned TXB2D37             : 1;
        volatile unsigned TXB2D36             : 1;
        volatile unsigned TXB2D35             : 1;
        volatile unsigned TXB2D34             : 1;
        volatile unsigned TXB2D33             : 1;
        volatile unsigned TXB2D32             : 1;
        volatile unsigned TXB2D31             : 1;
        volatile unsigned TXB2D30             : 1;
        volatile unsigned TXB2D27             : 1;
        volatile unsigned TXB2D26             : 1;
        volatile unsigned TXB2D25             : 1;
        volatile unsigned TXB2D24             : 1;
        volatile unsigned TXB2D23             : 1;
        volatile unsigned TXB2D22             : 1;
        volatile unsigned TXB2D21             : 1;
        volatile unsigned TXB2D20             : 1;
    };
} C1TX2B2bits @ 0x348;
// bit variable definitions
static volatile bit TXB2D20              @ ((unsigned)&C1TX2B2)*8+0;
static volatile bit TXB2D21              @ ((unsigned)&C1TX2B2)*8+1;
static volatile bit TXB2D22              @ ((unsigned)&C1TX2B2)*8+2;
static volatile bit TXB2D23              @ ((unsigned)&C1TX2B2)*8+3;
static volatile bit TXB2D24              @ ((unsigned)&C1TX2B2)*8+4;
static volatile bit TXB2D25              @ ((unsigned)&C1TX2B2)*8+5;
static volatile bit TXB2D26              @ ((unsigned)&C1TX2B2)*8+6;
static volatile bit TXB2D27              @ ((unsigned)&C1TX2B2)*8+7;
static volatile bit TXB2D30              @ ((unsigned)&C1TX2B2)*8+8;
static volatile bit TXB2D31              @ ((unsigned)&C1TX2B2)*8+9;
static volatile bit TXB2D32              @ ((unsigned)&C1TX2B2)*8+10;
static volatile bit TXB2D33              @ ((unsigned)&C1TX2B2)*8+11;
static volatile bit TXB2D34              @ ((unsigned)&C1TX2B2)*8+12;
static volatile bit TXB2D35              @ ((unsigned)&C1TX2B2)*8+13;
static volatile bit TXB2D36              @ ((unsigned)&C1TX2B2)*8+14;
static volatile bit TXB2D37              @ ((unsigned)&C1TX2B2)*8+15;

// Register: C1TX2B3
static volatile unsigned int            C1TX2B3             @ 0x34A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB2D5              : 8;
        volatile unsigned TXB2D4              : 8;
    };
    struct {
        volatile unsigned TXB2D57             : 1;
        volatile unsigned TXB2D56             : 1;
        volatile unsigned TXB2D55             : 1;
        volatile unsigned TXB2D54             : 1;
        volatile unsigned TXB2D53             : 1;
        volatile unsigned TXB2D52             : 1;
        volatile unsigned TXB2D51             : 1;
        volatile unsigned TXB2D50             : 1;
        volatile unsigned TX2B2D47            : 1;
        volatile unsigned TX2B2D46            : 1;
        volatile unsigned TX2B2D45            : 1;
        volatile unsigned TX2B2D44            : 1;
        volatile unsigned TX2B2D43            : 1;
        volatile unsigned TX2B2D42            : 1;
        volatile unsigned TX2B2D41            : 1;
        volatile unsigned TX2B2D40            : 1;
    };
} C1TX2B3bits @ 0x34A;
// bit variable definitions
static volatile bit TX2B2D40             @ ((unsigned)&C1TX2B3)*8+0;
static volatile bit TX2B2D41             @ ((unsigned)&C1TX2B3)*8+1;
static volatile bit TX2B2D42             @ ((unsigned)&C1TX2B3)*8+2;
static volatile bit TX2B2D43             @ ((unsigned)&C1TX2B3)*8+3;
static volatile bit TX2B2D44             @ ((unsigned)&C1TX2B3)*8+4;
static volatile bit TX2B2D45             @ ((unsigned)&C1TX2B3)*8+5;
static volatile bit TX2B2D46             @ ((unsigned)&C1TX2B3)*8+6;
static volatile bit TX2B2D47             @ ((unsigned)&C1TX2B3)*8+7;
static volatile bit TXB2D50              @ ((unsigned)&C1TX2B3)*8+8;
static volatile bit TXB2D51              @ ((unsigned)&C1TX2B3)*8+9;
static volatile bit TXB2D52              @ ((unsigned)&C1TX2B3)*8+10;
static volatile bit TXB2D53              @ ((unsigned)&C1TX2B3)*8+11;
static volatile bit TXB2D54              @ ((unsigned)&C1TX2B3)*8+12;
static volatile bit TXB2D55              @ ((unsigned)&C1TX2B3)*8+13;
static volatile bit TXB2D56              @ ((unsigned)&C1TX2B3)*8+14;
static volatile bit TXB2D57              @ ((unsigned)&C1TX2B3)*8+15;

// Register: C1TX2B4
static volatile unsigned int            C1TX2B4             @ 0x34C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB2D7              : 8;
        volatile unsigned TXB2D6              : 8;
    };
    struct {
        volatile unsigned TX2B2D77            : 1;
        volatile unsigned TX2B2D76            : 1;
        volatile unsigned TX2B2D75            : 1;
        volatile unsigned TX2B2D74            : 1;
        volatile unsigned TX2B2D73            : 1;
        volatile unsigned TX2B2D72            : 1;
        volatile unsigned TX2B2D71            : 1;
        volatile unsigned TX2B2D70            : 1;
        volatile unsigned TX2B2D67            : 1;
        volatile unsigned TX2B2D66            : 1;
        volatile unsigned TX2B2D65            : 1;
        volatile unsigned TX2B2D64            : 1;
        volatile unsigned TX2B2D63            : 1;
        volatile unsigned TX2B2D62            : 1;
        volatile unsigned TX2B2D61            : 1;
        volatile unsigned TX2B2D60            : 1;
    };
} C1TX2B4bits @ 0x34C;
// bit variable definitions
static volatile bit TX2B2D60             @ ((unsigned)&C1TX2B4)*8+0;
static volatile bit TX2B2D61             @ ((unsigned)&C1TX2B4)*8+1;
static volatile bit TX2B2D62             @ ((unsigned)&C1TX2B4)*8+2;
static volatile bit TX2B2D63             @ ((unsigned)&C1TX2B4)*8+3;
static volatile bit TX2B2D64             @ ((unsigned)&C1TX2B4)*8+4;
static volatile bit TX2B2D65             @ ((unsigned)&C1TX2B4)*8+5;
static volatile bit TX2B2D66             @ ((unsigned)&C1TX2B4)*8+6;
static volatile bit TX2B2D67             @ ((unsigned)&C1TX2B4)*8+7;
static volatile bit TX2B2D70             @ ((unsigned)&C1TX2B4)*8+8;
static volatile bit TX2B2D71             @ ((unsigned)&C1TX2B4)*8+9;
static volatile bit TX2B2D72             @ ((unsigned)&C1TX2B4)*8+10;
static volatile bit TX2B2D73             @ ((unsigned)&C1TX2B4)*8+11;
static volatile bit TX2B2D74             @ ((unsigned)&C1TX2B4)*8+12;
static volatile bit TX2B2D75             @ ((unsigned)&C1TX2B4)*8+13;
static volatile bit TX2B2D76             @ ((unsigned)&C1TX2B4)*8+14;
static volatile bit TX2B2D77             @ ((unsigned)&C1TX2B4)*8+15;

// Register: C1TX2CON
static volatile unsigned int            C1TX2CON            @ 0x34E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned TXABT               : 1;
        volatile unsigned TXLARB              : 1;
        volatile unsigned TXERR               : 1;
        volatile unsigned TXREQ               : 1;
        volatile unsigned                     : 1;
        volatile unsigned TXPRI               : 2;
    };
    struct {
        volatile unsigned                     : 14;
        volatile unsigned TXPRI1              : 1;
        volatile unsigned TXPRI0              : 1;
    };
} C1TX2CONbits @ 0x34E;
// bit variable definitions
static volatile bit TXREQ                @ ((unsigned)&C1TX2CON)*8+3;
static volatile bit TXERR                @ ((unsigned)&C1TX2CON)*8+4;
static volatile bit TXLARB               @ ((unsigned)&C1TX2CON)*8+5;
static volatile bit TXABT                @ ((unsigned)&C1TX2CON)*8+6;
static volatile bit TXPRI0               @ ((unsigned)&C1TX2CON)*8+0;
static volatile bit TXPRI1               @ ((unsigned)&C1TX2CON)*8+1;

// Register: C1TX1SID
static volatile unsigned int            C1TX1SID            @ 0x350;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned                     : 3;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C1TX1SIDbits @ 0x350;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C1TX1SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C1TX1SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1TX1SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1TX1SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1TX1SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1TX1SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1TX1SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1TX1SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1TX1SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1TX1SID)*8+12;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1TX1SID)*8+13;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1TX1SID)*8+14;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1TX1SID)*8+15;

// Register: C1TX1EID
static volatile unsigned int            C1TX1EID            @ 0x352;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned                     : 4;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1TX1EIDbits @ 0x352;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1TX1EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1TX1EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1TX1EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1TX1EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1TX1EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1TX1EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1TX1EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1TX1EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1TX1EID)*8+12;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1TX1EID)*8+13;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1TX1EID)*8+14;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1TX1EID)*8+15;

// Register: C1TX1DLC
static volatile unsigned int            C1TX1DLC            @ 0x354;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned TXRTR               : 1;
        volatile unsigned TXRB1               : 1;
        volatile unsigned TXRB0               : 1;
        volatile unsigned DLC                 : 4;
        volatile unsigned                     : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
        volatile unsigned                     : 3;
    };
} C1TX1DLCbits @ 0x354;
// bit variable definitions
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB0                @ ((unsigned)&C1TX1DLC)*8+7;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB1                @ ((unsigned)&C1TX1DLC)*8+8;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRTR                @ ((unsigned)&C1TX1DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1TX1DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1TX1DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1TX1DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1TX1DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1TX1DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1TX1DLC)*8+15;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC0                 @ ((unsigned)&C1TX1DLC)*8+3;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC1                 @ ((unsigned)&C1TX1DLC)*8+4;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC2                 @ ((unsigned)&C1TX1DLC)*8+5;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC3                 @ ((unsigned)&C1TX1DLC)*8+6;

// Register: C1TX1B1
static volatile unsigned int            C1TX1B1             @ 0x356;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D1              : 8;
        volatile unsigned TXB1D0              : 8;
    };
    struct {
        volatile unsigned TXB1D17             : 1;
        volatile unsigned TXB1D16             : 1;
        volatile unsigned TXB1D15             : 1;
        volatile unsigned TXB1D14             : 1;
        volatile unsigned TXB1D13             : 1;
        volatile unsigned TXB1D12             : 1;
        volatile unsigned TXB1D11             : 1;
        volatile unsigned TXB1D10             : 1;
        volatile unsigned TXB1D07             : 1;
        volatile unsigned TXB1D06             : 1;
        volatile unsigned TXB1D05             : 1;
        volatile unsigned TXB1D04             : 1;
        volatile unsigned TXB1D03             : 1;
        volatile unsigned TXB1D02             : 1;
        volatile unsigned TXB1D01             : 1;
        volatile unsigned TXB1D00             : 1;
    };
} C1TX1B1bits @ 0x356;
// bit variable definitions
static volatile bit TXB1D00              @ ((unsigned)&C1TX1B1)*8+0;
static volatile bit TXB1D01              @ ((unsigned)&C1TX1B1)*8+1;
static volatile bit TXB1D02              @ ((unsigned)&C1TX1B1)*8+2;
static volatile bit TXB1D03              @ ((unsigned)&C1TX1B1)*8+3;
static volatile bit TXB1D04              @ ((unsigned)&C1TX1B1)*8+4;
static volatile bit TXB1D05              @ ((unsigned)&C1TX1B1)*8+5;
static volatile bit TXB1D06              @ ((unsigned)&C1TX1B1)*8+6;
static volatile bit TXB1D07              @ ((unsigned)&C1TX1B1)*8+7;
static volatile bit TXB1D10              @ ((unsigned)&C1TX1B1)*8+8;
static volatile bit TXB1D11              @ ((unsigned)&C1TX1B1)*8+9;
static volatile bit TXB1D12              @ ((unsigned)&C1TX1B1)*8+10;
static volatile bit TXB1D13              @ ((unsigned)&C1TX1B1)*8+11;
static volatile bit TXB1D14              @ ((unsigned)&C1TX1B1)*8+12;
static volatile bit TXB1D15              @ ((unsigned)&C1TX1B1)*8+13;
static volatile bit TXB1D16              @ ((unsigned)&C1TX1B1)*8+14;
static volatile bit TXB1D17              @ ((unsigned)&C1TX1B1)*8+15;

// Register: C1TX1B2
static volatile unsigned int            C1TX1B2             @ 0x358;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D3              : 8;
        volatile unsigned TXB1D2              : 8;
    };
    struct {
        volatile unsigned TXB1D37             : 1;
        volatile unsigned TXB1D36             : 1;
        volatile unsigned TXB1D35             : 1;
        volatile unsigned TXB1D34             : 1;
        volatile unsigned TXB1D33             : 1;
        volatile unsigned TXB1D32             : 1;
        volatile unsigned TXB1D31             : 1;
        volatile unsigned TXB1D30             : 1;
        volatile unsigned TXB1D27             : 1;
        volatile unsigned TXB1D26             : 1;
        volatile unsigned TXB1D25             : 1;
        volatile unsigned TXB1D24             : 1;
        volatile unsigned TXB1D23             : 1;
        volatile unsigned TXB1D22             : 1;
        volatile unsigned TXB1D21             : 1;
        volatile unsigned TXB1D20             : 1;
    };
} C1TX1B2bits @ 0x358;
// bit variable definitions
static volatile bit TXB1D20              @ ((unsigned)&C1TX1B2)*8+0;
static volatile bit TXB1D21              @ ((unsigned)&C1TX1B2)*8+1;
static volatile bit TXB1D22              @ ((unsigned)&C1TX1B2)*8+2;
static volatile bit TXB1D23              @ ((unsigned)&C1TX1B2)*8+3;
static volatile bit TXB1D24              @ ((unsigned)&C1TX1B2)*8+4;
static volatile bit TXB1D25              @ ((unsigned)&C1TX1B2)*8+5;
static volatile bit TXB1D26              @ ((unsigned)&C1TX1B2)*8+6;
static volatile bit TXB1D27              @ ((unsigned)&C1TX1B2)*8+7;
static volatile bit TXB1D30              @ ((unsigned)&C1TX1B2)*8+8;
static volatile bit TXB1D31              @ ((unsigned)&C1TX1B2)*8+9;
static volatile bit TXB1D32              @ ((unsigned)&C1TX1B2)*8+10;
static volatile bit TXB1D33              @ ((unsigned)&C1TX1B2)*8+11;
static volatile bit TXB1D34              @ ((unsigned)&C1TX1B2)*8+12;
static volatile bit TXB1D35              @ ((unsigned)&C1TX1B2)*8+13;
static volatile bit TXB1D36              @ ((unsigned)&C1TX1B2)*8+14;
static volatile bit TXB1D37              @ ((unsigned)&C1TX1B2)*8+15;

// Register: C1TX1B3
static volatile unsigned int            C1TX1B3             @ 0x35A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D5              : 8;
        volatile unsigned TXB1D4              : 8;
    };
    struct {
        volatile unsigned TXB1D57             : 1;
        volatile unsigned TXB1D56             : 1;
        volatile unsigned TXB1D55             : 1;
        volatile unsigned TXB1D54             : 1;
        volatile unsigned TXB1D53             : 1;
        volatile unsigned TXB1D52             : 1;
        volatile unsigned TXB1D51             : 1;
        volatile unsigned TXB1D50             : 1;
        volatile unsigned TXB1D47             : 1;
        volatile unsigned TXB1D46             : 1;
        volatile unsigned TXB1D45             : 1;
        volatile unsigned TXB1D44             : 1;
        volatile unsigned TXB1D43             : 1;
        volatile unsigned TXB1D42             : 1;
        volatile unsigned TXB1D41             : 1;
        volatile unsigned TXB1D40             : 1;
    };
} C1TX1B3bits @ 0x35A;
// bit variable definitions
static volatile bit TXB1D40              @ ((unsigned)&C1TX1B3)*8+0;
static volatile bit TXB1D41              @ ((unsigned)&C1TX1B3)*8+1;
static volatile bit TXB1D42              @ ((unsigned)&C1TX1B3)*8+2;
static volatile bit TXB1D43              @ ((unsigned)&C1TX1B3)*8+3;
static volatile bit TXB1D44              @ ((unsigned)&C1TX1B3)*8+4;
static volatile bit TXB1D45              @ ((unsigned)&C1TX1B3)*8+5;
static volatile bit TXB1D46              @ ((unsigned)&C1TX1B3)*8+6;
static volatile bit TXB1D47              @ ((unsigned)&C1TX1B3)*8+7;
static volatile bit TXB1D50              @ ((unsigned)&C1TX1B3)*8+8;
static volatile bit TXB1D51              @ ((unsigned)&C1TX1B3)*8+9;
static volatile bit TXB1D52              @ ((unsigned)&C1TX1B3)*8+10;
static volatile bit TXB1D53              @ ((unsigned)&C1TX1B3)*8+11;
static volatile bit TXB1D54              @ ((unsigned)&C1TX1B3)*8+12;
static volatile bit TXB1D55              @ ((unsigned)&C1TX1B3)*8+13;
static volatile bit TXB1D56              @ ((unsigned)&C1TX1B3)*8+14;
static volatile bit TXB1D57              @ ((unsigned)&C1TX1B3)*8+15;

// Register: C1TX1B4
static volatile unsigned int            C1TX1B4             @ 0x35C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D7              : 8;
        volatile unsigned TXB1D6              : 8;
    };
    struct {
        volatile unsigned TXB1D77             : 1;
        volatile unsigned TXB1D76             : 1;
        volatile unsigned TXB1D75             : 1;
        volatile unsigned TXB1D74             : 1;
        volatile unsigned TXB1D73             : 1;
        volatile unsigned TXB1D72             : 1;
        volatile unsigned TXB1D71             : 1;
        volatile unsigned TXB1D70             : 1;
        volatile unsigned TXB1D67             : 1;
        volatile unsigned TXB1D66             : 1;
        volatile unsigned TXB1D65             : 1;
        volatile unsigned TXB1D64             : 1;
        volatile unsigned TXB1D63             : 1;
        volatile unsigned TXB1D62             : 1;
        volatile unsigned TXB1D61             : 1;
        volatile unsigned TXB1D60             : 1;
    };
} C1TX1B4bits @ 0x35C;
// bit variable definitions
static volatile bit TXB1D60              @ ((unsigned)&C1TX1B4)*8+0;
static volatile bit TXB1D61              @ ((unsigned)&C1TX1B4)*8+1;
static volatile bit TXB1D62              @ ((unsigned)&C1TX1B4)*8+2;
static volatile bit TXB1D63              @ ((unsigned)&C1TX1B4)*8+3;
static volatile bit TXB1D64              @ ((unsigned)&C1TX1B4)*8+4;
static volatile bit TXB1D65              @ ((unsigned)&C1TX1B4)*8+5;
static volatile bit TXB1D66              @ ((unsigned)&C1TX1B4)*8+6;
static volatile bit TXB1D67              @ ((unsigned)&C1TX1B4)*8+7;
static volatile bit TXB1D70              @ ((unsigned)&C1TX1B4)*8+8;
static volatile bit TXB1D71              @ ((unsigned)&C1TX1B4)*8+9;
static volatile bit TXB1D72              @ ((unsigned)&C1TX1B4)*8+10;
static volatile bit TXB1D73              @ ((unsigned)&C1TX1B4)*8+11;
static volatile bit TXB1D74              @ ((unsigned)&C1TX1B4)*8+12;
static volatile bit TXB1D75              @ ((unsigned)&C1TX1B4)*8+13;
static volatile bit TXB1D76              @ ((unsigned)&C1TX1B4)*8+14;
static volatile bit TXB1D77              @ ((unsigned)&C1TX1B4)*8+15;

// Register: C1TX1CON
static volatile unsigned int            C1TX1CON            @ 0x35E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned TXABT               : 1;
        volatile unsigned TXLARB              : 1;
        volatile unsigned TXERR               : 1;
        volatile unsigned TXREQ               : 1;
        volatile unsigned                     : 1;
        volatile unsigned TXPRI               : 2;
    };
    struct {
        volatile unsigned                     : 14;
        volatile unsigned TXPRI1              : 1;
        volatile unsigned TXPRI0              : 1;
    };
} C1TX1CONbits @ 0x35E;
// bit variable definitions
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXREQ                @ ((unsigned)&C1TX1CON)*8+3;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXERR                @ ((unsigned)&C1TX1CON)*8+4;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXLARB               @ ((unsigned)&C1TX1CON)*8+5;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXABT                @ ((unsigned)&C1TX1CON)*8+6;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI0               @ ((unsigned)&C1TX1CON)*8+0;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI1               @ ((unsigned)&C1TX1CON)*8+1;

// Register: C1TX0SID
static volatile unsigned int            C1TX0SID            @ 0x360;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned                     : 3;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C1TX0SIDbits @ 0x360;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C1TX0SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C1TX0SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1TX0SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1TX0SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1TX0SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1TX0SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1TX0SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1TX0SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1TX0SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1TX0SID)*8+12;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1TX0SID)*8+13;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1TX0SID)*8+14;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1TX0SID)*8+15;

// Register: C1TX0EID
static volatile unsigned int            C1TX0EID            @ 0x362;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned                     : 4;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1TX0EIDbits @ 0x362;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1TX0EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1TX0EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1TX0EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1TX0EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1TX0EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1TX0EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1TX0EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1TX0EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1TX0EID)*8+12;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1TX0EID)*8+13;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1TX0EID)*8+14;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1TX0EID)*8+15;

// Register: C1TX0DLC
static volatile unsigned int            C1TX0DLC            @ 0x364;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned TXRTR               : 1;
        volatile unsigned TXRB1               : 1;
        volatile unsigned TXRB0               : 1;
        volatile unsigned DLC                 : 4;
        volatile unsigned                     : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
        volatile unsigned                     : 3;
    };
} C1TX0DLCbits @ 0x364;
// bit variable definitions
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB0                @ ((unsigned)&C1TX0DLC)*8+7;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB1                @ ((unsigned)&C1TX0DLC)*8+8;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRTR                @ ((unsigned)&C1TX0DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1TX0DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1TX0DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1TX0DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1TX0DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1TX0DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1TX0DLC)*8+15;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC0                 @ ((unsigned)&C1TX0DLC)*8+3;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC1                 @ ((unsigned)&C1TX0DLC)*8+4;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC2                 @ ((unsigned)&C1TX0DLC)*8+5;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC3                 @ ((unsigned)&C1TX0DLC)*8+6;

// Register: C1TX0B1
static volatile unsigned int            C1TX0B1             @ 0x366;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D1              : 8;
        volatile unsigned TXB0D0              : 8;
    };
    struct {
        volatile unsigned TXB0D17             : 1;
        volatile unsigned TXB0D16             : 1;
        volatile unsigned TXB0D15             : 1;
        volatile unsigned TXB0D14             : 1;
        volatile unsigned TXB0D13             : 1;
        volatile unsigned TXB0D12             : 1;
        volatile unsigned TXB0D11             : 1;
        volatile unsigned TXB0D10             : 1;
        volatile unsigned TXB0D07             : 1;
        volatile unsigned TXB0D06             : 1;
        volatile unsigned TXB0D05             : 1;
        volatile unsigned TXB0D04             : 1;
        volatile unsigned TXB0D03             : 1;
        volatile unsigned TXB0D02             : 1;
        volatile unsigned TXB0D01             : 1;
        volatile unsigned TXB0D00             : 1;
    };
} C1TX0B1bits @ 0x366;
// bit variable definitions
static volatile bit TXB0D00              @ ((unsigned)&C1TX0B1)*8+0;
static volatile bit TXB0D01              @ ((unsigned)&C1TX0B1)*8+1;
static volatile bit TXB0D02              @ ((unsigned)&C1TX0B1)*8+2;
static volatile bit TXB0D03              @ ((unsigned)&C1TX0B1)*8+3;
static volatile bit TXB0D04              @ ((unsigned)&C1TX0B1)*8+4;
static volatile bit TXB0D05              @ ((unsigned)&C1TX0B1)*8+5;
static volatile bit TXB0D06              @ ((unsigned)&C1TX0B1)*8+6;
static volatile bit TXB0D07              @ ((unsigned)&C1TX0B1)*8+7;
static volatile bit TXB0D10              @ ((unsigned)&C1TX0B1)*8+8;
static volatile bit TXB0D11              @ ((unsigned)&C1TX0B1)*8+9;
static volatile bit TXB0D12              @ ((unsigned)&C1TX0B1)*8+10;
static volatile bit TXB0D13              @ ((unsigned)&C1TX0B1)*8+11;
static volatile bit TXB0D14              @ ((unsigned)&C1TX0B1)*8+12;
static volatile bit TXB0D15              @ ((unsigned)&C1TX0B1)*8+13;
static volatile bit TXB0D16              @ ((unsigned)&C1TX0B1)*8+14;
static volatile bit TXB0D17              @ ((unsigned)&C1TX0B1)*8+15;

// Register: C1TX0B2
static volatile unsigned int            C1TX0B2             @ 0x368;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D3              : 8;
        volatile unsigned TXB0D2              : 8;
    };
    struct {
        volatile unsigned TXB0D37             : 1;
        volatile unsigned TXB0D36             : 1;
        volatile unsigned TXB0D35             : 1;
        volatile unsigned TXB0D34             : 1;
        volatile unsigned TXB0D33             : 1;
        volatile unsigned TXB0D32             : 1;
        volatile unsigned TXB0D31             : 1;
        volatile unsigned TXB0D30             : 1;
        volatile unsigned TXB0D27             : 1;
        volatile unsigned TXB0D26             : 1;
        volatile unsigned TXB0D25             : 1;
        volatile unsigned TXB0D24             : 1;
        volatile unsigned TXB0D23             : 1;
        volatile unsigned TXB0D22             : 1;
        volatile unsigned TXB0D21             : 1;
        volatile unsigned TXB0D20             : 1;
    };
} C1TX0B2bits @ 0x368;
// bit variable definitions
static volatile bit TXB0D20              @ ((unsigned)&C1TX0B2)*8+0;
static volatile bit TXB0D21              @ ((unsigned)&C1TX0B2)*8+1;
static volatile bit TXB0D22              @ ((unsigned)&C1TX0B2)*8+2;
static volatile bit TXB0D23              @ ((unsigned)&C1TX0B2)*8+3;
static volatile bit TXB0D24              @ ((unsigned)&C1TX0B2)*8+4;
static volatile bit TXB0D25              @ ((unsigned)&C1TX0B2)*8+5;
static volatile bit TXB0D26              @ ((unsigned)&C1TX0B2)*8+6;
static volatile bit TXB0D27              @ ((unsigned)&C1TX0B2)*8+7;
static volatile bit TXB0D30              @ ((unsigned)&C1TX0B2)*8+8;
static volatile bit TXB0D31              @ ((unsigned)&C1TX0B2)*8+9;
static volatile bit TXB0D32              @ ((unsigned)&C1TX0B2)*8+10;
static volatile bit TXB0D33              @ ((unsigned)&C1TX0B2)*8+11;
static volatile bit TXB0D34              @ ((unsigned)&C1TX0B2)*8+12;
static volatile bit TXB0D35              @ ((unsigned)&C1TX0B2)*8+13;
static volatile bit TXB0D36              @ ((unsigned)&C1TX0B2)*8+14;
static volatile bit TXB0D37              @ ((unsigned)&C1TX0B2)*8+15;

// Register: C1TX0B3
static volatile unsigned int            C1TX0B3             @ 0x36A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D5              : 8;
        volatile unsigned TXB0D4              : 8;
    };
    struct {
        volatile unsigned TXB0D57             : 1;
        volatile unsigned TXB0D56             : 1;
        volatile unsigned TXB0D55             : 1;
        volatile unsigned TXB0D54             : 1;
        volatile unsigned TXB0D53             : 1;
        volatile unsigned TXB0D52             : 1;
        volatile unsigned TXB0D51             : 1;
        volatile unsigned TXB0D50             : 1;
        volatile unsigned TXB0D47             : 1;
        volatile unsigned TXB0D46             : 1;
        volatile unsigned TXB0D45             : 1;
        volatile unsigned TXB0D44             : 1;
        volatile unsigned TXB0D43             : 1;
        volatile unsigned TXB0D42             : 1;
        volatile unsigned TXB0D41             : 1;
        volatile unsigned TXB0D40             : 1;
    };
} C1TX0B3bits @ 0x36A;
// bit variable definitions
static volatile bit TXB0D40              @ ((unsigned)&C1TX0B3)*8+0;
static volatile bit TXB0D41              @ ((unsigned)&C1TX0B3)*8+1;
static volatile bit TXB0D42              @ ((unsigned)&C1TX0B3)*8+2;
static volatile bit TXB0D43              @ ((unsigned)&C1TX0B3)*8+3;
static volatile bit TXB0D44              @ ((unsigned)&C1TX0B3)*8+4;
static volatile bit TXB0D45              @ ((unsigned)&C1TX0B3)*8+5;
static volatile bit TXB0D46              @ ((unsigned)&C1TX0B3)*8+6;
static volatile bit TXB0D47              @ ((unsigned)&C1TX0B3)*8+7;
static volatile bit TXB0D50              @ ((unsigned)&C1TX0B3)*8+8;
static volatile bit TXB0D51              @ ((unsigned)&C1TX0B3)*8+9;
static volatile bit TXB0D52              @ ((unsigned)&C1TX0B3)*8+10;
static volatile bit TXB0D53              @ ((unsigned)&C1TX0B3)*8+11;
static volatile bit TXB0D54              @ ((unsigned)&C1TX0B3)*8+12;
static volatile bit TXB0D55              @ ((unsigned)&C1TX0B3)*8+13;
static volatile bit TXB0D56              @ ((unsigned)&C1TX0B3)*8+14;
static volatile bit TXB0D57              @ ((unsigned)&C1TX0B3)*8+15;

// Register: C1TX0B4
static volatile unsigned int            C1TX0B4             @ 0x36C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D7              : 8;
        volatile unsigned TXB0D6              : 8;
    };
    struct {
        volatile unsigned TXB0D77             : 1;
        volatile unsigned TXB0D76             : 1;
        volatile unsigned TXB0D75             : 1;
        volatile unsigned TXB0D74             : 1;
        volatile unsigned TXB0D73             : 1;
        volatile unsigned TXB0D72             : 1;
        volatile unsigned TXB0D71             : 1;
        volatile unsigned TXB0D70             : 1;
        volatile unsigned TXB0D67             : 1;
        volatile unsigned TXB0D66             : 1;
        volatile unsigned TXB0D65             : 1;
        volatile unsigned TXB0D64             : 1;
        volatile unsigned TXB0D63             : 1;
        volatile unsigned TXB0D62             : 1;
        volatile unsigned TXB0D61             : 1;
        volatile unsigned TXB0D60             : 1;
    };
} C1TX0B4bits @ 0x36C;
// bit variable definitions
static volatile bit TXB0D60              @ ((unsigned)&C1TX0B4)*8+0;
static volatile bit TXB0D61              @ ((unsigned)&C1TX0B4)*8+1;
static volatile bit TXB0D62              @ ((unsigned)&C1TX0B4)*8+2;
static volatile bit TXB0D63              @ ((unsigned)&C1TX0B4)*8+3;
static volatile bit TXB0D64              @ ((unsigned)&C1TX0B4)*8+4;
static volatile bit TXB0D65              @ ((unsigned)&C1TX0B4)*8+5;
static volatile bit TXB0D66              @ ((unsigned)&C1TX0B4)*8+6;
static volatile bit TXB0D67              @ ((unsigned)&C1TX0B4)*8+7;
static volatile bit TXB0D70              @ ((unsigned)&C1TX0B4)*8+8;
static volatile bit TXB0D71              @ ((unsigned)&C1TX0B4)*8+9;
static volatile bit TXB0D72              @ ((unsigned)&C1TX0B4)*8+10;
static volatile bit TXB0D73              @ ((unsigned)&C1TX0B4)*8+11;
static volatile bit TXB0D74              @ ((unsigned)&C1TX0B4)*8+12;
static volatile bit TXB0D75              @ ((unsigned)&C1TX0B4)*8+13;
static volatile bit TXB0D76              @ ((unsigned)&C1TX0B4)*8+14;
static volatile bit TXB0D77              @ ((unsigned)&C1TX0B4)*8+15;

// Register: C1TX0CON
static volatile unsigned int            C1TX0CON            @ 0x36E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned TXABT               : 1;
        volatile unsigned TXLARB              : 1;
        volatile unsigned TXERR               : 1;
        volatile unsigned TXREQ               : 1;
        volatile unsigned                     : 1;
        volatile unsigned TXPRI               : 2;
    };
    struct {
        volatile unsigned                     : 14;
        volatile unsigned TXPRI1              : 1;
        volatile unsigned TXPRI0              : 1;
    };
} C1TX0CONbits @ 0x36E;
// bit variable definitions
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXREQ                @ ((unsigned)&C1TX0CON)*8+3;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXERR                @ ((unsigned)&C1TX0CON)*8+4;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXLARB               @ ((unsigned)&C1TX0CON)*8+5;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXABT                @ ((unsigned)&C1TX0CON)*8+6;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI0               @ ((unsigned)&C1TX0CON)*8+0;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI1               @ ((unsigned)&C1TX0CON)*8+1;

// Register: C1RX1SID
static volatile unsigned int            C1RX1SID            @ 0x370;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C1RX1SIDbits @ 0x370;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C1RX1SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C1RX1SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RX1SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RX1SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RX1SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RX1SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RX1SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RX1SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RX1SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RX1SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RX1SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RX1SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RX1SID)*8+12;

// Register: C1RX1EID
static volatile unsigned int            C1RX1EID            @ 0x372;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RX1EIDbits @ 0x372;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RX1EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RX1EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RX1EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RX1EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RX1EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RX1EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RX1EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RX1EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RX1EID)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RX1EID)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RX1EID)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RX1EID)*8+11;

// Register: C1RX1DLC
static volatile unsigned int            C1RX1DLC            @ 0x374;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned RXRTR               : 1;
        volatile unsigned RXRB1               : 1;
        volatile unsigned                     : 3;
        volatile unsigned RXRB0               : 1;
        volatile unsigned DLC                 : 4;
    };
    struct {
        volatile unsigned                     : 12;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
    };
} C1RX1DLCbits @ 0x374;
// bit variable definitions
static volatile bit RXRB0                @ ((unsigned)&C1RX1DLC)*8+4;
static volatile bit RXRB1                @ ((unsigned)&C1RX1DLC)*8+8;
static volatile bit RXRTR                @ ((unsigned)&C1RX1DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RX1DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RX1DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RX1DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RX1DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RX1DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RX1DLC)*8+15;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC0                 @ ((unsigned)&C1RX1DLC)*8+0;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC1                 @ ((unsigned)&C1RX1DLC)*8+1;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC2                 @ ((unsigned)&C1RX1DLC)*8+2;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC3                 @ ((unsigned)&C1RX1DLC)*8+3;

// Register: C1RX1B1
static volatile unsigned int            C1RX1B1             @ 0x376;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D1              : 8;
        volatile unsigned TXB1D0              : 8;
    };
    struct {
        volatile unsigned TXB1D17             : 1;
        volatile unsigned TXB1D16             : 1;
        volatile unsigned TXB1D15             : 1;
        volatile unsigned TXB1D14             : 1;
        volatile unsigned TXB1D13             : 1;
        volatile unsigned TXB1D12             : 1;
        volatile unsigned TXB1D11             : 1;
        volatile unsigned TXB1D10             : 1;
        volatile unsigned TXB1D07             : 1;
        volatile unsigned TXB1D06             : 1;
        volatile unsigned TXB1D05             : 1;
        volatile unsigned TXB1D04             : 1;
        volatile unsigned TXB1D03             : 1;
        volatile unsigned TXB1D02             : 1;
        volatile unsigned TXB1D01             : 1;
        volatile unsigned TXB1D00             : 1;
    };
} C1RX1B1bits @ 0x376;
// bit variable definitions
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D00              @ ((unsigned)&C1RX1B1)*8+0;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D01              @ ((unsigned)&C1RX1B1)*8+1;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D02              @ ((unsigned)&C1RX1B1)*8+2;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D03              @ ((unsigned)&C1RX1B1)*8+3;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D04              @ ((unsigned)&C1RX1B1)*8+4;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D05              @ ((unsigned)&C1RX1B1)*8+5;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D06              @ ((unsigned)&C1RX1B1)*8+6;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D07              @ ((unsigned)&C1RX1B1)*8+7;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D10              @ ((unsigned)&C1RX1B1)*8+8;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D11              @ ((unsigned)&C1RX1B1)*8+9;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D12              @ ((unsigned)&C1RX1B1)*8+10;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D13              @ ((unsigned)&C1RX1B1)*8+11;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D14              @ ((unsigned)&C1RX1B1)*8+12;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D15              @ ((unsigned)&C1RX1B1)*8+13;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D16              @ ((unsigned)&C1RX1B1)*8+14;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D17              @ ((unsigned)&C1RX1B1)*8+15;

// Register: C1RX1B2
static volatile unsigned int            C1RX1B2             @ 0x378;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D3              : 8;
        volatile unsigned TXB1D2              : 8;
    };
    struct {
        volatile unsigned TXB1D37             : 1;
        volatile unsigned TXB1D36             : 1;
        volatile unsigned TXB1D35             : 1;
        volatile unsigned TXB1D34             : 1;
        volatile unsigned TXB1D33             : 1;
        volatile unsigned TXB1D32             : 1;
        volatile unsigned TXB1D31             : 1;
        volatile unsigned TXB1D30             : 1;
        volatile unsigned TXB1D27             : 1;
        volatile unsigned TXB1D26             : 1;
        volatile unsigned TXB1D25             : 1;
        volatile unsigned TXB1D24             : 1;
        volatile unsigned TXB1D23             : 1;
        volatile unsigned TXB1D22             : 1;
        volatile unsigned TXB1D21             : 1;
        volatile unsigned TXB1D20             : 1;
    };
} C1RX1B2bits @ 0x378;
// bit variable definitions
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D20              @ ((unsigned)&C1RX1B2)*8+0;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D21              @ ((unsigned)&C1RX1B2)*8+1;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D22              @ ((unsigned)&C1RX1B2)*8+2;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D23              @ ((unsigned)&C1RX1B2)*8+3;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D24              @ ((unsigned)&C1RX1B2)*8+4;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D25              @ ((unsigned)&C1RX1B2)*8+5;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D26              @ ((unsigned)&C1RX1B2)*8+6;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D27              @ ((unsigned)&C1RX1B2)*8+7;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D30              @ ((unsigned)&C1RX1B2)*8+8;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D31              @ ((unsigned)&C1RX1B2)*8+9;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D32              @ ((unsigned)&C1RX1B2)*8+10;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D33              @ ((unsigned)&C1RX1B2)*8+11;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D34              @ ((unsigned)&C1RX1B2)*8+12;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D35              @ ((unsigned)&C1RX1B2)*8+13;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D36              @ ((unsigned)&C1RX1B2)*8+14;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D37              @ ((unsigned)&C1RX1B2)*8+15;

// Register: C1RX1B3
static volatile unsigned int            C1RX1B3             @ 0x37A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D5              : 8;
        volatile unsigned TXB1D4              : 8;
    };
    struct {
        volatile unsigned TXB1D57             : 1;
        volatile unsigned TXB1D56             : 1;
        volatile unsigned TXB1D55             : 1;
        volatile unsigned TXB1D54             : 1;
        volatile unsigned TXB1D53             : 1;
        volatile unsigned TXB1D52             : 1;
        volatile unsigned TXB1D51             : 1;
        volatile unsigned TXB1D50             : 1;
        volatile unsigned TXB1D47             : 1;
        volatile unsigned TXB1D46             : 1;
        volatile unsigned TXB1D45             : 1;
        volatile unsigned TXB1D44             : 1;
        volatile unsigned TXB1D43             : 1;
        volatile unsigned TXB1D42             : 1;
        volatile unsigned TXB1D41             : 1;
        volatile unsigned TXB1D40             : 1;
    };
} C1RX1B3bits @ 0x37A;
// bit variable definitions
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D40              @ ((unsigned)&C1RX1B3)*8+0;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D41              @ ((unsigned)&C1RX1B3)*8+1;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D42              @ ((unsigned)&C1RX1B3)*8+2;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D43              @ ((unsigned)&C1RX1B3)*8+3;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D44              @ ((unsigned)&C1RX1B3)*8+4;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D45              @ ((unsigned)&C1RX1B3)*8+5;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D46              @ ((unsigned)&C1RX1B3)*8+6;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D47              @ ((unsigned)&C1RX1B3)*8+7;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D50              @ ((unsigned)&C1RX1B3)*8+8;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D51              @ ((unsigned)&C1RX1B3)*8+9;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D52              @ ((unsigned)&C1RX1B3)*8+10;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D53              @ ((unsigned)&C1RX1B3)*8+11;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D54              @ ((unsigned)&C1RX1B3)*8+12;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D55              @ ((unsigned)&C1RX1B3)*8+13;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D56              @ ((unsigned)&C1RX1B3)*8+14;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D57              @ ((unsigned)&C1RX1B3)*8+15;

// Register: C1RX1B4
static volatile unsigned int            C1RX1B4             @ 0x37C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D7              : 8;
        volatile unsigned TXB1D6              : 8;
    };
    struct {
        volatile unsigned TXB1D77             : 1;
        volatile unsigned TXB1D76             : 1;
        volatile unsigned TXB1D75             : 1;
        volatile unsigned TXB1D74             : 1;
        volatile unsigned TXB1D73             : 1;
        volatile unsigned TXB1D72             : 1;
        volatile unsigned TXB1D71             : 1;
        volatile unsigned TXB1D70             : 1;
        volatile unsigned TXB1D67             : 1;
        volatile unsigned TXB1D66             : 1;
        volatile unsigned TXB1D65             : 1;
        volatile unsigned TXB1D64             : 1;
        volatile unsigned TXB1D63             : 1;
        volatile unsigned TXB1D62             : 1;
        volatile unsigned TXB1D61             : 1;
        volatile unsigned TXB1D60             : 1;
    };
} C1RX1B4bits @ 0x37C;
// bit variable definitions
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D60              @ ((unsigned)&C1RX1B4)*8+0;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D61              @ ((unsigned)&C1RX1B4)*8+1;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D62              @ ((unsigned)&C1RX1B4)*8+2;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D63              @ ((unsigned)&C1RX1B4)*8+3;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D64              @ ((unsigned)&C1RX1B4)*8+4;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D65              @ ((unsigned)&C1RX1B4)*8+5;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D66              @ ((unsigned)&C1RX1B4)*8+6;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D67              @ ((unsigned)&C1RX1B4)*8+7;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D70              @ ((unsigned)&C1RX1B4)*8+8;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D71              @ ((unsigned)&C1RX1B4)*8+9;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D72              @ ((unsigned)&C1RX1B4)*8+10;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D73              @ ((unsigned)&C1RX1B4)*8+11;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D74              @ ((unsigned)&C1RX1B4)*8+12;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D75              @ ((unsigned)&C1RX1B4)*8+13;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D76              @ ((unsigned)&C1RX1B4)*8+14;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D77              @ ((unsigned)&C1RX1B4)*8+15;

// Register: C1RX1CON
static volatile unsigned int            C1RX1CON            @ 0x37E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned RXFUL               : 1;
        volatile unsigned                     : 3;
        volatile unsigned RXRTRRO             : 1;
        volatile unsigned FILHIT              : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned FILHIT2             : 1;
        volatile unsigned FILHIT1             : 1;
        volatile unsigned FILHIT0             : 1;
    };
} C1RX1CONbits @ 0x37E;
// bit variable definitions
static volatile bit RXRTRRO              @ ((unsigned)&C1RX1CON)*8+3;
static volatile bit RXFUL                @ ((unsigned)&C1RX1CON)*8+7;
static volatile bit FILHIT0              @ ((unsigned)&C1RX1CON)*8+0;
static volatile bit FILHIT1              @ ((unsigned)&C1RX1CON)*8+1;
static volatile bit FILHIT2              @ ((unsigned)&C1RX1CON)*8+2;

// Register: C1RX0SID
static volatile unsigned int            C1RX0SID            @ 0x380;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C1RX0SIDbits @ 0x380;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C1RX0SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C1RX0SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C1RX0SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C1RX0SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C1RX0SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C1RX0SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C1RX0SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C1RX0SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C1RX0SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C1RX0SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C1RX0SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C1RX0SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C1RX0SID)*8+12;

// Register: C1RX0EID
static volatile unsigned int            C1RX0EID            @ 0x382;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C1RX0EIDbits @ 0x382;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C1RX0EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C1RX0EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C1RX0EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C1RX0EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C1RX0EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C1RX0EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C1RX0EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C1RX0EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C1RX0EID)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C1RX0EID)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C1RX0EID)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C1RX0EID)*8+11;

// Register: C1RX0DLC
static volatile unsigned int            C1RX0DLC            @ 0x384;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned RXRTR               : 1;
        volatile unsigned RXRB1               : 1;
        volatile unsigned                     : 3;
        volatile unsigned RXRB0               : 1;
        volatile unsigned DLC                 : 4;
    };
    struct {
        volatile unsigned                     : 12;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
    };
} C1RX0DLCbits @ 0x384;
// bit variable definitions
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRB0                @ ((unsigned)&C1RX0DLC)*8+4;
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRB1                @ ((unsigned)&C1RX0DLC)*8+8;
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRTR                @ ((unsigned)&C1RX0DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C1RX0DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C1RX0DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C1RX0DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C1RX0DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C1RX0DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C1RX0DLC)*8+15;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC0                 @ ((unsigned)&C1RX0DLC)*8+0;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC1                 @ ((unsigned)&C1RX0DLC)*8+1;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC2                 @ ((unsigned)&C1RX0DLC)*8+2;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC3                 @ ((unsigned)&C1RX0DLC)*8+3;

// Register: C1RX0B1
static volatile unsigned int            C1RX0B1             @ 0x386;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D1              : 8;
        volatile unsigned TXB0D0              : 8;
    };
    struct {
        volatile unsigned TXB0D17             : 1;
        volatile unsigned TXB0D16             : 1;
        volatile unsigned TXB0D15             : 1;
        volatile unsigned TXB0D14             : 1;
        volatile unsigned TXB0D13             : 1;
        volatile unsigned TXB0D12             : 1;
        volatile unsigned TXB0D11             : 1;
        volatile unsigned TXB0D10             : 1;
        volatile unsigned TXB0D07             : 1;
        volatile unsigned TXB0D06             : 1;
        volatile unsigned TXB0D05             : 1;
        volatile unsigned TXB0D04             : 1;
        volatile unsigned TXB0D03             : 1;
        volatile unsigned TXB0D02             : 1;
        volatile unsigned TXB0D01             : 1;
        volatile unsigned TXB0D00             : 1;
    };
} C1RX0B1bits @ 0x386;
// bit variable definitions
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D00              @ ((unsigned)&C1RX0B1)*8+0;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D01              @ ((unsigned)&C1RX0B1)*8+1;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D02              @ ((unsigned)&C1RX0B1)*8+2;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D03              @ ((unsigned)&C1RX0B1)*8+3;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D04              @ ((unsigned)&C1RX0B1)*8+4;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D05              @ ((unsigned)&C1RX0B1)*8+5;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D06              @ ((unsigned)&C1RX0B1)*8+6;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D07              @ ((unsigned)&C1RX0B1)*8+7;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D10              @ ((unsigned)&C1RX0B1)*8+8;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D11              @ ((unsigned)&C1RX0B1)*8+9;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D12              @ ((unsigned)&C1RX0B1)*8+10;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D13              @ ((unsigned)&C1RX0B1)*8+11;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D14              @ ((unsigned)&C1RX0B1)*8+12;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D15              @ ((unsigned)&C1RX0B1)*8+13;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D16              @ ((unsigned)&C1RX0B1)*8+14;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D17              @ ((unsigned)&C1RX0B1)*8+15;

// Register: C1RX0B2
static volatile unsigned int            C1RX0B2             @ 0x388;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D3              : 8;
        volatile unsigned TXB0D2              : 8;
    };
    struct {
        volatile unsigned TXB0D37             : 1;
        volatile unsigned TXB0D36             : 1;
        volatile unsigned TXB0D35             : 1;
        volatile unsigned TXB0D34             : 1;
        volatile unsigned TXB0D33             : 1;
        volatile unsigned TXB0D32             : 1;
        volatile unsigned TXB0D31             : 1;
        volatile unsigned TXB0D30             : 1;
        volatile unsigned TXB0D27             : 1;
        volatile unsigned TXB0D26             : 1;
        volatile unsigned TXB0D25             : 1;
        volatile unsigned TXB0D24             : 1;
        volatile unsigned TXB0D23             : 1;
        volatile unsigned TXB0D22             : 1;
        volatile unsigned TXB0D21             : 1;
        volatile unsigned TXB0D20             : 1;
    };
} C1RX0B2bits @ 0x388;
// bit variable definitions
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D20              @ ((unsigned)&C1RX0B2)*8+0;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D21              @ ((unsigned)&C1RX0B2)*8+1;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D22              @ ((unsigned)&C1RX0B2)*8+2;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D23              @ ((unsigned)&C1RX0B2)*8+3;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D24              @ ((unsigned)&C1RX0B2)*8+4;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D25              @ ((unsigned)&C1RX0B2)*8+5;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D26              @ ((unsigned)&C1RX0B2)*8+6;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D27              @ ((unsigned)&C1RX0B2)*8+7;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D30              @ ((unsigned)&C1RX0B2)*8+8;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D31              @ ((unsigned)&C1RX0B2)*8+9;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D32              @ ((unsigned)&C1RX0B2)*8+10;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D33              @ ((unsigned)&C1RX0B2)*8+11;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D34              @ ((unsigned)&C1RX0B2)*8+12;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D35              @ ((unsigned)&C1RX0B2)*8+13;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D36              @ ((unsigned)&C1RX0B2)*8+14;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D37              @ ((unsigned)&C1RX0B2)*8+15;

// Register: C1RX0B3
static volatile unsigned int            C1RX0B3             @ 0x38A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D5              : 8;
        volatile unsigned TXB0D4              : 8;
    };
    struct {
        volatile unsigned TXB0D57             : 1;
        volatile unsigned TXB0D56             : 1;
        volatile unsigned TXB0D55             : 1;
        volatile unsigned TXB0D54             : 1;
        volatile unsigned TXB0D53             : 1;
        volatile unsigned TXB0D52             : 1;
        volatile unsigned TXB0D51             : 1;
        volatile unsigned TXB0D50             : 1;
        volatile unsigned TXB0D47             : 1;
        volatile unsigned TXB0D46             : 1;
        volatile unsigned TXB0D45             : 1;
        volatile unsigned TXB0D44             : 1;
        volatile unsigned TXB0D43             : 1;
        volatile unsigned TXB0D42             : 1;
        volatile unsigned TXB0D41             : 1;
        volatile unsigned TXB0D40             : 1;
    };
} C1RX0B3bits @ 0x38A;
// bit variable definitions
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D40              @ ((unsigned)&C1RX0B3)*8+0;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D41              @ ((unsigned)&C1RX0B3)*8+1;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D42              @ ((unsigned)&C1RX0B3)*8+2;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D43              @ ((unsigned)&C1RX0B3)*8+3;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D44              @ ((unsigned)&C1RX0B3)*8+4;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D45              @ ((unsigned)&C1RX0B3)*8+5;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D46              @ ((unsigned)&C1RX0B3)*8+6;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D47              @ ((unsigned)&C1RX0B3)*8+7;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D50              @ ((unsigned)&C1RX0B3)*8+8;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D51              @ ((unsigned)&C1RX0B3)*8+9;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D52              @ ((unsigned)&C1RX0B3)*8+10;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D53              @ ((unsigned)&C1RX0B3)*8+11;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D54              @ ((unsigned)&C1RX0B3)*8+12;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D55              @ ((unsigned)&C1RX0B3)*8+13;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D56              @ ((unsigned)&C1RX0B3)*8+14;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D57              @ ((unsigned)&C1RX0B3)*8+15;

// Register: C1RX0B4
static volatile unsigned int            C1RX0B4             @ 0x38C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D7              : 8;
        volatile unsigned TXB0D6              : 8;
    };
    struct {
        volatile unsigned TXB0D77             : 1;
        volatile unsigned TXB0D76             : 1;
        volatile unsigned TXB0D75             : 1;
        volatile unsigned TXB0D74             : 1;
        volatile unsigned TXB0D73             : 1;
        volatile unsigned TXB0D72             : 1;
        volatile unsigned TXB0D71             : 1;
        volatile unsigned TXB0D70             : 1;
        volatile unsigned TXB0D67             : 1;
        volatile unsigned TXB0D66             : 1;
        volatile unsigned TXB0D65             : 1;
        volatile unsigned TXB0D64             : 1;
        volatile unsigned TXB0D63             : 1;
        volatile unsigned TXB0D62             : 1;
        volatile unsigned TXB0D61             : 1;
        volatile unsigned TXB0D60             : 1;
    };
} C1RX0B4bits @ 0x38C;
// bit variable definitions
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D60              @ ((unsigned)&C1RX0B4)*8+0;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D61              @ ((unsigned)&C1RX0B4)*8+1;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D62              @ ((unsigned)&C1RX0B4)*8+2;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D63              @ ((unsigned)&C1RX0B4)*8+3;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D64              @ ((unsigned)&C1RX0B4)*8+4;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D65              @ ((unsigned)&C1RX0B4)*8+5;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D66              @ ((unsigned)&C1RX0B4)*8+6;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D67              @ ((unsigned)&C1RX0B4)*8+7;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D70              @ ((unsigned)&C1RX0B4)*8+8;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D71              @ ((unsigned)&C1RX0B4)*8+9;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D72              @ ((unsigned)&C1RX0B4)*8+10;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D73              @ ((unsigned)&C1RX0B4)*8+11;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D74              @ ((unsigned)&C1RX0B4)*8+12;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D75              @ ((unsigned)&C1RX0B4)*8+13;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D76              @ ((unsigned)&C1RX0B4)*8+14;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D77              @ ((unsigned)&C1RX0B4)*8+15;

// Register: C1RX0CON
static volatile unsigned int            C1RX0CON            @ 0x38E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned RXFUL               : 1;
        volatile unsigned                     : 3;
        volatile unsigned RXRTRRO             : 1;
        volatile unsigned RXB0DBEN            : 1;
        volatile unsigned JTOFF               : 1;
        volatile unsigned FILHIT              : 1;
    };
} C1RX0CONbits @ 0x38E;
// bit variable definitions
static volatile bit FILHIT               @ ((unsigned)&C1RX0CON)*8+0;
static volatile bit JTOFF                @ ((unsigned)&C1RX0CON)*8+1;
static volatile bit RXB0DBEN             @ ((unsigned)&C1RX0CON)*8+2;
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit RXRTRRO              @ ((unsigned)&C1RX0CON)*8+3;
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit RXFUL                @ ((unsigned)&C1RX0CON)*8+7;

// Register: C1CTRL
static volatile unsigned int            C1CTRL              @ 0x390;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CANCAP              : 1;
        volatile unsigned CANFRZ              : 1;
        volatile unsigned CANSIDL             : 1;
        volatile unsigned ABAT                : 1;
        volatile unsigned CANCKS              : 1;
        volatile unsigned REQOP               : 3;
        volatile unsigned OPMODE              : 3;
        volatile unsigned                     : 1;
        volatile unsigned ICOD                : 3;
        volatile unsigned                     : 1;
    };
    struct {
        volatile unsigned                     : 4;
        volatile unsigned                     : 1;
        volatile unsigned REQOP2              : 1;
        volatile unsigned REQOP1              : 1;
        volatile unsigned REQOP0              : 1;
        volatile unsigned OPMODE2             : 1;
        volatile unsigned OPMODE1             : 1;
        volatile unsigned OPMODE0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned ICOD2               : 1;
        volatile unsigned ICOD1               : 1;
        volatile unsigned ICOD0               : 1;
        volatile unsigned                     : 1;
    };
} C1CTRLbits @ 0x390;
// bit variable definitions
static volatile bit CANCKS               @ ((unsigned)&C1CTRL)*8+11;
static volatile bit ABAT                 @ ((unsigned)&C1CTRL)*8+12;
static volatile bit CANSIDL              @ ((unsigned)&C1CTRL)*8+13;
static volatile bit CANFRZ               @ ((unsigned)&C1CTRL)*8+14;
static volatile bit CANCAP               @ ((unsigned)&C1CTRL)*8+15;
static volatile bit ICOD0                @ ((unsigned)&C1CTRL)*8+1;
static volatile bit ICOD1                @ ((unsigned)&C1CTRL)*8+2;
static volatile bit ICOD2                @ ((unsigned)&C1CTRL)*8+3;
static volatile bit OPMODE0              @ ((unsigned)&C1CTRL)*8+5;
static volatile bit OPMODE1              @ ((unsigned)&C1CTRL)*8+6;
static volatile bit OPMODE2              @ ((unsigned)&C1CTRL)*8+7;
static volatile bit REQOP0               @ ((unsigned)&C1CTRL)*8+8;
static volatile bit REQOP1               @ ((unsigned)&C1CTRL)*8+9;
static volatile bit REQOP2               @ ((unsigned)&C1CTRL)*8+10;

// Register: C1CFG1
static volatile unsigned int            C1CFG1              @ 0x392;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned SJW                 : 2;
        volatile unsigned BRP                 : 6;
    };
    struct {
        volatile unsigned                     : 8;
        volatile unsigned SJW1                : 1;
        volatile unsigned SJW0                : 1;
        volatile unsigned BRP5                : 1;
        volatile unsigned BRP4                : 1;
        volatile unsigned BRP3                : 1;
        volatile unsigned BRP2                : 1;
        volatile unsigned BRP1                : 1;
        volatile unsigned BRP0                : 1;
    };
} C1CFG1bits @ 0x392;
// bit variable definitions
static volatile bit BRP0                 @ ((unsigned)&C1CFG1)*8+0;
static volatile bit BRP1                 @ ((unsigned)&C1CFG1)*8+1;
static volatile bit BRP2                 @ ((unsigned)&C1CFG1)*8+2;
static volatile bit BRP3                 @ ((unsigned)&C1CFG1)*8+3;
static volatile bit BRP4                 @ ((unsigned)&C1CFG1)*8+4;
static volatile bit BRP5                 @ ((unsigned)&C1CFG1)*8+5;
static volatile bit SJW0                 @ ((unsigned)&C1CFG1)*8+6;
static volatile bit SJW1                 @ ((unsigned)&C1CFG1)*8+7;

// Register: C1CFG2
static volatile unsigned int            C1CFG2              @ 0x394;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned WAKFIL              : 1;
        volatile unsigned                     : 3;
        volatile unsigned SEG2PH              : 3;
        volatile unsigned SEG2PHTS            : 1;
        volatile unsigned SAM                 : 1;
        volatile unsigned SEG1PH              : 3;
        volatile unsigned PRSEG               : 3;
    };
    struct {
        volatile unsigned                     : 5;
        volatile unsigned SEG2PH2             : 1;
        volatile unsigned SEG2PH1             : 1;
        volatile unsigned SEG2PH0             : 1;
        volatile unsigned                     : 2;
        volatile unsigned SEG1PH2             : 1;
        volatile unsigned SEG1PH1             : 1;
        volatile unsigned SEG1PH0             : 1;
        volatile unsigned PRSEG2              : 1;
        volatile unsigned PRSEG1              : 1;
        volatile unsigned PRSEG0              : 1;
    };
} C1CFG2bits @ 0x394;
// bit variable definitions
static volatile bit SAM                  @ ((unsigned)&C1CFG2)*8+6;
static volatile bit SEG2PHTS             @ ((unsigned)&C1CFG2)*8+7;
static volatile bit WAKFIL               @ ((unsigned)&C1CFG2)*8+14;
static volatile bit PRSEG0               @ ((unsigned)&C1CFG2)*8+0;
static volatile bit PRSEG1               @ ((unsigned)&C1CFG2)*8+1;
static volatile bit PRSEG2               @ ((unsigned)&C1CFG2)*8+2;
static volatile bit SEG1PH0              @ ((unsigned)&C1CFG2)*8+3;
static volatile bit SEG1PH1              @ ((unsigned)&C1CFG2)*8+4;
static volatile bit SEG1PH2              @ ((unsigned)&C1CFG2)*8+5;
static volatile bit SEG2PH0              @ ((unsigned)&C1CFG2)*8+8;
static volatile bit SEG2PH1              @ ((unsigned)&C1CFG2)*8+9;
static volatile bit SEG2PH2              @ ((unsigned)&C1CFG2)*8+10;

// Register: C1INTF
static volatile unsigned int            C1INTF              @ 0x396;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned RXB0OVFL            : 1;
        volatile unsigned RXB1OVFL            : 1;
        volatile unsigned TXBO                : 1;
        volatile unsigned TXBP                : 1;
        volatile unsigned RXBP                : 1;
        volatile unsigned TXWARN              : 1;
        volatile unsigned RXWARN              : 1;
        volatile unsigned EWARN               : 1;
        volatile unsigned IRXIF               : 1;
        volatile unsigned WAKIF               : 1;
        volatile unsigned ERRIF               : 1;
        volatile unsigned TXB2IF              : 1;
        volatile unsigned TXB1IF              : 1;
        volatile unsigned TXB0IF              : 1;
        volatile unsigned RXB1IF              : 1;
        volatile unsigned RXB0IF              : 1;
    };
} C1INTFbits @ 0x396;
// bit variable definitions
static volatile bit RXB0IF               @ ((unsigned)&C1INTF)*8+0;
static volatile bit RXB1IF               @ ((unsigned)&C1INTF)*8+1;
static volatile bit TXB0IF               @ ((unsigned)&C1INTF)*8+2;
static volatile bit TXB1IF               @ ((unsigned)&C1INTF)*8+3;
static volatile bit TXB2IF               @ ((unsigned)&C1INTF)*8+4;
static volatile bit ERRIF                @ ((unsigned)&C1INTF)*8+5;
static volatile bit WAKIF                @ ((unsigned)&C1INTF)*8+6;
static volatile bit IRXIF                @ ((unsigned)&C1INTF)*8+7;
static volatile bit EWARN                @ ((unsigned)&C1INTF)*8+8;
static volatile bit RXWARN               @ ((unsigned)&C1INTF)*8+9;
static volatile bit TXWARN               @ ((unsigned)&C1INTF)*8+10;
static volatile bit RXBP                 @ ((unsigned)&C1INTF)*8+11;
static volatile bit TXBP                 @ ((unsigned)&C1INTF)*8+12;
static volatile bit TXBO                 @ ((unsigned)&C1INTF)*8+13;
static volatile bit RXB1OVFL             @ ((unsigned)&C1INTF)*8+14;
static volatile bit RXB0OVFL             @ ((unsigned)&C1INTF)*8+15;

// Register: C1INTE
static volatile unsigned int            C1INTE              @ 0x398;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned IRXIE               : 1;
        volatile unsigned WAKIE               : 1;
        volatile unsigned ERRIE               : 1;
        volatile unsigned TXB2IE              : 1;
        volatile unsigned TXB1IE              : 1;
        volatile unsigned TXB0IE              : 1;
        volatile unsigned RXB1IE              : 1;
        volatile unsigned RXB0IE              : 1;
    };
} C1INTEbits @ 0x398;
// bit variable definitions
static volatile bit RXB0IE               @ ((unsigned)&C1INTE)*8+0;
static volatile bit RXB1IE               @ ((unsigned)&C1INTE)*8+1;
static volatile bit TXB0IE               @ ((unsigned)&C1INTE)*8+2;
static volatile bit TXB1IE               @ ((unsigned)&C1INTE)*8+3;
static volatile bit TXB2IE               @ ((unsigned)&C1INTE)*8+4;
static volatile bit ERRIE                @ ((unsigned)&C1INTE)*8+5;
static volatile bit WAKIE                @ ((unsigned)&C1INTE)*8+6;
static volatile bit IRXIE                @ ((unsigned)&C1INTE)*8+7;

// Register: C1EC
static volatile unsigned int            C1EC                @ 0x39A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TEC                 : 8;
        volatile unsigned REC                 : 8;
    };
    struct {
        volatile unsigned TEC7                : 1;
        volatile unsigned TEC6                : 1;
        volatile unsigned TEC5                : 1;
        volatile unsigned TEC4                : 1;
        volatile unsigned TEC3                : 1;
        volatile unsigned TEC2                : 1;
        volatile unsigned TEC1                : 1;
        volatile unsigned TEC0                : 1;
        volatile unsigned REC7                : 1;
        volatile unsigned REC6                : 1;
        volatile unsigned REC5                : 1;
        volatile unsigned REC4                : 1;
        volatile unsigned REC3                : 1;
        volatile unsigned REC2                : 1;
        volatile unsigned REC1                : 1;
        volatile unsigned REC0                : 1;
    };
} C1ECbits @ 0x39A;
// bit variable definitions
static volatile bit REC0                 @ ((unsigned)&C1EC)*8+0;
static volatile bit REC1                 @ ((unsigned)&C1EC)*8+1;
static volatile bit REC2                 @ ((unsigned)&C1EC)*8+2;
static volatile bit REC3                 @ ((unsigned)&C1EC)*8+3;
static volatile bit REC4                 @ ((unsigned)&C1EC)*8+4;
static volatile bit REC5                 @ ((unsigned)&C1EC)*8+5;
static volatile bit REC6                 @ ((unsigned)&C1EC)*8+6;
static volatile bit REC7                 @ ((unsigned)&C1EC)*8+7;
static volatile bit TEC0                 @ ((unsigned)&C1EC)*8+8;
static volatile bit TEC1                 @ ((unsigned)&C1EC)*8+9;
static volatile bit TEC2                 @ ((unsigned)&C1EC)*8+10;
static volatile bit TEC3                 @ ((unsigned)&C1EC)*8+11;
static volatile bit TEC4                 @ ((unsigned)&C1EC)*8+12;
static volatile bit TEC5                 @ ((unsigned)&C1EC)*8+13;
static volatile bit TEC6                 @ ((unsigned)&C1EC)*8+14;
static volatile bit TEC7                 @ ((unsigned)&C1EC)*8+15;

// Register: C2RXF0SID
static volatile unsigned int            C2RXF0SID           @ 0x3C0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C2RXF0SIDbits @ 0x3C0;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C2RXF0SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RXF0SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RXF0SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RXF0SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RXF0SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RXF0SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RXF0SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RXF0SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RXF0SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RXF0SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RXF0SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RXF0SID)*8+12;

// Register: C2RXF0EIDH
static volatile unsigned int            C2RXF0EIDH          @ 0x3C2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RXF0EIDHbits @ 0x3C2;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RXF0EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RXF0EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RXF0EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RXF0EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RXF0EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RXF0EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RXF0EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RXF0EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RXF0EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RXF0EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RXF0EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RXF0EIDH)*8+11;

// Register: C2RXF0EIDL
static volatile unsigned int            C2RXF0EIDL          @ 0x3C4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C2RXF0EIDLbits @ 0x3C4;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RXF0EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RXF0EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RXF0EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RXF0EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RXF0EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RXF0EIDL)*8+15;

// Register: C2RXF1SID
static volatile unsigned int            C2RXF1SID           @ 0x3C8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C2RXF1SIDbits @ 0x3C8;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C2RXF1SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RXF1SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RXF1SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RXF1SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RXF1SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RXF1SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RXF1SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RXF1SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RXF1SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RXF1SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RXF1SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RXF1SID)*8+12;

// Register: C2RXF1EIDH
static volatile unsigned int            C2RXF1EIDH          @ 0x3CA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RXF1EIDHbits @ 0x3CA;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RXF1EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RXF1EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RXF1EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RXF1EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RXF1EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RXF1EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RXF1EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RXF1EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RXF1EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RXF1EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RXF1EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RXF1EIDH)*8+11;

// Register: C2RXF1EIDL
static volatile unsigned int            C2RXF1EIDL          @ 0x3CC;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C2RXF1EIDLbits @ 0x3CC;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RXF1EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RXF1EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RXF1EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RXF1EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RXF1EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RXF1EIDL)*8+15;

// Register: C2RXF2SID
static volatile unsigned int            C2RXF2SID           @ 0x3D0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C2RXF2SIDbits @ 0x3D0;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C2RXF2SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RXF2SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RXF2SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RXF2SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RXF2SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RXF2SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RXF2SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RXF2SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RXF2SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RXF2SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RXF2SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RXF2SID)*8+12;

// Register: C2RXF2EIDH
static volatile unsigned int            C2RXF2EIDH          @ 0x3D2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RXF2EIDHbits @ 0x3D2;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RXF2EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RXF2EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RXF2EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RXF2EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RXF2EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RXF2EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RXF2EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RXF2EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RXF2EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RXF2EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RXF2EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RXF2EIDH)*8+11;

// Register: C2RXF2EIDL
static volatile unsigned int            C2RXF2EIDL          @ 0x3D4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C2RXF2EIDLbits @ 0x3D4;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RXF2EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RXF2EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RXF2EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RXF2EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RXF2EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RXF2EIDL)*8+15;

// Register: C2RXF3SID
static volatile unsigned int            C2RXF3SID           @ 0x3D8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C2RXF3SIDbits @ 0x3D8;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C2RXF3SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RXF3SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RXF3SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RXF3SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RXF3SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RXF3SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RXF3SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RXF3SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RXF3SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RXF3SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RXF3SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RXF3SID)*8+12;

// Register: C2RXF3EIDH
static volatile unsigned int            C2RXF3EIDH          @ 0x3DA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RXF3EIDHbits @ 0x3DA;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RXF3EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RXF3EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RXF3EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RXF3EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RXF3EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RXF3EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RXF3EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RXF3EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RXF3EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RXF3EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RXF3EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RXF3EIDH)*8+11;

// Register: C2RXF3EIDL
static volatile unsigned int            C2RXF3EIDL          @ 0x3DC;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C2RXF3EIDLbits @ 0x3DC;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RXF3EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RXF3EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RXF3EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RXF3EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RXF3EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RXF3EIDL)*8+15;

// Register: C2RXF4SID
static volatile unsigned int            C2RXF4SID           @ 0x3E0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C2RXF4SIDbits @ 0x3E0;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C2RXF4SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RXF4SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RXF4SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RXF4SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RXF4SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RXF4SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RXF4SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RXF4SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RXF4SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RXF4SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RXF4SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RXF4SID)*8+12;

// Register: C2RXF4EIDH
static volatile unsigned int            C2RXF4EIDH          @ 0x3E2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RXF4EIDHbits @ 0x3E2;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RXF4EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RXF4EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RXF4EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RXF4EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RXF4EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RXF4EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RXF4EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RXF4EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RXF4EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RXF4EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RXF4EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RXF4EIDH)*8+11;

// Register: C2RXF4EIDL
static volatile unsigned int            C2RXF4EIDL          @ 0x3E4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C2RXF4EIDLbits @ 0x3E4;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RXF4EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RXF4EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RXF4EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RXF4EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RXF4EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RXF4EIDL)*8+15;

// Register: C2RXF5SID
static volatile unsigned int            C2RXF5SID           @ 0x3E8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned EXIDE               : 1;
    };
} C2RXF5SIDbits @ 0x3E8;
// bit variable definitions
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit EXIDE                @ ((unsigned)&C2RXF5SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RXF5SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RXF5SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RXF5SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RXF5SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RXF5SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RXF5SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RXF5SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RXF5SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RXF5SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RXF5SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RXF5SID)*8+12;

// Register: C2RXF5EIDH
static volatile unsigned int            C2RXF5EIDH          @ 0x3EA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RXF5EIDHbits @ 0x3EA;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RXF5EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RXF5EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RXF5EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RXF5EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RXF5EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RXF5EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RXF5EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RXF5EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RXF5EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RXF5EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RXF5EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RXF5EIDH)*8+11;

// Register: C2RXF5EIDL
static volatile unsigned int            C2RXF5EIDL          @ 0x3EC;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C2RXF5EIDLbits @ 0x3EC;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RXF5EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RXF5EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RXF5EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RXF5EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RXF5EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RXF5EIDL)*8+15;

// Register: C2RXM0SID
static volatile unsigned int            C2RXM0SID           @ 0x3F0;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned MIDE                : 1;
    };
} C2RXM0SIDbits @ 0x3F0;
// bit variable definitions
// duplicate bit in register C1RXM0SID, definition disabled
// static volatile bit MIDE                 @ ((unsigned)&C2RXM0SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RXM0SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RXM0SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RXM0SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RXM0SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RXM0SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RXM0SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RXM0SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RXM0SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RXM0SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RXM0SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RXM0SID)*8+12;

// Register: C2RXM0EIDH
static volatile unsigned int            C2RXM0EIDH          @ 0x3F2;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RXM0EIDHbits @ 0x3F2;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RXM0EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RXM0EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RXM0EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RXM0EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RXM0EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RXM0EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RXM0EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RXM0EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RXM0EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RXM0EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RXM0EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RXM0EIDH)*8+11;

// Register: C2RXM0EIDL
static volatile unsigned int            C2RXM0EIDL          @ 0x3F4;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C2RXM0EIDLbits @ 0x3F4;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RXM0EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RXM0EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RXM0EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RXM0EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RXM0EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RXM0EIDL)*8+15;

// Register: C2RXM1SID
static volatile unsigned int            C2RXM1SID           @ 0x3F8;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned                     : 1;
        volatile unsigned MIDE                : 1;
    };
} C2RXM1SIDbits @ 0x3F8;
// bit variable definitions
// duplicate bit in register C1RXM0SID, definition disabled
// static volatile bit MIDE                 @ ((unsigned)&C2RXM1SID)*8+0;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RXM1SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RXM1SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RXM1SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RXM1SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RXM1SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RXM1SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RXM1SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RXM1SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RXM1SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RXM1SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RXM1SID)*8+12;

// Register: C2RXM1EIDH
static volatile unsigned int            C2RXM1EIDH          @ 0x3FA;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RXM1EIDHbits @ 0x3FA;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RXM1EIDH)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RXM1EIDH)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RXM1EIDH)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RXM1EIDH)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RXM1EIDH)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RXM1EIDH)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RXM1EIDH)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RXM1EIDH)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RXM1EIDH)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RXM1EIDH)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RXM1EIDH)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RXM1EIDH)*8+11;

// Register: C2RXM1EIDL
static volatile unsigned int            C2RXM1EIDL          @ 0x3FC;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned                     : 10;
    };
} C2RXM1EIDLbits @ 0x3FC;
// bit variable definitions
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RXM1EIDL)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RXM1EIDL)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RXM1EIDL)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RXM1EIDL)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RXM1EIDL)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RXM1EIDL)*8+15;

// Register: C2TX2SID
static volatile unsigned int            C2TX2SID            @ 0x400;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned                     : 3;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C2TX2SIDbits @ 0x400;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C2TX2SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C2TX2SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2TX2SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2TX2SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2TX2SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2TX2SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2TX2SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2TX2SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2TX2SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2TX2SID)*8+12;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2TX2SID)*8+13;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2TX2SID)*8+14;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2TX2SID)*8+15;

// Register: C2TX2EID
static volatile unsigned int            C2TX2EID            @ 0x402;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned                     : 4;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2TX2EIDbits @ 0x402;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2TX2EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2TX2EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2TX2EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2TX2EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2TX2EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2TX2EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2TX2EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2TX2EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2TX2EID)*8+12;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2TX2EID)*8+13;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2TX2EID)*8+14;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2TX2EID)*8+15;

// Register: C2TX2DLC
static volatile unsigned int            C2TX2DLC            @ 0x404;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned TXRTR               : 1;
        volatile unsigned TXRB1               : 1;
        volatile unsigned TXRB0               : 1;
        volatile unsigned DLC                 : 4;
        volatile unsigned                     : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
        volatile unsigned                     : 3;
    };
} C2TX2DLCbits @ 0x404;
// bit variable definitions
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB0                @ ((unsigned)&C2TX2DLC)*8+7;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB1                @ ((unsigned)&C2TX2DLC)*8+8;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRTR                @ ((unsigned)&C2TX2DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2TX2DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2TX2DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2TX2DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2TX2DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2TX2DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2TX2DLC)*8+15;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC0                 @ ((unsigned)&C2TX2DLC)*8+3;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC1                 @ ((unsigned)&C2TX2DLC)*8+4;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC2                 @ ((unsigned)&C2TX2DLC)*8+5;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC3                 @ ((unsigned)&C2TX2DLC)*8+6;

// Register: C2TX2B1
static volatile unsigned int            C2TX2B1             @ 0x406;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB2D1              : 8;
        volatile unsigned TXB2D0              : 8;
    };
    struct {
        volatile unsigned TXB2D17             : 1;
        volatile unsigned TXB2D16             : 1;
        volatile unsigned TXB2D15             : 1;
        volatile unsigned TXB2D14             : 1;
        volatile unsigned TXB2D13             : 1;
        volatile unsigned TXB2D12             : 1;
        volatile unsigned TXB2D11             : 1;
        volatile unsigned TXB2D10             : 1;
        volatile unsigned TXB2D07             : 1;
        volatile unsigned TXB2D06             : 1;
        volatile unsigned TXB2D05             : 1;
        volatile unsigned TXB2D04             : 1;
        volatile unsigned TXB2D03             : 1;
        volatile unsigned TXB2D02             : 1;
        volatile unsigned TXB2D01             : 1;
        volatile unsigned TXB2D00             : 1;
    };
} C2TX2B1bits @ 0x406;
// bit variable definitions
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D00              @ ((unsigned)&C2TX2B1)*8+0;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D01              @ ((unsigned)&C2TX2B1)*8+1;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D02              @ ((unsigned)&C2TX2B1)*8+2;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D03              @ ((unsigned)&C2TX2B1)*8+3;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D04              @ ((unsigned)&C2TX2B1)*8+4;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D05              @ ((unsigned)&C2TX2B1)*8+5;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D06              @ ((unsigned)&C2TX2B1)*8+6;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D07              @ ((unsigned)&C2TX2B1)*8+7;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D10              @ ((unsigned)&C2TX2B1)*8+8;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D11              @ ((unsigned)&C2TX2B1)*8+9;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D12              @ ((unsigned)&C2TX2B1)*8+10;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D13              @ ((unsigned)&C2TX2B1)*8+11;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D14              @ ((unsigned)&C2TX2B1)*8+12;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D15              @ ((unsigned)&C2TX2B1)*8+13;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D16              @ ((unsigned)&C2TX2B1)*8+14;
// duplicate bit in register C1TX2B1, definition disabled
// static volatile bit TXB2D17              @ ((unsigned)&C2TX2B1)*8+15;

// Register: C2TX2B2
static volatile unsigned int            C2TX2B2             @ 0x408;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB2D3              : 8;
        volatile unsigned TXB2D2              : 8;
    };
    struct {
        volatile unsigned TXB2D37             : 1;
        volatile unsigned TXB2D36             : 1;
        volatile unsigned TXB2D35             : 1;
        volatile unsigned TXB2D34             : 1;
        volatile unsigned TXB2D33             : 1;
        volatile unsigned TXB2D32             : 1;
        volatile unsigned TXB2D31             : 1;
        volatile unsigned TXB2D30             : 1;
        volatile unsigned TXB2D27             : 1;
        volatile unsigned TXB2D26             : 1;
        volatile unsigned TXB2D25             : 1;
        volatile unsigned TXB2D24             : 1;
        volatile unsigned TXB2D23             : 1;
        volatile unsigned TXB2D22             : 1;
        volatile unsigned TXB2D21             : 1;
        volatile unsigned TXB2D20             : 1;
    };
} C2TX2B2bits @ 0x408;
// bit variable definitions
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D20              @ ((unsigned)&C2TX2B2)*8+0;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D21              @ ((unsigned)&C2TX2B2)*8+1;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D22              @ ((unsigned)&C2TX2B2)*8+2;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D23              @ ((unsigned)&C2TX2B2)*8+3;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D24              @ ((unsigned)&C2TX2B2)*8+4;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D25              @ ((unsigned)&C2TX2B2)*8+5;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D26              @ ((unsigned)&C2TX2B2)*8+6;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D27              @ ((unsigned)&C2TX2B2)*8+7;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D30              @ ((unsigned)&C2TX2B2)*8+8;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D31              @ ((unsigned)&C2TX2B2)*8+9;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D32              @ ((unsigned)&C2TX2B2)*8+10;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D33              @ ((unsigned)&C2TX2B2)*8+11;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D34              @ ((unsigned)&C2TX2B2)*8+12;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D35              @ ((unsigned)&C2TX2B2)*8+13;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D36              @ ((unsigned)&C2TX2B2)*8+14;
// duplicate bit in register C1TX2B2, definition disabled
// static volatile bit TXB2D37              @ ((unsigned)&C2TX2B2)*8+15;

// Register: C2TX2B3
static volatile unsigned int            C2TX2B3             @ 0x40A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB2D5              : 8;
        volatile unsigned TXB2D4              : 8;
    };
    struct {
        volatile unsigned TXB2D57             : 1;
        volatile unsigned TXB2D56             : 1;
        volatile unsigned TXB2D55             : 1;
        volatile unsigned TXB2D54             : 1;
        volatile unsigned TXB2D53             : 1;
        volatile unsigned TXB2D52             : 1;
        volatile unsigned TXB2D51             : 1;
        volatile unsigned TXB2D50             : 1;
        volatile unsigned TXB2D47             : 1;
        volatile unsigned TXB2D46             : 1;
        volatile unsigned TXB2D45             : 1;
        volatile unsigned TXB2D44             : 1;
        volatile unsigned TXB2D43             : 1;
        volatile unsigned TXB2D42             : 1;
        volatile unsigned TXB2D41             : 1;
        volatile unsigned TXB2D40             : 1;
    };
} C2TX2B3bits @ 0x40A;
// bit variable definitions
static volatile bit TXB2D40              @ ((unsigned)&C2TX2B3)*8+0;
static volatile bit TXB2D41              @ ((unsigned)&C2TX2B3)*8+1;
static volatile bit TXB2D42              @ ((unsigned)&C2TX2B3)*8+2;
static volatile bit TXB2D43              @ ((unsigned)&C2TX2B3)*8+3;
static volatile bit TXB2D44              @ ((unsigned)&C2TX2B3)*8+4;
static volatile bit TXB2D45              @ ((unsigned)&C2TX2B3)*8+5;
static volatile bit TXB2D46              @ ((unsigned)&C2TX2B3)*8+6;
static volatile bit TXB2D47              @ ((unsigned)&C2TX2B3)*8+7;
// duplicate bit in register C1TX2B3, definition disabled
// static volatile bit TXB2D50              @ ((unsigned)&C2TX2B3)*8+8;
// duplicate bit in register C1TX2B3, definition disabled
// static volatile bit TXB2D51              @ ((unsigned)&C2TX2B3)*8+9;
// duplicate bit in register C1TX2B3, definition disabled
// static volatile bit TXB2D52              @ ((unsigned)&C2TX2B3)*8+10;
// duplicate bit in register C1TX2B3, definition disabled
// static volatile bit TXB2D53              @ ((unsigned)&C2TX2B3)*8+11;
// duplicate bit in register C1TX2B3, definition disabled
// static volatile bit TXB2D54              @ ((unsigned)&C2TX2B3)*8+12;
// duplicate bit in register C1TX2B3, definition disabled
// static volatile bit TXB2D55              @ ((unsigned)&C2TX2B3)*8+13;
// duplicate bit in register C1TX2B3, definition disabled
// static volatile bit TXB2D56              @ ((unsigned)&C2TX2B3)*8+14;
// duplicate bit in register C1TX2B3, definition disabled
// static volatile bit TXB2D57              @ ((unsigned)&C2TX2B3)*8+15;

// Register: C2TX2B4
static volatile unsigned int            C2TX2B4             @ 0x40C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB2D7              : 8;
        volatile unsigned TXB2D6              : 8;
    };
    struct {
        volatile unsigned TXB2D77             : 1;
        volatile unsigned TXB2D76             : 1;
        volatile unsigned TXB2D75             : 1;
        volatile unsigned TXB2D74             : 1;
        volatile unsigned TXB2D73             : 1;
        volatile unsigned TXB2D72             : 1;
        volatile unsigned TXB2D71             : 1;
        volatile unsigned TXB2D70             : 1;
        volatile unsigned TXB2D67             : 1;
        volatile unsigned TXB2D66             : 1;
        volatile unsigned TXB2D65             : 1;
        volatile unsigned TXB2D64             : 1;
        volatile unsigned TXB2D63             : 1;
        volatile unsigned TXB2D62             : 1;
        volatile unsigned TXB2D61             : 1;
        volatile unsigned TXB2D60             : 1;
    };
} C2TX2B4bits @ 0x40C;
// bit variable definitions
static volatile bit TXB2D60              @ ((unsigned)&C2TX2B4)*8+0;
static volatile bit TXB2D61              @ ((unsigned)&C2TX2B4)*8+1;
static volatile bit TXB2D62              @ ((unsigned)&C2TX2B4)*8+2;
static volatile bit TXB2D63              @ ((unsigned)&C2TX2B4)*8+3;
static volatile bit TXB2D64              @ ((unsigned)&C2TX2B4)*8+4;
static volatile bit TXB2D65              @ ((unsigned)&C2TX2B4)*8+5;
static volatile bit TXB2D66              @ ((unsigned)&C2TX2B4)*8+6;
static volatile bit TXB2D67              @ ((unsigned)&C2TX2B4)*8+7;
static volatile bit TXB2D70              @ ((unsigned)&C2TX2B4)*8+8;
static volatile bit TXB2D71              @ ((unsigned)&C2TX2B4)*8+9;
static volatile bit TXB2D72              @ ((unsigned)&C2TX2B4)*8+10;
static volatile bit TXB2D73              @ ((unsigned)&C2TX2B4)*8+11;
static volatile bit TXB2D74              @ ((unsigned)&C2TX2B4)*8+12;
static volatile bit TXB2D75              @ ((unsigned)&C2TX2B4)*8+13;
static volatile bit TXB2D76              @ ((unsigned)&C2TX2B4)*8+14;
static volatile bit TXB2D77              @ ((unsigned)&C2TX2B4)*8+15;

// Register: C2TX2CON
static volatile unsigned int            C2TX2CON            @ 0x40E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned TXABT               : 1;
        volatile unsigned TXLARB              : 1;
        volatile unsigned TXERR               : 1;
        volatile unsigned TXREQ               : 1;
        volatile unsigned                     : 1;
        volatile unsigned TXPRI               : 2;
    };
    struct {
        volatile unsigned                     : 14;
        volatile unsigned TXPRI1              : 1;
        volatile unsigned TXPRI0              : 1;
    };
} C2TX2CONbits @ 0x40E;
// bit variable definitions
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXREQ                @ ((unsigned)&C2TX2CON)*8+3;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXERR                @ ((unsigned)&C2TX2CON)*8+4;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXLARB               @ ((unsigned)&C2TX2CON)*8+5;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXABT                @ ((unsigned)&C2TX2CON)*8+6;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI0               @ ((unsigned)&C2TX2CON)*8+0;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI1               @ ((unsigned)&C2TX2CON)*8+1;

// Register: C2TX1SID
static volatile unsigned int            C2TX1SID            @ 0x410;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned                     : 3;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C2TX1SIDbits @ 0x410;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C2TX1SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C2TX1SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2TX1SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2TX1SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2TX1SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2TX1SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2TX1SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2TX1SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2TX1SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2TX1SID)*8+12;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2TX1SID)*8+13;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2TX1SID)*8+14;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2TX1SID)*8+15;

// Register: C2TX1EID
static volatile unsigned int            C2TX1EID            @ 0x412;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned                     : 4;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2TX1EIDbits @ 0x412;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2TX1EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2TX1EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2TX1EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2TX1EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2TX1EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2TX1EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2TX1EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2TX1EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2TX1EID)*8+12;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2TX1EID)*8+13;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2TX1EID)*8+14;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2TX1EID)*8+15;

// Register: C2TX1DLC
static volatile unsigned int            C2TX1DLC            @ 0x414;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned TXRTR               : 1;
        volatile unsigned TXRB1               : 1;
        volatile unsigned TXRB0               : 1;
        volatile unsigned DLC                 : 4;
        volatile unsigned                     : 3;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
        volatile unsigned                     : 3;
    };
} C2TX1DLCbits @ 0x414;
// bit variable definitions
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB0                @ ((unsigned)&C2TX1DLC)*8+7;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB1                @ ((unsigned)&C2TX1DLC)*8+8;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRTR                @ ((unsigned)&C2TX1DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2TX1DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2TX1DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2TX1DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2TX1DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2TX1DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2TX1DLC)*8+15;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC0                 @ ((unsigned)&C2TX1DLC)*8+3;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC1                 @ ((unsigned)&C2TX1DLC)*8+4;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC2                 @ ((unsigned)&C2TX1DLC)*8+5;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC3                 @ ((unsigned)&C2TX1DLC)*8+6;

// Register: C2TX1B1
static volatile unsigned int            C2TX1B1             @ 0x416;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D1              : 8;
        volatile unsigned TXB1D0              : 8;
    };
    struct {
        volatile unsigned TXB1D17             : 1;
        volatile unsigned TXB1D16             : 1;
        volatile unsigned TXB1D15             : 1;
        volatile unsigned TXB1D14             : 1;
        volatile unsigned TXB1D13             : 1;
        volatile unsigned TXB1D12             : 1;
        volatile unsigned TXB1D11             : 1;
        volatile unsigned TXB1D10             : 1;
        volatile unsigned TXB1D07             : 1;
        volatile unsigned TXB1D06             : 1;
        volatile unsigned TXB1D05             : 1;
        volatile unsigned TXB1D04             : 1;
        volatile unsigned TXB1D03             : 1;
        volatile unsigned TXB1D02             : 1;
        volatile unsigned TXB1D01             : 1;
        volatile unsigned TXB1D00             : 1;
    };
} C2TX1B1bits @ 0x416;
// bit variable definitions
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D00              @ ((unsigned)&C2TX1B1)*8+0;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D01              @ ((unsigned)&C2TX1B1)*8+1;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D02              @ ((unsigned)&C2TX1B1)*8+2;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D03              @ ((unsigned)&C2TX1B1)*8+3;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D04              @ ((unsigned)&C2TX1B1)*8+4;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D05              @ ((unsigned)&C2TX1B1)*8+5;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D06              @ ((unsigned)&C2TX1B1)*8+6;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D07              @ ((unsigned)&C2TX1B1)*8+7;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D10              @ ((unsigned)&C2TX1B1)*8+8;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D11              @ ((unsigned)&C2TX1B1)*8+9;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D12              @ ((unsigned)&C2TX1B1)*8+10;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D13              @ ((unsigned)&C2TX1B1)*8+11;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D14              @ ((unsigned)&C2TX1B1)*8+12;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D15              @ ((unsigned)&C2TX1B1)*8+13;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D16              @ ((unsigned)&C2TX1B1)*8+14;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D17              @ ((unsigned)&C2TX1B1)*8+15;

// Register: C2TX1B2
static volatile unsigned int            C2TX1B2             @ 0x418;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D3              : 8;
        volatile unsigned TXB1D2              : 8;
    };
    struct {
        volatile unsigned TXB1D37             : 1;
        volatile unsigned TXB1D36             : 1;
        volatile unsigned TXB1D35             : 1;
        volatile unsigned TXB1D34             : 1;
        volatile unsigned TXB1D33             : 1;
        volatile unsigned TXB1D32             : 1;
        volatile unsigned TXB1D31             : 1;
        volatile unsigned TXB1D30             : 1;
        volatile unsigned TXB1D27             : 1;
        volatile unsigned TXB1D26             : 1;
        volatile unsigned TXB1D25             : 1;
        volatile unsigned TXB1D24             : 1;
        volatile unsigned TXB1D23             : 1;
        volatile unsigned TXB1D22             : 1;
        volatile unsigned TXB1D21             : 1;
        volatile unsigned TXB1D20             : 1;
    };
} C2TX1B2bits @ 0x418;
// bit variable definitions
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D20              @ ((unsigned)&C2TX1B2)*8+0;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D21              @ ((unsigned)&C2TX1B2)*8+1;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D22              @ ((unsigned)&C2TX1B2)*8+2;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D23              @ ((unsigned)&C2TX1B2)*8+3;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D24              @ ((unsigned)&C2TX1B2)*8+4;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D25              @ ((unsigned)&C2TX1B2)*8+5;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D26              @ ((unsigned)&C2TX1B2)*8+6;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D27              @ ((unsigned)&C2TX1B2)*8+7;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D30              @ ((unsigned)&C2TX1B2)*8+8;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D31              @ ((unsigned)&C2TX1B2)*8+9;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D32              @ ((unsigned)&C2TX1B2)*8+10;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D33              @ ((unsigned)&C2TX1B2)*8+11;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D34              @ ((unsigned)&C2TX1B2)*8+12;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D35              @ ((unsigned)&C2TX1B2)*8+13;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D36              @ ((unsigned)&C2TX1B2)*8+14;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D37              @ ((unsigned)&C2TX1B2)*8+15;

// Register: C2TX1B3
static volatile unsigned int            C2TX1B3             @ 0x41A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D5              : 8;
        volatile unsigned TXB1D4              : 8;
    };
    struct {
        volatile unsigned TXB1D57             : 1;
        volatile unsigned TXB1D56             : 1;
        volatile unsigned TXB1D55             : 1;
        volatile unsigned TXB1D54             : 1;
        volatile unsigned TXB1D53             : 1;
        volatile unsigned TXB1D52             : 1;
        volatile unsigned TXB1D51             : 1;
        volatile unsigned TXB1D50             : 1;
        volatile unsigned TXB1D47             : 1;
        volatile unsigned TXB1D46             : 1;
        volatile unsigned TXB1D45             : 1;
        volatile unsigned TXB1D44             : 1;
        volatile unsigned TXB1D43             : 1;
        volatile unsigned TXB1D42             : 1;
        volatile unsigned TXB1D41             : 1;
        volatile unsigned TXB1D40             : 1;
    };
} C2TX1B3bits @ 0x41A;
// bit variable definitions
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D40              @ ((unsigned)&C2TX1B3)*8+0;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D41              @ ((unsigned)&C2TX1B3)*8+1;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D42              @ ((unsigned)&C2TX1B3)*8+2;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D43              @ ((unsigned)&C2TX1B3)*8+3;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D44              @ ((unsigned)&C2TX1B3)*8+4;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D45              @ ((unsigned)&C2TX1B3)*8+5;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D46              @ ((unsigned)&C2TX1B3)*8+6;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D47              @ ((unsigned)&C2TX1B3)*8+7;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D50              @ ((unsigned)&C2TX1B3)*8+8;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D51              @ ((unsigned)&C2TX1B3)*8+9;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D52              @ ((unsigned)&C2TX1B3)*8+10;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D53              @ ((unsigned)&C2TX1B3)*8+11;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D54              @ ((unsigned)&C2TX1B3)*8+12;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D55              @ ((unsigned)&C2TX1B3)*8+13;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D56              @ ((unsigned)&C2TX1B3)*8+14;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D57              @ ((unsigned)&C2TX1B3)*8+15;

// Register: C2TX1B4
static volatile unsigned int            C2TX1B4             @ 0x41C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D7              : 8;
        volatile unsigned TXB1D6              : 8;
    };
    struct {
        volatile unsigned TXB1D77             : 1;
        volatile unsigned TXB1D76             : 1;
        volatile unsigned TXB1D75             : 1;
        volatile unsigned TXB1D74             : 1;
        volatile unsigned TXB1D73             : 1;
        volatile unsigned TXB1D72             : 1;
        volatile unsigned TXB1D71             : 1;
        volatile unsigned TXB1D70             : 1;
        volatile unsigned TXB1D67             : 1;
        volatile unsigned TXB1D66             : 1;
        volatile unsigned TXB1D65             : 1;
        volatile unsigned TXB1D64             : 1;
        volatile unsigned TXB1D63             : 1;
        volatile unsigned TXB1D62             : 1;
        volatile unsigned TXB1D61             : 1;
        volatile unsigned TXB1D60             : 1;
    };
} C2TX1B4bits @ 0x41C;
// bit variable definitions
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D60              @ ((unsigned)&C2TX1B4)*8+0;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D61              @ ((unsigned)&C2TX1B4)*8+1;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D62              @ ((unsigned)&C2TX1B4)*8+2;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D63              @ ((unsigned)&C2TX1B4)*8+3;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D64              @ ((unsigned)&C2TX1B4)*8+4;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D65              @ ((unsigned)&C2TX1B4)*8+5;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D66              @ ((unsigned)&C2TX1B4)*8+6;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D67              @ ((unsigned)&C2TX1B4)*8+7;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D70              @ ((unsigned)&C2TX1B4)*8+8;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D71              @ ((unsigned)&C2TX1B4)*8+9;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D72              @ ((unsigned)&C2TX1B4)*8+10;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D73              @ ((unsigned)&C2TX1B4)*8+11;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D74              @ ((unsigned)&C2TX1B4)*8+12;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D75              @ ((unsigned)&C2TX1B4)*8+13;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D76              @ ((unsigned)&C2TX1B4)*8+14;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D77              @ ((unsigned)&C2TX1B4)*8+15;

// Register: C2TX1CON
static volatile unsigned int            C2TX1CON            @ 0x41E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned TXABT               : 1;
        volatile unsigned TXLARB              : 1;
        volatile unsigned TXERR               : 1;
        volatile unsigned TXREQ               : 1;
        volatile unsigned                     : 1;
        volatile unsigned TXPRI               : 2;
    };
    struct {
        volatile unsigned                     : 14;
        volatile unsigned TXPRI1              : 1;
        volatile unsigned TXPRI0              : 1;
    };
} C2TX1CONbits @ 0x41E;
// bit variable definitions
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXREQ                @ ((unsigned)&C2TX1CON)*8+3;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXERR                @ ((unsigned)&C2TX1CON)*8+4;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXLARB               @ ((unsigned)&C2TX1CON)*8+5;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXABT                @ ((unsigned)&C2TX1CON)*8+6;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI0               @ ((unsigned)&C2TX1CON)*8+0;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI1               @ ((unsigned)&C2TX1CON)*8+1;

// Register: C2TX0SID
static volatile unsigned int            C2TX0SID            @ 0x420;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned                     : 3;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C2TX0SIDbits @ 0x420;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C2TX0SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C2TX0SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2TX0SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2TX0SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2TX0SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2TX0SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2TX0SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2TX0SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2TX0SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2TX0SID)*8+12;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2TX0SID)*8+13;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2TX0SID)*8+14;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2TX0SID)*8+15;

// Register: C2TX0EID
static volatile unsigned int            C2TX0EID            @ 0x422;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned                     : 4;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2TX0EIDbits @ 0x422;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2TX0EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2TX0EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2TX0EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2TX0EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2TX0EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2TX0EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2TX0EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2TX0EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2TX0EID)*8+12;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2TX0EID)*8+13;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2TX0EID)*8+14;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2TX0EID)*8+15;

// Register: C2TX0DLC
static volatile unsigned int            C2TX0DLC            @ 0x424;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned TXRTR               : 1;
        volatile unsigned TXRB1               : 1;
        volatile unsigned TXRB0               : 1;
        volatile unsigned DLC                 : 4;
        volatile unsigned                     : 3;
    };
} C2TX0DLCbits @ 0x424;
// bit variable definitions
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB0                @ ((unsigned)&C2TX0DLC)*8+7;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRB1                @ ((unsigned)&C2TX0DLC)*8+8;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit TXRTR                @ ((unsigned)&C2TX0DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2TX0DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2TX0DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2TX0DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2TX0DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2TX0DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2TX0DLC)*8+15;

// Register: C2TX0B1
static volatile unsigned int            C2TX0B1             @ 0x426;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D1              : 8;
        volatile unsigned TXB0D0              : 8;
    };
    struct {
        volatile unsigned TXB0D17             : 1;
        volatile unsigned TXB0D16             : 1;
        volatile unsigned TXB0D15             : 1;
        volatile unsigned TXB0D14             : 1;
        volatile unsigned TXB0D13             : 1;
        volatile unsigned TXB0D12             : 1;
        volatile unsigned TXB0D11             : 1;
        volatile unsigned TXB0D10             : 1;
        volatile unsigned TXB0D07             : 1;
        volatile unsigned TXB0D06             : 1;
        volatile unsigned TXB0D05             : 1;
        volatile unsigned TXB0D04             : 1;
        volatile unsigned TXB0D03             : 1;
        volatile unsigned TXB0D02             : 1;
        volatile unsigned TXB0D01             : 1;
        volatile unsigned TXB0D00             : 1;
    };
} C2TX0B1bits @ 0x426;
// bit variable definitions
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D00              @ ((unsigned)&C2TX0B1)*8+0;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D01              @ ((unsigned)&C2TX0B1)*8+1;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D02              @ ((unsigned)&C2TX0B1)*8+2;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D03              @ ((unsigned)&C2TX0B1)*8+3;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D04              @ ((unsigned)&C2TX0B1)*8+4;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D05              @ ((unsigned)&C2TX0B1)*8+5;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D06              @ ((unsigned)&C2TX0B1)*8+6;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D07              @ ((unsigned)&C2TX0B1)*8+7;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D10              @ ((unsigned)&C2TX0B1)*8+8;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D11              @ ((unsigned)&C2TX0B1)*8+9;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D12              @ ((unsigned)&C2TX0B1)*8+10;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D13              @ ((unsigned)&C2TX0B1)*8+11;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D14              @ ((unsigned)&C2TX0B1)*8+12;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D15              @ ((unsigned)&C2TX0B1)*8+13;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D16              @ ((unsigned)&C2TX0B1)*8+14;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D17              @ ((unsigned)&C2TX0B1)*8+15;

// Register: C2TX0B2
static volatile unsigned int            C2TX0B2             @ 0x428;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D3              : 8;
        volatile unsigned TXB0D2              : 8;
    };
    struct {
        volatile unsigned TXB0D37             : 1;
        volatile unsigned TXB0D36             : 1;
        volatile unsigned TXB0D35             : 1;
        volatile unsigned TXB0D34             : 1;
        volatile unsigned TXB0D33             : 1;
        volatile unsigned TXB0D32             : 1;
        volatile unsigned TXB0D31             : 1;
        volatile unsigned TXB0D30             : 1;
        volatile unsigned TXB0D27             : 1;
        volatile unsigned TXB0D26             : 1;
        volatile unsigned TXB0D25             : 1;
        volatile unsigned TXB0D24             : 1;
        volatile unsigned TXB0D23             : 1;
        volatile unsigned TXB0D22             : 1;
        volatile unsigned TXB0D21             : 1;
        volatile unsigned TXB0D20             : 1;
    };
} C2TX0B2bits @ 0x428;
// bit variable definitions
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D20              @ ((unsigned)&C2TX0B2)*8+0;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D21              @ ((unsigned)&C2TX0B2)*8+1;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D22              @ ((unsigned)&C2TX0B2)*8+2;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D23              @ ((unsigned)&C2TX0B2)*8+3;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D24              @ ((unsigned)&C2TX0B2)*8+4;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D25              @ ((unsigned)&C2TX0B2)*8+5;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D26              @ ((unsigned)&C2TX0B2)*8+6;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D27              @ ((unsigned)&C2TX0B2)*8+7;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D30              @ ((unsigned)&C2TX0B2)*8+8;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D31              @ ((unsigned)&C2TX0B2)*8+9;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D32              @ ((unsigned)&C2TX0B2)*8+10;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D33              @ ((unsigned)&C2TX0B2)*8+11;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D34              @ ((unsigned)&C2TX0B2)*8+12;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D35              @ ((unsigned)&C2TX0B2)*8+13;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D36              @ ((unsigned)&C2TX0B2)*8+14;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D37              @ ((unsigned)&C2TX0B2)*8+15;

// Register: C2TX0B3
static volatile unsigned int            C2TX0B3             @ 0x42A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D5              : 8;
        volatile unsigned TXB0D4              : 8;
    };
    struct {
        volatile unsigned TXB0D57             : 1;
        volatile unsigned TXB0D56             : 1;
        volatile unsigned TXB0D55             : 1;
        volatile unsigned TXB0D54             : 1;
        volatile unsigned TXB0D53             : 1;
        volatile unsigned TXB0D52             : 1;
        volatile unsigned TXB0D51             : 1;
        volatile unsigned TXB0D50             : 1;
        volatile unsigned TXB0D47             : 1;
        volatile unsigned TXB0D46             : 1;
        volatile unsigned TXB0D45             : 1;
        volatile unsigned TXB0D44             : 1;
        volatile unsigned TXB0D43             : 1;
        volatile unsigned TXB0D42             : 1;
        volatile unsigned TXB0D41             : 1;
        volatile unsigned TXB0D40             : 1;
    };
} C2TX0B3bits @ 0x42A;
// bit variable definitions
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D40              @ ((unsigned)&C2TX0B3)*8+0;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D41              @ ((unsigned)&C2TX0B3)*8+1;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D42              @ ((unsigned)&C2TX0B3)*8+2;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D43              @ ((unsigned)&C2TX0B3)*8+3;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D44              @ ((unsigned)&C2TX0B3)*8+4;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D45              @ ((unsigned)&C2TX0B3)*8+5;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D46              @ ((unsigned)&C2TX0B3)*8+6;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D47              @ ((unsigned)&C2TX0B3)*8+7;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D50              @ ((unsigned)&C2TX0B3)*8+8;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D51              @ ((unsigned)&C2TX0B3)*8+9;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D52              @ ((unsigned)&C2TX0B3)*8+10;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D53              @ ((unsigned)&C2TX0B3)*8+11;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D54              @ ((unsigned)&C2TX0B3)*8+12;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D55              @ ((unsigned)&C2TX0B3)*8+13;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D56              @ ((unsigned)&C2TX0B3)*8+14;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D57              @ ((unsigned)&C2TX0B3)*8+15;

// Register: C2TX0B4
static volatile unsigned int            C2TX0B4             @ 0x42C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D7              : 8;
        volatile unsigned TXB0D6              : 8;
    };
    struct {
        volatile unsigned TXB0D77             : 1;
        volatile unsigned TXB0D76             : 1;
        volatile unsigned TXB0D75             : 1;
        volatile unsigned TXB0D74             : 1;
        volatile unsigned TXB0D73             : 1;
        volatile unsigned TXB0D72             : 1;
        volatile unsigned TXB0D71             : 1;
        volatile unsigned TXB0D70             : 1;
        volatile unsigned TXB0D67             : 1;
        volatile unsigned TXB0D66             : 1;
        volatile unsigned TXB0D65             : 1;
        volatile unsigned TXB0D64             : 1;
        volatile unsigned TXB0D63             : 1;
        volatile unsigned TXB0D62             : 1;
        volatile unsigned TXB0D61             : 1;
        volatile unsigned TXB0D60             : 1;
    };
} C2TX0B4bits @ 0x42C;
// bit variable definitions
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D60              @ ((unsigned)&C2TX0B4)*8+0;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D61              @ ((unsigned)&C2TX0B4)*8+1;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D62              @ ((unsigned)&C2TX0B4)*8+2;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D63              @ ((unsigned)&C2TX0B4)*8+3;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D64              @ ((unsigned)&C2TX0B4)*8+4;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D65              @ ((unsigned)&C2TX0B4)*8+5;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D66              @ ((unsigned)&C2TX0B4)*8+6;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D67              @ ((unsigned)&C2TX0B4)*8+7;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D70              @ ((unsigned)&C2TX0B4)*8+8;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D71              @ ((unsigned)&C2TX0B4)*8+9;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D72              @ ((unsigned)&C2TX0B4)*8+10;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D73              @ ((unsigned)&C2TX0B4)*8+11;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D74              @ ((unsigned)&C2TX0B4)*8+12;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D75              @ ((unsigned)&C2TX0B4)*8+13;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D76              @ ((unsigned)&C2TX0B4)*8+14;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D77              @ ((unsigned)&C2TX0B4)*8+15;

// Register: C2TX0CON
static volatile unsigned int            C2TX0CON            @ 0x42E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 9;
        volatile unsigned TXABT               : 1;
        volatile unsigned TXLARB              : 1;
        volatile unsigned TXERR               : 1;
        volatile unsigned TXREQ               : 1;
        volatile unsigned                     : 1;
        volatile unsigned TXPRI               : 2;
    };
    struct {
        volatile unsigned                     : 14;
        volatile unsigned TXPRI1              : 1;
        volatile unsigned TXPRI0              : 1;
    };
} C2TX0CONbits @ 0x42E;
// bit variable definitions
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXREQ                @ ((unsigned)&C2TX0CON)*8+3;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXERR                @ ((unsigned)&C2TX0CON)*8+4;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXLARB               @ ((unsigned)&C2TX0CON)*8+5;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXABT                @ ((unsigned)&C2TX0CON)*8+6;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI0               @ ((unsigned)&C2TX0CON)*8+0;
// duplicate bit in register C1TX2CON, definition disabled
// static volatile bit TXPRI1               @ ((unsigned)&C2TX0CON)*8+1;

// Register: C2RX1SID
static volatile unsigned int            C2RX1SID            @ 0x430;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C2RX1SIDbits @ 0x430;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C2RX1SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C2RX1SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RX1SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RX1SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RX1SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RX1SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RX1SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RX1SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RX1SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RX1SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RX1SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RX1SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RX1SID)*8+12;

// Register: C2RX1EID
static volatile unsigned int            C2RX1EID            @ 0x432;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RX1EIDbits @ 0x432;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RX1EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RX1EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RX1EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RX1EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RX1EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RX1EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RX1EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RX1EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RX1EID)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RX1EID)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RX1EID)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RX1EID)*8+11;

// Register: C2RX1DLC
static volatile unsigned int            C2RX1DLC            @ 0x434;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned RXRTR               : 1;
        volatile unsigned RXRB1               : 1;
        volatile unsigned                     : 3;
        volatile unsigned RXRB0               : 1;
        volatile unsigned DLC                 : 4;
    };
    struct {
        volatile unsigned                     : 12;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
    };
} C2RX1DLCbits @ 0x434;
// bit variable definitions
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRB0                @ ((unsigned)&C2RX1DLC)*8+4;
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRB1                @ ((unsigned)&C2RX1DLC)*8+8;
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRTR                @ ((unsigned)&C2RX1DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RX1DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RX1DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RX1DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RX1DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RX1DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RX1DLC)*8+15;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC0                 @ ((unsigned)&C2RX1DLC)*8+0;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC1                 @ ((unsigned)&C2RX1DLC)*8+1;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC2                 @ ((unsigned)&C2RX1DLC)*8+2;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC3                 @ ((unsigned)&C2RX1DLC)*8+3;

// Register: C2RX1B1
static volatile unsigned int            C2RX1B1             @ 0x436;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D1              : 8;
        volatile unsigned TXB1D0              : 8;
    };
    struct {
        volatile unsigned TXB1D17             : 1;
        volatile unsigned TXB1D16             : 1;
        volatile unsigned TXB1D15             : 1;
        volatile unsigned TXB1D14             : 1;
        volatile unsigned TXB1D13             : 1;
        volatile unsigned TXB1D12             : 1;
        volatile unsigned TXB1D11             : 1;
        volatile unsigned TXB1D10             : 1;
        volatile unsigned TXB1D07             : 1;
        volatile unsigned TXB1D06             : 1;
        volatile unsigned TXB1D05             : 1;
        volatile unsigned TXB1D04             : 1;
        volatile unsigned TXB1D03             : 1;
        volatile unsigned TXB1D02             : 1;
        volatile unsigned TXB1D01             : 1;
        volatile unsigned TXB1D00             : 1;
    };
} C2RX1B1bits @ 0x436;
// bit variable definitions
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D00              @ ((unsigned)&C2RX1B1)*8+0;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D01              @ ((unsigned)&C2RX1B1)*8+1;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D02              @ ((unsigned)&C2RX1B1)*8+2;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D03              @ ((unsigned)&C2RX1B1)*8+3;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D04              @ ((unsigned)&C2RX1B1)*8+4;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D05              @ ((unsigned)&C2RX1B1)*8+5;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D06              @ ((unsigned)&C2RX1B1)*8+6;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D07              @ ((unsigned)&C2RX1B1)*8+7;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D10              @ ((unsigned)&C2RX1B1)*8+8;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D11              @ ((unsigned)&C2RX1B1)*8+9;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D12              @ ((unsigned)&C2RX1B1)*8+10;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D13              @ ((unsigned)&C2RX1B1)*8+11;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D14              @ ((unsigned)&C2RX1B1)*8+12;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D15              @ ((unsigned)&C2RX1B1)*8+13;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D16              @ ((unsigned)&C2RX1B1)*8+14;
// duplicate bit in register C1TX1B1, definition disabled
// static volatile bit TXB1D17              @ ((unsigned)&C2RX1B1)*8+15;

// Register: C2RX1B2
static volatile unsigned int            C2RX1B2             @ 0x438;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D3              : 8;
        volatile unsigned TXB1D2              : 8;
    };
    struct {
        volatile unsigned TXB1D37             : 1;
        volatile unsigned TXB1D36             : 1;
        volatile unsigned TXB1D35             : 1;
        volatile unsigned TXB1D34             : 1;
        volatile unsigned TXB1D33             : 1;
        volatile unsigned TXB1D32             : 1;
        volatile unsigned TXB1D31             : 1;
        volatile unsigned TXB1D30             : 1;
        volatile unsigned TXB1D27             : 1;
        volatile unsigned TXB1D26             : 1;
        volatile unsigned TXB1D25             : 1;
        volatile unsigned TXB1D24             : 1;
        volatile unsigned TXB1D23             : 1;
        volatile unsigned TXB1D22             : 1;
        volatile unsigned TXB1D21             : 1;
        volatile unsigned TXB1D20             : 1;
    };
} C2RX1B2bits @ 0x438;
// bit variable definitions
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D20              @ ((unsigned)&C2RX1B2)*8+0;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D21              @ ((unsigned)&C2RX1B2)*8+1;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D22              @ ((unsigned)&C2RX1B2)*8+2;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D23              @ ((unsigned)&C2RX1B2)*8+3;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D24              @ ((unsigned)&C2RX1B2)*8+4;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D25              @ ((unsigned)&C2RX1B2)*8+5;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D26              @ ((unsigned)&C2RX1B2)*8+6;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D27              @ ((unsigned)&C2RX1B2)*8+7;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D30              @ ((unsigned)&C2RX1B2)*8+8;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D31              @ ((unsigned)&C2RX1B2)*8+9;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D32              @ ((unsigned)&C2RX1B2)*8+10;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D33              @ ((unsigned)&C2RX1B2)*8+11;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D34              @ ((unsigned)&C2RX1B2)*8+12;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D35              @ ((unsigned)&C2RX1B2)*8+13;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D36              @ ((unsigned)&C2RX1B2)*8+14;
// duplicate bit in register C1TX1B2, definition disabled
// static volatile bit TXB1D37              @ ((unsigned)&C2RX1B2)*8+15;

// Register: C2RX1B3
static volatile unsigned int            C2RX1B3             @ 0x43A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D5              : 8;
        volatile unsigned TXB1D4              : 8;
    };
    struct {
        volatile unsigned TXB1D57             : 1;
        volatile unsigned TXB1D56             : 1;
        volatile unsigned TXB1D55             : 1;
        volatile unsigned TXB1D54             : 1;
        volatile unsigned TXB1D53             : 1;
        volatile unsigned TXB1D52             : 1;
        volatile unsigned TXB1D51             : 1;
        volatile unsigned TXB1D50             : 1;
        volatile unsigned TXB1D47             : 1;
        volatile unsigned TXB1D46             : 1;
        volatile unsigned TXB1D45             : 1;
        volatile unsigned TXB1D44             : 1;
        volatile unsigned TXB1D43             : 1;
        volatile unsigned TXB1D42             : 1;
        volatile unsigned TXB1D41             : 1;
        volatile unsigned TXB1D40             : 1;
    };
} C2RX1B3bits @ 0x43A;
// bit variable definitions
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D40              @ ((unsigned)&C2RX1B3)*8+0;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D41              @ ((unsigned)&C2RX1B3)*8+1;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D42              @ ((unsigned)&C2RX1B3)*8+2;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D43              @ ((unsigned)&C2RX1B3)*8+3;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D44              @ ((unsigned)&C2RX1B3)*8+4;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D45              @ ((unsigned)&C2RX1B3)*8+5;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D46              @ ((unsigned)&C2RX1B3)*8+6;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D47              @ ((unsigned)&C2RX1B3)*8+7;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D50              @ ((unsigned)&C2RX1B3)*8+8;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D51              @ ((unsigned)&C2RX1B3)*8+9;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D52              @ ((unsigned)&C2RX1B3)*8+10;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D53              @ ((unsigned)&C2RX1B3)*8+11;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D54              @ ((unsigned)&C2RX1B3)*8+12;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D55              @ ((unsigned)&C2RX1B3)*8+13;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D56              @ ((unsigned)&C2RX1B3)*8+14;
// duplicate bit in register C1TX1B3, definition disabled
// static volatile bit TXB1D57              @ ((unsigned)&C2RX1B3)*8+15;

// Register: C2RX1B4
static volatile unsigned int            C2RX1B4             @ 0x43C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB1D7              : 8;
        volatile unsigned TXB1D6              : 8;
    };
    struct {
        volatile unsigned TXB1D77             : 1;
        volatile unsigned TXB1D76             : 1;
        volatile unsigned TXB1D75             : 1;
        volatile unsigned TXB1D74             : 1;
        volatile unsigned TXB1D73             : 1;
        volatile unsigned TXB1D72             : 1;
        volatile unsigned TXB1D71             : 1;
        volatile unsigned TXB1D70             : 1;
        volatile unsigned TXB1D67             : 1;
        volatile unsigned TXB1D66             : 1;
        volatile unsigned TXB1D65             : 1;
        volatile unsigned TXB1D64             : 1;
        volatile unsigned TXB1D63             : 1;
        volatile unsigned TXB1D62             : 1;
        volatile unsigned TXB1D61             : 1;
        volatile unsigned TXB1D60             : 1;
    };
} C2RX1B4bits @ 0x43C;
// bit variable definitions
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D60              @ ((unsigned)&C2RX1B4)*8+0;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D61              @ ((unsigned)&C2RX1B4)*8+1;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D62              @ ((unsigned)&C2RX1B4)*8+2;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D63              @ ((unsigned)&C2RX1B4)*8+3;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D64              @ ((unsigned)&C2RX1B4)*8+4;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D65              @ ((unsigned)&C2RX1B4)*8+5;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D66              @ ((unsigned)&C2RX1B4)*8+6;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D67              @ ((unsigned)&C2RX1B4)*8+7;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D70              @ ((unsigned)&C2RX1B4)*8+8;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D71              @ ((unsigned)&C2RX1B4)*8+9;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D72              @ ((unsigned)&C2RX1B4)*8+10;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D73              @ ((unsigned)&C2RX1B4)*8+11;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D74              @ ((unsigned)&C2RX1B4)*8+12;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D75              @ ((unsigned)&C2RX1B4)*8+13;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D76              @ ((unsigned)&C2RX1B4)*8+14;
// duplicate bit in register C1TX1B4, definition disabled
// static volatile bit TXB1D77              @ ((unsigned)&C2RX1B4)*8+15;

// Register: C2RX1CON
static volatile unsigned int            C2RX1CON            @ 0x43E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned RXFUL               : 1;
        volatile unsigned                     : 3;
        volatile unsigned RXRTRRO             : 1;
        volatile unsigned FILHIT              : 3;
    };
    struct {
        volatile unsigned                     : 13;
        volatile unsigned FILHIT2             : 1;
        volatile unsigned FILHIT1             : 1;
        volatile unsigned FILHIT0             : 1;
    };
} C2RX1CONbits @ 0x43E;
// bit variable definitions
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit RXRTRRO              @ ((unsigned)&C2RX1CON)*8+3;
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit RXFUL                @ ((unsigned)&C2RX1CON)*8+7;
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit FILHIT0              @ ((unsigned)&C2RX1CON)*8+0;
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit FILHIT1              @ ((unsigned)&C2RX1CON)*8+1;
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit FILHIT2              @ ((unsigned)&C2RX1CON)*8+2;

// Register: C2RX0SID
static volatile unsigned int            C2RX0SID            @ 0x440;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 3;
        volatile unsigned SID10               : 1;
        volatile unsigned SID9                : 1;
        volatile unsigned SID8                : 1;
        volatile unsigned SID7                : 1;
        volatile unsigned SID6                : 1;
        volatile unsigned SID5                : 1;
        volatile unsigned SID4                : 1;
        volatile unsigned SID3                : 1;
        volatile unsigned SID2                : 1;
        volatile unsigned SID1                : 1;
        volatile unsigned SID0                : 1;
        volatile unsigned SRR                 : 1;
        volatile unsigned TXIDE               : 1;
    };
} C2RX0SIDbits @ 0x440;
// bit variable definitions
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit TXIDE                @ ((unsigned)&C2RX0SID)*8+0;
// duplicate bit in register C1TX2SID, definition disabled
// static volatile bit SRR                  @ ((unsigned)&C2RX0SID)*8+1;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID0                 @ ((unsigned)&C2RX0SID)*8+2;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID1                 @ ((unsigned)&C2RX0SID)*8+3;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID2                 @ ((unsigned)&C2RX0SID)*8+4;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID3                 @ ((unsigned)&C2RX0SID)*8+5;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID4                 @ ((unsigned)&C2RX0SID)*8+6;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID5                 @ ((unsigned)&C2RX0SID)*8+7;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID6                 @ ((unsigned)&C2RX0SID)*8+8;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID7                 @ ((unsigned)&C2RX0SID)*8+9;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID8                 @ ((unsigned)&C2RX0SID)*8+10;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID9                 @ ((unsigned)&C2RX0SID)*8+11;
// duplicate bit in register C1RXF0SID, definition disabled
// static volatile bit SID10                @ ((unsigned)&C2RX0SID)*8+12;

// Register: C2RX0EID
static volatile unsigned int            C2RX0EID            @ 0x442;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 4;
        volatile unsigned EID17               : 1;
        volatile unsigned EID16               : 1;
        volatile unsigned EID15               : 1;
        volatile unsigned EID14               : 1;
        volatile unsigned EID13               : 1;
        volatile unsigned EID12               : 1;
        volatile unsigned EID11               : 1;
        volatile unsigned EID10               : 1;
        volatile unsigned EID9                : 1;
        volatile unsigned EID8                : 1;
        volatile unsigned EID7                : 1;
        volatile unsigned EID6                : 1;
    };
} C2RX0EIDbits @ 0x442;
// bit variable definitions
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID6                 @ ((unsigned)&C2RX0EID)*8+0;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID7                 @ ((unsigned)&C2RX0EID)*8+1;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID8                 @ ((unsigned)&C2RX0EID)*8+2;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID9                 @ ((unsigned)&C2RX0EID)*8+3;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID10                @ ((unsigned)&C2RX0EID)*8+4;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID11                @ ((unsigned)&C2RX0EID)*8+5;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID12                @ ((unsigned)&C2RX0EID)*8+6;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID13                @ ((unsigned)&C2RX0EID)*8+7;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID14                @ ((unsigned)&C2RX0EID)*8+8;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID15                @ ((unsigned)&C2RX0EID)*8+9;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID16                @ ((unsigned)&C2RX0EID)*8+10;
// duplicate bit in register C1RXF0EIDH, definition disabled
// static volatile bit EID17                @ ((unsigned)&C2RX0EID)*8+11;

// Register: C2RX0DLC
static volatile unsigned int            C2RX0DLC            @ 0x444;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned EID5                : 1;
        volatile unsigned EID4                : 1;
        volatile unsigned EID3                : 1;
        volatile unsigned EID2                : 1;
        volatile unsigned EID1                : 1;
        volatile unsigned EID0                : 1;
        volatile unsigned RXRTR               : 1;
        volatile unsigned RXRB1               : 1;
        volatile unsigned                     : 3;
        volatile unsigned RXRB0               : 1;
        volatile unsigned DLC                 : 4;
    };
    struct {
        volatile unsigned                     : 12;
        volatile unsigned DLC3                : 1;
        volatile unsigned DLC2                : 1;
        volatile unsigned DLC1                : 1;
        volatile unsigned DLC0                : 1;
    };
} C2RX0DLCbits @ 0x444;
// bit variable definitions
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRB0                @ ((unsigned)&C2RX0DLC)*8+4;
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRB1                @ ((unsigned)&C2RX0DLC)*8+8;
// duplicate bit in register C1RX1DLC, definition disabled
// static volatile bit RXRTR                @ ((unsigned)&C2RX0DLC)*8+9;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID0                 @ ((unsigned)&C2RX0DLC)*8+10;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID1                 @ ((unsigned)&C2RX0DLC)*8+11;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID2                 @ ((unsigned)&C2RX0DLC)*8+12;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID3                 @ ((unsigned)&C2RX0DLC)*8+13;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID4                 @ ((unsigned)&C2RX0DLC)*8+14;
// duplicate bit in register C1RXF0EIDL, definition disabled
// static volatile bit EID5                 @ ((unsigned)&C2RX0DLC)*8+15;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC0                 @ ((unsigned)&C2RX0DLC)*8+0;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC1                 @ ((unsigned)&C2RX0DLC)*8+1;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC2                 @ ((unsigned)&C2RX0DLC)*8+2;
// duplicate bit in register C1TX2DLC, definition disabled
// static volatile bit DLC3                 @ ((unsigned)&C2RX0DLC)*8+3;

// Register: C2RX0B1
static volatile unsigned int            C2RX0B1             @ 0x446;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D1              : 8;
        volatile unsigned TXB0D0              : 8;
    };
    struct {
        volatile unsigned TXB0D17             : 1;
        volatile unsigned TXB0D16             : 1;
        volatile unsigned TXB0D15             : 1;
        volatile unsigned TXB0D14             : 1;
        volatile unsigned TXB0D13             : 1;
        volatile unsigned TXB0D12             : 1;
        volatile unsigned TXB0D11             : 1;
        volatile unsigned TXB0D10             : 1;
        volatile unsigned TXB0D07             : 1;
        volatile unsigned TXB0D06             : 1;
        volatile unsigned TXB0D05             : 1;
        volatile unsigned TXB0D04             : 1;
        volatile unsigned TXB0D03             : 1;
        volatile unsigned TXB0D02             : 1;
        volatile unsigned TXB0D01             : 1;
        volatile unsigned TXB0D00             : 1;
    };
} C2RX0B1bits @ 0x446;
// bit variable definitions
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D00              @ ((unsigned)&C2RX0B1)*8+0;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D01              @ ((unsigned)&C2RX0B1)*8+1;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D02              @ ((unsigned)&C2RX0B1)*8+2;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D03              @ ((unsigned)&C2RX0B1)*8+3;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D04              @ ((unsigned)&C2RX0B1)*8+4;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D05              @ ((unsigned)&C2RX0B1)*8+5;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D06              @ ((unsigned)&C2RX0B1)*8+6;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D07              @ ((unsigned)&C2RX0B1)*8+7;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D10              @ ((unsigned)&C2RX0B1)*8+8;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D11              @ ((unsigned)&C2RX0B1)*8+9;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D12              @ ((unsigned)&C2RX0B1)*8+10;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D13              @ ((unsigned)&C2RX0B1)*8+11;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D14              @ ((unsigned)&C2RX0B1)*8+12;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D15              @ ((unsigned)&C2RX0B1)*8+13;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D16              @ ((unsigned)&C2RX0B1)*8+14;
// duplicate bit in register C1TX0B1, definition disabled
// static volatile bit TXB0D17              @ ((unsigned)&C2RX0B1)*8+15;

// Register: C2RX0B2
static volatile unsigned int            C2RX0B2             @ 0x448;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D3              : 8;
        volatile unsigned TXB0D2              : 8;
    };
    struct {
        volatile unsigned TXB0D37             : 1;
        volatile unsigned TXB0D36             : 1;
        volatile unsigned TXB0D35             : 1;
        volatile unsigned TXB0D34             : 1;
        volatile unsigned TXB0D33             : 1;
        volatile unsigned TXB0D32             : 1;
        volatile unsigned TXB0D31             : 1;
        volatile unsigned TXB0D30             : 1;
        volatile unsigned TXB0D27             : 1;
        volatile unsigned TXB0D26             : 1;
        volatile unsigned TXB0D25             : 1;
        volatile unsigned TXB0D24             : 1;
        volatile unsigned TXB0D23             : 1;
        volatile unsigned TXB0D22             : 1;
        volatile unsigned TXB0D21             : 1;
        volatile unsigned TXB0D20             : 1;
    };
} C2RX0B2bits @ 0x448;
// bit variable definitions
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D20              @ ((unsigned)&C2RX0B2)*8+0;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D21              @ ((unsigned)&C2RX0B2)*8+1;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D22              @ ((unsigned)&C2RX0B2)*8+2;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D23              @ ((unsigned)&C2RX0B2)*8+3;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D24              @ ((unsigned)&C2RX0B2)*8+4;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D25              @ ((unsigned)&C2RX0B2)*8+5;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D26              @ ((unsigned)&C2RX0B2)*8+6;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D27              @ ((unsigned)&C2RX0B2)*8+7;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D30              @ ((unsigned)&C2RX0B2)*8+8;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D31              @ ((unsigned)&C2RX0B2)*8+9;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D32              @ ((unsigned)&C2RX0B2)*8+10;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D33              @ ((unsigned)&C2RX0B2)*8+11;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D34              @ ((unsigned)&C2RX0B2)*8+12;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D35              @ ((unsigned)&C2RX0B2)*8+13;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D36              @ ((unsigned)&C2RX0B2)*8+14;
// duplicate bit in register C1TX0B2, definition disabled
// static volatile bit TXB0D37              @ ((unsigned)&C2RX0B2)*8+15;

// Register: C2RX0B3
static volatile unsigned int            C2RX0B3             @ 0x44A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D5              : 8;
        volatile unsigned TXB0D4              : 8;
    };
    struct {
        volatile unsigned TXB0D57             : 1;
        volatile unsigned TXB0D56             : 1;
        volatile unsigned TXB0D55             : 1;
        volatile unsigned TXB0D54             : 1;
        volatile unsigned TXB0D53             : 1;
        volatile unsigned TXB0D52             : 1;
        volatile unsigned TXB0D51             : 1;
        volatile unsigned TXB0D50             : 1;
        volatile unsigned TXB0D47             : 1;
        volatile unsigned TXB0D46             : 1;
        volatile unsigned TXB0D45             : 1;
        volatile unsigned TXB0D44             : 1;
        volatile unsigned TXB0D43             : 1;
        volatile unsigned TXB0D42             : 1;
        volatile unsigned TXB0D41             : 1;
        volatile unsigned TXB0D40             : 1;
    };
} C2RX0B3bits @ 0x44A;
// bit variable definitions
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D40              @ ((unsigned)&C2RX0B3)*8+0;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D41              @ ((unsigned)&C2RX0B3)*8+1;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D42              @ ((unsigned)&C2RX0B3)*8+2;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D43              @ ((unsigned)&C2RX0B3)*8+3;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D44              @ ((unsigned)&C2RX0B3)*8+4;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D45              @ ((unsigned)&C2RX0B3)*8+5;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D46              @ ((unsigned)&C2RX0B3)*8+6;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D47              @ ((unsigned)&C2RX0B3)*8+7;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D50              @ ((unsigned)&C2RX0B3)*8+8;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D51              @ ((unsigned)&C2RX0B3)*8+9;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D52              @ ((unsigned)&C2RX0B3)*8+10;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D53              @ ((unsigned)&C2RX0B3)*8+11;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D54              @ ((unsigned)&C2RX0B3)*8+12;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D55              @ ((unsigned)&C2RX0B3)*8+13;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D56              @ ((unsigned)&C2RX0B3)*8+14;
// duplicate bit in register C1TX0B3, definition disabled
// static volatile bit TXB0D57              @ ((unsigned)&C2RX0B3)*8+15;

// Register: C2RX0B4
static volatile unsigned int            C2RX0B4             @ 0x44C;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TXB0D7              : 8;
        volatile unsigned TXB0D6              : 8;
    };
    struct {
        volatile unsigned TXB0D77             : 1;
        volatile unsigned TXB0D76             : 1;
        volatile unsigned TXB0D75             : 1;
        volatile unsigned TXB0D74             : 1;
        volatile unsigned TXB0D73             : 1;
        volatile unsigned TXB0D72             : 1;
        volatile unsigned TXB0D71             : 1;
        volatile unsigned TXB0D70             : 1;
        volatile unsigned TXB0D67             : 1;
        volatile unsigned TXB0D66             : 1;
        volatile unsigned TXB0D65             : 1;
        volatile unsigned TXB0D64             : 1;
        volatile unsigned TXB0D63             : 1;
        volatile unsigned TXB0D62             : 1;
        volatile unsigned TXB0D61             : 1;
        volatile unsigned TXB0D60             : 1;
    };
} C2RX0B4bits @ 0x44C;
// bit variable definitions
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D60              @ ((unsigned)&C2RX0B4)*8+0;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D61              @ ((unsigned)&C2RX0B4)*8+1;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D62              @ ((unsigned)&C2RX0B4)*8+2;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D63              @ ((unsigned)&C2RX0B4)*8+3;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D64              @ ((unsigned)&C2RX0B4)*8+4;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D65              @ ((unsigned)&C2RX0B4)*8+5;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D66              @ ((unsigned)&C2RX0B4)*8+6;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D67              @ ((unsigned)&C2RX0B4)*8+7;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D70              @ ((unsigned)&C2RX0B4)*8+8;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D71              @ ((unsigned)&C2RX0B4)*8+9;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D72              @ ((unsigned)&C2RX0B4)*8+10;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D73              @ ((unsigned)&C2RX0B4)*8+11;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D74              @ ((unsigned)&C2RX0B4)*8+12;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D75              @ ((unsigned)&C2RX0B4)*8+13;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D76              @ ((unsigned)&C2RX0B4)*8+14;
// duplicate bit in register C1TX0B4, definition disabled
// static volatile bit TXB0D77              @ ((unsigned)&C2RX0B4)*8+15;

// Register: C2RX0CON
static volatile unsigned int            C2RX0CON            @ 0x44E;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned RXFUL               : 1;
        volatile unsigned                     : 3;
        volatile unsigned RXRTRRO             : 1;
        volatile unsigned RXB0DBEN            : 1;
        volatile unsigned JTOFF               : 1;
        volatile unsigned FILHIT              : 1;
    };
} C2RX0CONbits @ 0x44E;
// bit variable definitions
// duplicate bit in register C1RX0CON, definition disabled
// static volatile bit FILHIT               @ ((unsigned)&C2RX0CON)*8+0;
// duplicate bit in register C1RX0CON, definition disabled
// static volatile bit JTOFF                @ ((unsigned)&C2RX0CON)*8+1;
// duplicate bit in register C1RX0CON, definition disabled
// static volatile bit RXB0DBEN             @ ((unsigned)&C2RX0CON)*8+2;
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit RXRTRRO              @ ((unsigned)&C2RX0CON)*8+3;
// duplicate bit in register C1RX1CON, definition disabled
// static volatile bit RXFUL                @ ((unsigned)&C2RX0CON)*8+7;

// Register: C2CTRL
static volatile unsigned int            C2CTRL              @ 0x450;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned CANCAP              : 1;
        volatile unsigned CANFRZ              : 1;
        volatile unsigned CANSIDL             : 1;
        volatile unsigned ABAT                : 1;
        volatile unsigned CANCKS              : 1;
        volatile unsigned REQOP               : 3;
        volatile unsigned OPMODE              : 3;
        volatile unsigned                     : 1;
        volatile unsigned ICOD                : 3;
        volatile unsigned                     : 1;
    };
    struct {
        volatile unsigned                     : 5;
        volatile unsigned REQOP2              : 1;
        volatile unsigned REQOP1              : 1;
        volatile unsigned REQOP0              : 1;
        volatile unsigned OPMODE2             : 1;
        volatile unsigned OPMODE1             : 1;
        volatile unsigned OPMODE0             : 1;
        volatile unsigned                     : 1;
        volatile unsigned ICOD2               : 1;
        volatile unsigned ICOD1               : 1;
        volatile unsigned ICOD0               : 1;
        volatile unsigned                     : 1;
    };
} C2CTRLbits @ 0x450;
// bit variable definitions
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit CANCKS               @ ((unsigned)&C2CTRL)*8+11;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit ABAT                 @ ((unsigned)&C2CTRL)*8+12;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit CANSIDL              @ ((unsigned)&C2CTRL)*8+13;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit CANFRZ               @ ((unsigned)&C2CTRL)*8+14;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit CANCAP               @ ((unsigned)&C2CTRL)*8+15;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit ICOD0                @ ((unsigned)&C2CTRL)*8+1;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit ICOD1                @ ((unsigned)&C2CTRL)*8+2;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit ICOD2                @ ((unsigned)&C2CTRL)*8+3;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit OPMODE0              @ ((unsigned)&C2CTRL)*8+5;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit OPMODE1              @ ((unsigned)&C2CTRL)*8+6;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit OPMODE2              @ ((unsigned)&C2CTRL)*8+7;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit REQOP0               @ ((unsigned)&C2CTRL)*8+8;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit REQOP1               @ ((unsigned)&C2CTRL)*8+9;
// duplicate bit in register C1CTRL, definition disabled
// static volatile bit REQOP2               @ ((unsigned)&C2CTRL)*8+10;

// Register: C2CFG1
static volatile unsigned int            C2CFG1              @ 0x452;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned SJW                 : 2;
        volatile unsigned BRP                 : 6;
    };
    struct {
        volatile unsigned                     : 8;
        volatile unsigned SJW1                : 1;
        volatile unsigned SJW0                : 1;
        volatile unsigned BRP5                : 1;
        volatile unsigned BRP4                : 1;
        volatile unsigned BRP3                : 1;
        volatile unsigned BRP2                : 1;
        volatile unsigned BRP1                : 1;
        volatile unsigned BRP0                : 1;
    };
} C2CFG1bits @ 0x452;
// bit variable definitions
// duplicate bit in register C1CFG1, definition disabled
// static volatile bit BRP0                 @ ((unsigned)&C2CFG1)*8+0;
// duplicate bit in register C1CFG1, definition disabled
// static volatile bit BRP1                 @ ((unsigned)&C2CFG1)*8+1;
// duplicate bit in register C1CFG1, definition disabled
// static volatile bit BRP2                 @ ((unsigned)&C2CFG1)*8+2;
// duplicate bit in register C1CFG1, definition disabled
// static volatile bit BRP3                 @ ((unsigned)&C2CFG1)*8+3;
// duplicate bit in register C1CFG1, definition disabled
// static volatile bit BRP4                 @ ((unsigned)&C2CFG1)*8+4;
// duplicate bit in register C1CFG1, definition disabled
// static volatile bit BRP5                 @ ((unsigned)&C2CFG1)*8+5;
// duplicate bit in register C1CFG1, definition disabled
// static volatile bit SJW0                 @ ((unsigned)&C2CFG1)*8+6;
// duplicate bit in register C1CFG1, definition disabled
// static volatile bit SJW1                 @ ((unsigned)&C2CFG1)*8+7;

// Register: C2CFG2
static volatile unsigned int            C2CFG2              @ 0x454;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned WAKFIL              : 1;
        volatile unsigned                     : 3;
        volatile unsigned SEG2PH              : 3;
        volatile unsigned SEG2PHTS            : 1;
        volatile unsigned SAM                 : 1;
        volatile unsigned SEG1PH              : 3;
        volatile unsigned PRSEG               : 3;
    };
    struct {
        volatile unsigned                     : 5;
        volatile unsigned SEG2PH2             : 1;
        volatile unsigned SEG2PH1             : 1;
        volatile unsigned SEG2PH0             : 1;
        volatile unsigned                     : 2;
        volatile unsigned SEG1PH2             : 1;
        volatile unsigned SEG1PH1             : 1;
        volatile unsigned SEG1PH0             : 1;
        volatile unsigned PRSEG2              : 1;
        volatile unsigned PRSEG1              : 1;
        volatile unsigned PRSEG0              : 1;
    };
} C2CFG2bits @ 0x454;
// bit variable definitions
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit SAM                  @ ((unsigned)&C2CFG2)*8+6;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit SEG2PHTS             @ ((unsigned)&C2CFG2)*8+7;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit WAKFIL               @ ((unsigned)&C2CFG2)*8+14;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit PRSEG0               @ ((unsigned)&C2CFG2)*8+0;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit PRSEG1               @ ((unsigned)&C2CFG2)*8+1;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit PRSEG2               @ ((unsigned)&C2CFG2)*8+2;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit SEG1PH0              @ ((unsigned)&C2CFG2)*8+3;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit SEG1PH1              @ ((unsigned)&C2CFG2)*8+4;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit SEG1PH2              @ ((unsigned)&C2CFG2)*8+5;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit SEG2PH0              @ ((unsigned)&C2CFG2)*8+8;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit SEG2PH1              @ ((unsigned)&C2CFG2)*8+9;
// duplicate bit in register C1CFG2, definition disabled
// static volatile bit SEG2PH2              @ ((unsigned)&C2CFG2)*8+10;

// Register: C2INTF
static volatile unsigned int            C2INTF              @ 0x456;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned RXB0OVFL            : 1;
        volatile unsigned RXB1OVFL            : 1;
        volatile unsigned TXBO                : 1;
        volatile unsigned TXBP                : 1;
        volatile unsigned RXBP                : 1;
        volatile unsigned TXWARN              : 1;
        volatile unsigned RXWARN              : 1;
        volatile unsigned EWARN               : 1;
        volatile unsigned IRXIF               : 1;
        volatile unsigned WAKIF               : 1;
        volatile unsigned ERRIF               : 1;
        volatile unsigned TXB2IF              : 1;
        volatile unsigned TXB1IF              : 1;
        volatile unsigned TXB0IF              : 1;
        volatile unsigned RXB1IF              : 1;
        volatile unsigned RXB0IF              : 1;
    };
} C2INTFbits @ 0x456;
// bit variable definitions
// duplicate bit in register C1INTF, definition disabled
// static volatile bit RXB0IF               @ ((unsigned)&C2INTF)*8+0;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit RXB1IF               @ ((unsigned)&C2INTF)*8+1;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit TXB0IF               @ ((unsigned)&C2INTF)*8+2;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit TXB1IF               @ ((unsigned)&C2INTF)*8+3;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit TXB2IF               @ ((unsigned)&C2INTF)*8+4;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit ERRIF                @ ((unsigned)&C2INTF)*8+5;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit WAKIF                @ ((unsigned)&C2INTF)*8+6;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit IRXIF                @ ((unsigned)&C2INTF)*8+7;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit EWARN                @ ((unsigned)&C2INTF)*8+8;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit RXWARN               @ ((unsigned)&C2INTF)*8+9;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit TXWARN               @ ((unsigned)&C2INTF)*8+10;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit RXBP                 @ ((unsigned)&C2INTF)*8+11;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit TXBP                 @ ((unsigned)&C2INTF)*8+12;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit TXBO                 @ ((unsigned)&C2INTF)*8+13;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit RXB1OVFL             @ ((unsigned)&C2INTF)*8+14;
// duplicate bit in register C1INTF, definition disabled
// static volatile bit RXB0OVFL             @ ((unsigned)&C2INTF)*8+15;

// Register: C2INTE
static volatile unsigned int            C2INTE              @ 0x458;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned IRXIE               : 1;
        volatile unsigned WAKIE               : 1;
        volatile unsigned ERRIE               : 1;
        volatile unsigned TXB2IE              : 1;
        volatile unsigned TXB1IE              : 1;
        volatile unsigned TXB0IE              : 1;
        volatile unsigned RXB1IE              : 1;
        volatile unsigned RXB0IE              : 1;
    };
} C2INTEbits @ 0x458;
// bit variable definitions
// duplicate bit in register C1INTE, definition disabled
// static volatile bit RXB0IE               @ ((unsigned)&C2INTE)*8+0;
// duplicate bit in register C1INTE, definition disabled
// static volatile bit RXB1IE               @ ((unsigned)&C2INTE)*8+1;
// duplicate bit in register C1INTE, definition disabled
// static volatile bit TXB0IE               @ ((unsigned)&C2INTE)*8+2;
// duplicate bit in register C1INTE, definition disabled
// static volatile bit TXB1IE               @ ((unsigned)&C2INTE)*8+3;
// duplicate bit in register C1INTE, definition disabled
// static volatile bit TXB2IE               @ ((unsigned)&C2INTE)*8+4;
// duplicate bit in register C1INTE, definition disabled
// static volatile bit ERRIE                @ ((unsigned)&C2INTE)*8+5;
// duplicate bit in register C1INTE, definition disabled
// static volatile bit WAKIE                @ ((unsigned)&C2INTE)*8+6;
// duplicate bit in register C1INTE, definition disabled
// static volatile bit IRXIE                @ ((unsigned)&C2INTE)*8+7;

// Register: C2EC
static volatile unsigned int            C2EC                @ 0x45A;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TEC                 : 8;
        volatile unsigned REC                 : 8;
    };
    struct {
        volatile unsigned TEC7                : 1;
        volatile unsigned TEC6                : 1;
        volatile unsigned TEC5                : 1;
        volatile unsigned TEC4                : 1;
        volatile unsigned TEC3                : 1;
        volatile unsigned TEC2                : 1;
        volatile unsigned TEC1                : 1;
        volatile unsigned TEC0                : 1;
        volatile unsigned REC7                : 1;
        volatile unsigned REC6                : 1;
        volatile unsigned REC5                : 1;
        volatile unsigned REC4                : 1;
        volatile unsigned REC3                : 1;
        volatile unsigned REC2                : 1;
        volatile unsigned REC1                : 1;
        volatile unsigned REC0                : 1;
    };
} C2ECbits @ 0x45A;
// bit variable definitions
// duplicate bit in register C1EC, definition disabled
// static volatile bit REC0                 @ ((unsigned)&C2EC)*8+0;
// duplicate bit in register C1EC, definition disabled
// static volatile bit REC1                 @ ((unsigned)&C2EC)*8+1;
// duplicate bit in register C1EC, definition disabled
// static volatile bit REC2                 @ ((unsigned)&C2EC)*8+2;
// duplicate bit in register C1EC, definition disabled
// static volatile bit REC3                 @ ((unsigned)&C2EC)*8+3;
// duplicate bit in register C1EC, definition disabled
// static volatile bit REC4                 @ ((unsigned)&C2EC)*8+4;
// duplicate bit in register C1EC, definition disabled
// static volatile bit REC5                 @ ((unsigned)&C2EC)*8+5;
// duplicate bit in register C1EC, definition disabled
// static volatile bit REC6                 @ ((unsigned)&C2EC)*8+6;
// duplicate bit in register C1EC, definition disabled
// static volatile bit REC7                 @ ((unsigned)&C2EC)*8+7;
// duplicate bit in register C1EC, definition disabled
// static volatile bit TEC0                 @ ((unsigned)&C2EC)*8+8;
// duplicate bit in register C1EC, definition disabled
// static volatile bit TEC1                 @ ((unsigned)&C2EC)*8+9;
// duplicate bit in register C1EC, definition disabled
// static volatile bit TEC2                 @ ((unsigned)&C2EC)*8+10;
// duplicate bit in register C1EC, definition disabled
// static volatile bit TEC3                 @ ((unsigned)&C2EC)*8+11;
// duplicate bit in register C1EC, definition disabled
// static volatile bit TEC4                 @ ((unsigned)&C2EC)*8+12;
// duplicate bit in register C1EC, definition disabled
// static volatile bit TEC5                 @ ((unsigned)&C2EC)*8+13;
// duplicate bit in register C1EC, definition disabled
// static volatile bit TEC6                 @ ((unsigned)&C2EC)*8+14;
// duplicate bit in register C1EC, definition disabled
// static volatile bit TEC7                 @ ((unsigned)&C2EC)*8+15;

// Register: RCON
static volatile unsigned int            RCON                @ 0x740;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned TRAPR               : 1;
        volatile unsigned IOPUWR              : 1;
        volatile unsigned BGST                : 1;
        volatile unsigned                     : 5;
        volatile unsigned EXTR                : 1;
        volatile unsigned SWR                 : 1;
        volatile unsigned SWDTEN              : 1;
        volatile unsigned WDTO                : 1;
        volatile unsigned SLEEP               : 1;
        volatile unsigned IDLE                : 1;
        volatile unsigned BOR                 : 1;
        volatile unsigned POR                 : 1;
    };
} RCONbits @ 0x740;
// bit variable definitions
static volatile bit POR                  @ ((unsigned)&RCON)*8+0;
static volatile bit BOR                  @ ((unsigned)&RCON)*8+1;
static volatile bit IDLE                 @ ((unsigned)&RCON)*8+2;
static volatile bit SLEEP                @ ((unsigned)&RCON)*8+3;
static volatile bit WDTO                 @ ((unsigned)&RCON)*8+4;
static volatile bit SWDTEN               @ ((unsigned)&RCON)*8+5;
static volatile bit SWR                  @ ((unsigned)&RCON)*8+6;
static volatile bit EXTR                 @ ((unsigned)&RCON)*8+7;
static volatile bit BGST                 @ ((unsigned)&RCON)*8+13;
static volatile bit IOPUWR               @ ((unsigned)&RCON)*8+14;
static volatile bit TRAPR                @ ((unsigned)&RCON)*8+15;

// Register: OSCCON
static volatile unsigned int            OSCCON              @ 0x742;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 1;
        volatile unsigned COSC                : 3;
        volatile unsigned                     : 1;
        volatile unsigned NOSC                : 3;
        volatile unsigned POST                : 2;
        volatile unsigned LOCK                : 1;
        volatile unsigned                     : 1;
        volatile unsigned CF                  : 1;
        volatile unsigned                     : 1;
        volatile unsigned LPOSCEN             : 1;
        volatile unsigned OSWEN               : 1;
    };
    struct {
        volatile unsigned                     : 1;
        volatile unsigned COSC2               : 1;
        volatile unsigned COSC1               : 1;
        volatile unsigned COSC0               : 1;
        volatile unsigned                     : 1;
        volatile unsigned NOSC2               : 1;
        volatile unsigned NOSC1               : 1;
        volatile unsigned NOSC0               : 1;
        volatile unsigned POST1               : 1;
        volatile unsigned POST0               : 1;
        volatile unsigned                     : 6;
    };
} OSCCONbits @ 0x742;
// bit variable definitions
static volatile bit OSWEN                @ ((unsigned)&OSCCON)*8+0;
static volatile bit LPOSCEN              @ ((unsigned)&OSCCON)*8+1;
static volatile bit CF                   @ ((unsigned)&OSCCON)*8+3;
static volatile bit LOCK                 @ ((unsigned)&OSCCON)*8+5;
static volatile bit POST0                @ ((unsigned)&OSCCON)*8+6;
static volatile bit POST1                @ ((unsigned)&OSCCON)*8+7;
static volatile bit NOSC0                @ ((unsigned)&OSCCON)*8+8;
static volatile bit NOSC1                @ ((unsigned)&OSCCON)*8+9;
static volatile bit NOSC2                @ ((unsigned)&OSCCON)*8+10;
static volatile bit COSC0                @ ((unsigned)&OSCCON)*8+12;
static volatile bit COSC1                @ ((unsigned)&OSCCON)*8+13;
static volatile bit COSC2                @ ((unsigned)&OSCCON)*8+14;

// Register: OSCTUN
static volatile unsigned int            OSCTUN              @ 0x744;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 10;
        volatile unsigned TUN                 : 6;
    };
    struct {
        volatile unsigned                     : 10;
        volatile unsigned TUN5                : 1;
        volatile unsigned TUN4                : 1;
        volatile unsigned TUN3                : 1;
        volatile unsigned TUN2                : 1;
        volatile unsigned TUN1                : 1;
        volatile unsigned TUN0                : 1;
    };
} OSCTUNbits @ 0x744;
// bit variable definitions
static volatile bit TUN0                 @ ((unsigned)&OSCTUN)*8+0;
static volatile bit TUN1                 @ ((unsigned)&OSCTUN)*8+1;
static volatile bit TUN2                 @ ((unsigned)&OSCTUN)*8+2;
static volatile bit TUN3                 @ ((unsigned)&OSCTUN)*8+3;
static volatile bit TUN4                 @ ((unsigned)&OSCTUN)*8+4;
static volatile bit TUN5                 @ ((unsigned)&OSCTUN)*8+5;

// Register: BSRAM
static volatile unsigned int            BSRAM               @ 0x750;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 13;
        volatile unsigned IW_BSR              : 1;
        volatile unsigned IR_BSR              : 1;
        volatile unsigned RL_BSR              : 1;
    };
} BSRAMbits @ 0x750;
// bit variable definitions
static volatile bit RL_BSR               @ ((unsigned)&BSRAM)*8+0;
static volatile bit IR_BSR               @ ((unsigned)&BSRAM)*8+1;
static volatile bit IW_BSR               @ ((unsigned)&BSRAM)*8+2;

// Register: SSRAM
static volatile unsigned int            SSRAM               @ 0x752;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 13;
        volatile unsigned IW_SSR              : 1;
        volatile unsigned IR_SSR              : 1;
        volatile unsigned RL_SSR              : 1;
    };
} SSRAMbits @ 0x752;
// bit variable definitions
static volatile bit RL_SSR               @ ((unsigned)&SSRAM)*8+0;
static volatile bit IR_SSR               @ ((unsigned)&SSRAM)*8+1;
static volatile bit IW_SSR               @ ((unsigned)&SSRAM)*8+2;

// Register: NVMCON
static volatile unsigned int            NVMCON              @ 0x760;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned WR                  : 1;
        volatile unsigned WREN                : 1;
        volatile unsigned WRERR               : 1;
        volatile unsigned                     : 4;
        volatile unsigned TWRI                : 1;
        volatile unsigned                     : 1;
        volatile unsigned PROGOP              : 7;
    };
    struct {
        volatile unsigned                     : 9;
        volatile unsigned PROGOP6             : 1;
        volatile unsigned PROGOP5             : 1;
        volatile unsigned PROGOP4             : 1;
        volatile unsigned PROGOP3             : 1;
        volatile unsigned PROGOP2             : 1;
        volatile unsigned PROGOP1             : 1;
        volatile unsigned PROGOP0             : 1;
    };
} NVMCONbits @ 0x760;
// bit variable definitions
static volatile bit TWRI                 @ ((unsigned)&NVMCON)*8+8;
static volatile bit WRERR                @ ((unsigned)&NVMCON)*8+13;
static volatile bit WREN                 @ ((unsigned)&NVMCON)*8+14;
static volatile bit WR                   @ ((unsigned)&NVMCON)*8+15;
static volatile bit PROGOP0              @ ((unsigned)&NVMCON)*8+0;
static volatile bit PROGOP1              @ ((unsigned)&NVMCON)*8+1;
static volatile bit PROGOP2              @ ((unsigned)&NVMCON)*8+2;
static volatile bit PROGOP3              @ ((unsigned)&NVMCON)*8+3;
static volatile bit PROGOP4              @ ((unsigned)&NVMCON)*8+4;
static volatile bit PROGOP5              @ ((unsigned)&NVMCON)*8+5;
static volatile bit PROGOP6              @ ((unsigned)&NVMCON)*8+6;

// Register: NVMADR
static volatile unsigned int            NVMADR              @ 0x762;

// Register: NVMADRU
static volatile unsigned int            NVMADRU             @ 0x764;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned NVMADR              : 8;
    };
} NVMADRUbits @ 0x764;

// Register: NVMKEY
static volatile unsigned int            NVMKEY              @ 0x766;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned                     : 8;
        volatile unsigned KEY                 : 8;
    };
} NVMKEYbits @ 0x766;

// Register: PMD1
static volatile unsigned int            PMD1                @ 0x770;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned T5MD                : 1;
        volatile unsigned T4MD                : 1;
        volatile unsigned T3MD                : 1;
        volatile unsigned T2MD                : 1;
        volatile unsigned T1MD                : 1;
        volatile unsigned QEIMD               : 1;
        volatile unsigned PWMMD               : 1;
        volatile unsigned                     : 1;
        volatile unsigned I2CMD               : 1;
        volatile unsigned U2MD                : 1;
        volatile unsigned U1MD                : 1;
        volatile unsigned SPI2MD              : 1;
        volatile unsigned SPI1MD              : 1;
        volatile unsigned C2MD                : 1;
        volatile unsigned C1MD                : 1;
        volatile unsigned ADCMD               : 1;
    };
} PMD1bits @ 0x770;
// bit variable definitions
static volatile bit ADCMD                @ ((unsigned)&PMD1)*8+0;
static volatile bit C1MD                 @ ((unsigned)&PMD1)*8+1;
static volatile bit C2MD                 @ ((unsigned)&PMD1)*8+2;
static volatile bit SPI1MD               @ ((unsigned)&PMD1)*8+3;
static volatile bit SPI2MD               @ ((unsigned)&PMD1)*8+4;
static volatile bit U1MD                 @ ((unsigned)&PMD1)*8+5;
static volatile bit U2MD                 @ ((unsigned)&PMD1)*8+6;
static volatile bit I2CMD                @ ((unsigned)&PMD1)*8+7;
static volatile bit PWMMD                @ ((unsigned)&PMD1)*8+9;
static volatile bit QEIMD                @ ((unsigned)&PMD1)*8+10;
static volatile bit T1MD                 @ ((unsigned)&PMD1)*8+11;
static volatile bit T2MD                 @ ((unsigned)&PMD1)*8+12;
static volatile bit T3MD                 @ ((unsigned)&PMD1)*8+13;
static volatile bit T4MD                 @ ((unsigned)&PMD1)*8+14;
static volatile bit T5MD                 @ ((unsigned)&PMD1)*8+15;

// Register: PMD2
static volatile unsigned int            PMD2                @ 0x772;
// bitfield definitions
static volatile union {
    struct {
        volatile unsigned IC8MD               : 1;
        volatile unsigned IC7MD               : 1;
        volatile unsigned IC6MD               : 1;
        volatile unsigned IC5MD               : 1;
        volatile unsigned IC4MD               : 1;
        volatile unsigned IC3MD               : 1;
        volatile unsigned IC2MD               : 1;
        volatile unsigned IC1MD               : 1;
        volatile unsigned OC8MD               : 1;
        volatile unsigned OC7MD               : 1;
        volatile unsigned OC6MD               : 1;
        volatile unsigned OC5MD               : 1;
        volatile unsigned OC4MD               : 1;
        volatile unsigned OC3MD               : 1;
        volatile unsigned OC2MD               : 1;
        volatile unsigned OC1MD               : 1;
    };
    struct {
        volatile unsigned                     : 14;
        volatile unsigned IDLE_MODE           : 1;
        volatile unsigned SLEEP_MODE          : 1;
    };
} PMD2bits @ 0x772;
// bit variable definitions
static volatile bit OC1MD                @ ((unsigned)&PMD2)*8+0;
static volatile bit OC2MD                @ ((unsigned)&PMD2)*8+1;
static volatile bit OC3MD                @ ((unsigned)&PMD2)*8+2;
static volatile bit OC4MD                @ ((unsigned)&PMD2)*8+3;
static volatile bit OC5MD                @ ((unsigned)&PMD2)*8+4;
static volatile bit OC6MD                @ ((unsigned)&PMD2)*8+5;
static volatile bit OC7MD                @ ((unsigned)&PMD2)*8+6;
static volatile bit OC8MD                @ ((unsigned)&PMD2)*8+7;
static volatile bit IC1MD                @ ((unsigned)&PMD2)*8+8;
static volatile bit IC2MD                @ ((unsigned)&PMD2)*8+9;
static volatile bit IC3MD                @ ((unsigned)&PMD2)*8+10;
static volatile bit IC4MD                @ ((unsigned)&PMD2)*8+11;
static volatile bit IC5MD                @ ((unsigned)&PMD2)*8+12;
static volatile bit IC6MD                @ ((unsigned)&PMD2)*8+13;
static volatile bit IC7MD                @ ((unsigned)&PMD2)*8+14;
static volatile bit IC8MD                @ ((unsigned)&PMD2)*8+15;
static volatile bit SLEEP_MODE           @ ((unsigned)&PMD2)*8+0;
static volatile bit IDLE_MODE            @ ((unsigned)&PMD2)*8+1;

#endif
