; HI-TECH Software dsPICC Assembler header file for the

;     Microchip DSPIC30F6012A

; NOTE: dsPICC option -P is required to preprocess assembler sources.

; Special Function Register Definitions

#ifndef __AS30F6012A_H
#define __AS30F6012A_H

ACCAH                equ 0x024
ACCAL                equ 0x022
ACCAU                equ 0x026
ACCBH                equ 0x02A
ACCBL                equ 0x028
ACCBU                equ 0x02C
ADCBUF0              equ 0x280
ADCBUF1              equ 0x282
ADCBUF2              equ 0x284
ADCBUF3              equ 0x286
ADCBUF4              equ 0x288
ADCBUF5              equ 0x28A
ADCBUF6              equ 0x28C
ADCBUF7              equ 0x28E
ADCBUF8              equ 0x290
ADCBUF9              equ 0x292
ADCBUFA              equ 0x294
ADCBUFB              equ 0x296
ADCBUFC              equ 0x298
ADCBUFD              equ 0x29A
ADCBUFE              equ 0x29C
ADCBUFF              equ 0x29E
ADCHS                equ 0x2A6
ADCON1               equ 0x2A0
ADCON2               equ 0x2A2
ADCON3               equ 0x2A4
ADCSSL               equ 0x2AA
ADPCFG               equ 0x2A8
BSRAM                equ 0x750
C1CFG1               equ 0x392
C1CFG2               equ 0x394
C1CTRL               equ 0x390
C1EC                 equ 0x39A
C1INTE               equ 0x398
C1INTF               equ 0x396
C1RX0B1              equ 0x386
C1RX0B2              equ 0x388
C1RX0B3              equ 0x38A
C1RX0B4              equ 0x38C
C1RX0CON             equ 0x38E
C1RX0DLC             equ 0x384
C1RX0EID             equ 0x382
C1RX0SID             equ 0x380
C1RX1B1              equ 0x376
C1RX1B2              equ 0x378
C1RX1B3              equ 0x37A
C1RX1B4              equ 0x37C
C1RX1CON             equ 0x37E
C1RX1DLC             equ 0x374
C1RX1EID             equ 0x372
C1RX1SID             equ 0x370
C1RXF0EIDH           equ 0x302
C1RXF0EIDL           equ 0x304
C1RXF0SID            equ 0x300
C1RXF1EIDH           equ 0x30A
C1RXF1EIDL           equ 0x30C
C1RXF1SID            equ 0x308
C1RXF2EIDH           equ 0x312
C1RXF2EIDL           equ 0x314
C1RXF2SID            equ 0x310
C1RXF3EIDH           equ 0x31A
C1RXF3EIDL           equ 0x31C
C1RXF3SID            equ 0x318
C1RXF4EIDH           equ 0x322
C1RXF4EIDL           equ 0x324
C1RXF4SID            equ 0x320
C1RXF5EIDH           equ 0x32A
C1RXF5EIDL           equ 0x32C
C1RXF5SID            equ 0x328
C1RXM0EIDH           equ 0x332
C1RXM0EIDL           equ 0x334
C1RXM0SID            equ 0x330
C1RXM1EIDH           equ 0x33A
C1RXM1EIDL           equ 0x33C
C1RXM1SID            equ 0x338
C1TX0B1              equ 0x366
C1TX0B2              equ 0x368
C1TX0B3              equ 0x36A
C1TX0B4              equ 0x36C
C1TX0CON             equ 0x36E
C1TX0DLC             equ 0x364
C1TX0EID             equ 0x362
C1TX0SID             equ 0x360
C1TX1B1              equ 0x356
C1TX1B2              equ 0x358
C1TX1B3              equ 0x35A
C1TX1B4              equ 0x35C
C1TX1CON             equ 0x35E
C1TX1DLC             equ 0x354
C1TX1EID             equ 0x352
C1TX1SID             equ 0x350
C1TX2B1              equ 0x346
C1TX2B2              equ 0x348
C1TX2B3              equ 0x34A
C1TX2B4              equ 0x34C
C1TX2CON             equ 0x34E
C1TX2DLC             equ 0x344
C1TX2EID             equ 0x342
C1TX2SID             equ 0x340
C2CFG1               equ 0x452
C2CFG2               equ 0x454
C2CTRL               equ 0x450
C2EC                 equ 0x45A
C2INTE               equ 0x458
C2INTF               equ 0x456
C2RX0B1              equ 0x446
C2RX0B2              equ 0x448
C2RX0B3              equ 0x44A
C2RX0B4              equ 0x44C
C2RX0CON             equ 0x44E
C2RX0DLC             equ 0x444
C2RX0EID             equ 0x442
C2RX0SID             equ 0x440
C2RX1B1              equ 0x436
C2RX1B2              equ 0x438
C2RX1B3              equ 0x43A
C2RX1B4              equ 0x43C
C2RX1CON             equ 0x43E
C2RX1DLC             equ 0x434
C2RX1EID             equ 0x432
C2RX1SID             equ 0x430
C2RXF0EIDH           equ 0x3C2
C2RXF0EIDL           equ 0x3C4
C2RXF0SID            equ 0x3C0
C2RXF1EIDH           equ 0x3CA
C2RXF1EIDL           equ 0x3CC
C2RXF1SID            equ 0x3C8
C2RXF2EIDH           equ 0x3D2
C2RXF2EIDL           equ 0x3D4
C2RXF2SID            equ 0x3D0
C2RXF3EIDH           equ 0x3DA
C2RXF3EIDL           equ 0x3DC
C2RXF3SID            equ 0x3D8
C2RXF4EIDH           equ 0x3E2
C2RXF4EIDL           equ 0x3E4
C2RXF4SID            equ 0x3E0
C2RXF5EIDH           equ 0x3EA
C2RXF5EIDL           equ 0x3EC
C2RXF5SID            equ 0x3E8
C2RXM0EIDH           equ 0x3F2
C2RXM0EIDL           equ 0x3F4
C2RXM0SID            equ 0x3F0
C2RXM1EIDH           equ 0x3FA
C2RXM1EIDL           equ 0x3FC
C2RXM1SID            equ 0x3F8
C2TX0B1              equ 0x426
C2TX0B2              equ 0x428
C2TX0B3              equ 0x42A
C2TX0B4              equ 0x42C
C2TX0CON             equ 0x42E
C2TX0DLC             equ 0x424
C2TX0EID             equ 0x422
C2TX0SID             equ 0x420
C2TX1B1              equ 0x416
C2TX1B2              equ 0x418
C2TX1B3              equ 0x41A
C2TX1B4              equ 0x41C
C2TX1CON             equ 0x41E
C2TX1DLC             equ 0x414
C2TX1EID             equ 0x412
C2TX1SID             equ 0x410
C2TX2B1              equ 0x406
C2TX2B2              equ 0x408
C2TX2B3              equ 0x40A
C2TX2B4              equ 0x40C
C2TX2CON             equ 0x40E
C2TX2DLC             equ 0x404
C2TX2EID             equ 0x402
C2TX2SID             equ 0x400
CNEN1                equ 0x0C0
CNEN2                equ 0x0C2
CNPU1                equ 0x0C4
CNPU2                equ 0x0C6
CORCON               equ 0x044
DCICON1              equ 0x240
DCICON2              equ 0x242
DCICON3              equ 0x244
DCISTAT              equ 0x246
DCOUNT               equ 0x038
DISICNT              equ 0x052
DOENDH               equ 0x040
DOENDL               equ 0x03E
DOSTARTH             equ 0x03C
DOSTARTL             equ 0x03A
I2CADD               equ 0x20A
I2CBRG               equ 0x204
I2CCON               equ 0x206
I2CRCV               equ 0x200
I2CSTAT              equ 0x208
I2CTRN               equ 0x202
IC1BUF               equ 0x140
IC1CON               equ 0x142
IC2BUF               equ 0x144
IC2CON               equ 0x146
IC3BUF               equ 0x148
IC3CON               equ 0x14A
IC4BUF               equ 0x14C
IC4CON               equ 0x14E
IC5BUF               equ 0x150
IC5CON               equ 0x152
IC6BUF               equ 0x154
IC6CON               equ 0x156
IC7BUF               equ 0x158
IC7CON               equ 0x15A
IC8BUF               equ 0x15C
IC8CON               equ 0x15E
IEC0                 equ 0x08C
IEC1                 equ 0x08E
IEC2                 equ 0x090
IFS0                 equ 0x084
IFS1                 equ 0x086
IFS2                 equ 0x088
INTCON1              equ 0x080
INTCON2              equ 0x082
INTTREG              equ 0x0B0
IPC0                 equ 0x094
IPC1                 equ 0x096
IPC10                equ 0x0A8
IPC2                 equ 0x098
IPC3                 equ 0x09A
IPC4                 equ 0x09C
IPC5                 equ 0x09E
IPC6                 equ 0x0A0
IPC7                 equ 0x0A2
IPC8                 equ 0x0A4
IPC9                 equ 0x0A6
LATB                 equ 0x2CA
LATC                 equ 0x2D0
LATD                 equ 0x2D6
LATF                 equ 0x2E2
LATG                 equ 0x2E8
MODCON               equ 0x046
NVMADR               equ 0x762
NVMADRU              equ 0x764
NVMCON               equ 0x760
NVMKEY               equ 0x766
OC1CON               equ 0x184
OC1R                 equ 0x182
OC1RS                equ 0x180
OC2CON               equ 0x18A
OC2R                 equ 0x188
OC2RS                equ 0x186
OC3CON               equ 0x190
OC3R                 equ 0x18E
OC3RS                equ 0x18C
OC4CON               equ 0x196
OC4R                 equ 0x194
OC4RS                equ 0x192
OC5CON               equ 0x19C
OC5R                 equ 0x19A
OC5RS                equ 0x198
OC6CON               equ 0x1A2
OC6R                 equ 0x1A0
OC6RS                equ 0x19E
OC7CON               equ 0x1A8
OC7R                 equ 0x1A6
OC7RS                equ 0x1A4
OC8CON               equ 0x1AE
OC8R                 equ 0x1AC
OC8RS                equ 0x1AA
OSCCON               equ 0x742
OSCTUN               equ 0x744
PCH                  equ 0x030
PCL                  equ 0x02E
PMD1                 equ 0x770
PMD2                 equ 0x772
PORTB                equ 0x2C8
PORTC                equ 0x2CE
PORTD                equ 0x2D4
PORTF                equ 0x2E0
PORTG                equ 0x2E6
PR1                  equ 0x102
PR2                  equ 0x10C
PR3                  equ 0x10E
PR4                  equ 0x11A
PR5                  equ 0x11C
PSVPAG               equ 0x034
RCON                 equ 0x740
RCOUNT               equ 0x036
RSCON                equ 0x24C
RXBUF0               equ 0x250
RXBUF1               equ 0x252
RXBUF2               equ 0x254
RXBUF3               equ 0x256
SPI1BUF              equ 0x224
SPI1CON              equ 0x222
SPI1STAT             equ 0x220
SPI2BUF              equ 0x22A
SPI2CON              equ 0x228
SPI2STAT             equ 0x226
SPLIM                equ 0x020
SR                   equ 0x042
SSRAM                equ 0x752
T1CON                equ 0x104
T2CON                equ 0x110
T3CON                equ 0x112
T4CON                equ 0x11E
T5CON                equ 0x120
TBLPAG               equ 0x032
TMR1                 equ 0x100
TMR2                 equ 0x106
TMR3                 equ 0x10A
TMR3HLD              equ 0x108
TMR4                 equ 0x114
TMR5                 equ 0x118
TMR5HLD              equ 0x116
TRISB                equ 0x2C6
TRISC                equ 0x2CC
TRISD                equ 0x2D2
TRISF                equ 0x2DE
TRISG                equ 0x2E4
TSCON                equ 0x248
TXBUF0               equ 0x258
TXBUF1               equ 0x25A
TXBUF2               equ 0x25C
TXBUF3               equ 0x25E
U1BRG                equ 0x214
U1MODE               equ 0x20C
U1RXREG              equ 0x212
U1STA                equ 0x20E
U1TXREG              equ 0x210
U2BRG                equ 0x21E
U2MODE               equ 0x216
U2RXREG              equ 0x21C
U2STA                equ 0x218
U2TXREG              equ 0x21A
WREG0                equ 0x000
WREG1                equ 0x002
WREG10               equ 0x014
WREG11               equ 0x016
WREG12               equ 0x018
WREG13               equ 0x01A
WREG14               equ 0x01C
WREG15               equ 0x01E
WREG2                equ 0x004
WREG3                equ 0x006
WREG4                equ 0x008
WREG5                equ 0x00A
WREG6                equ 0x00C
WREG7                equ 0x00E
WREG8                equ 0x010
WREG9                equ 0x012
XBREV                equ 0x050
XMODEND              equ 0x04A
XMODSRT              equ 0x048
YMODEND              equ 0x04E
YMODSRT              equ 0x04C

#endif
