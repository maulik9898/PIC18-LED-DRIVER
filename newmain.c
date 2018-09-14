/*
 * File:   main.c
 * Author: Maulik
 *
 * Created on August 9, 2018, 11:54 AM
 */


#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "prob1.h"
#include "led_driver.h"

 

void delay(unsigned char c) {
    for (unsigned char i = 0; i < c; i++);
}

void main(void) {
    unsigned char j;
    TRISC = 0x00;
    led_init();
    led_clear();
    while (1) {
        
          led_write(5);
          delay(100);
          led_clear();
          delay(100);
      
        
    }
}