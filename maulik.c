/* 
 * File:   maulik.c
 * Author: Maulik
 *
 * Created on August 14, 2018, 9:10 AM
 */

#include<stdlib.h>
#include<stdio.h>
#include "abc.h"
#include<xc.h>
#define PortBbits.RB0
#define PortBbits.RB1
#define PortBbits.RB2
#define PortBbits.RB3
#define PortBbits.RB4
#define PortBbits.RB5
#define PortBbits.RB6
#define PortBbits.RB7
void delay(unsigned char c){
    for(unsigned char i=0;i<c;i++);
}
void main(void)
{
    TRISBbits.TRISB1;
    TRISBbits.TRISB2;
    TRISBbits.TRISB3;
    TRISBbits.TRISB4;
    TRISBbits.TRISB5;
    TRISBbits.TRISB6;
    TRISBbits.TRISB7;
    TRISBbits.TRISB0;       
    TRISB=0;
    LATBbits.LATB0=0;
    LATBbits.LATB1=0;
    LATBbits.LATB2=0;
    LATBbits.LATB3=0;
    LATBbits.LATB4=0;
    LATBbits.LATB5=0;
    LATBbits.LATB6=0;
    LATBbits.LATB7=0;
    while(1){
        LATBbits.LATB7=1;
        delay(500);
        LATBbits.LATB7=0;
        delay(500);
    }
}

