#include <pic18f2220.h>

#include "led_driver.h"

char led[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    { 1, 0, 1, 1, 0, 1, 1},
    { 1, 0, 1, 1, 1, 1, 1},
    { 1, 1, 1, 0, 0, 0, 0},
    { 1, 1, 1, 1, 1, 1, 1},
    { 1, 1, 1, 1, 0, 1, 1}
};


void led_init() {
    TRISCbits.TRISC0 = 0;
    TRISCbits.TRISC1 = 0;
    TRISCbits.TRISC2 = 0;
    TRISCbits.TRISC3 = 0;
    TRISCbits.TRISC4 = 0;
    TRISCbits.TRISC5 = 0;
    TRISCbits.TRISC6 = 0;
    TRISCbits.TRISC7 = 0;




}

void led_clear() {
    LATCbits.LATC1 = 0;
    LATCbits.LATC2 = 0;
    LATCbits.LATC3 = 0;
    LATCbits.LATC4 = 0;
    LATCbits.LATC5 = 0;
    LATCbits.LATC6 = 0;
    LATCbits.LATC7 = 0;


}

void led_write(char i) {
    if (i == 0) {
        LATCbits.LATC1 = led[0][0];
        LATCbits.LATC2 = led[0][1];
        LATCbits.LATC3 = led[0][2];
        LATCbits.LATC4 = led[0][3];
        LATCbits.LATC5 = led[0][4];
        LATCbits.LATC6 = led[0][5];
        LATCbits.LATC7 = led[0][6];
    }
    if (i == 1) {
        LATCbits.LATC1 = led[1][0];
        LATCbits.LATC2 = led[1][1];
        LATCbits.LATC3 = led[1][2];
        LATCbits.LATC4 = led[1][3];
        LATCbits.LATC5 = led[1][4];
        LATCbits.LATC6 = led[1][5];
        LATCbits.LATC7 = led[1][6];
    }
    if (i == 2) {
        LATCbits.LATC1 = led[2][0];
        LATCbits.LATC2 = led[2][1];
        LATCbits.LATC3 = led[2][2];
        LATCbits.LATC4 = led[2][3];
        LATCbits.LATC5 = led[2][4];
        LATCbits.LATC6 = led[2][5];
        LATCbits.LATC7 = led[2][6];
    }
    if (i == 3) {
        LATCbits.LATC1 = led[3][0];
        LATCbits.LATC2 = led[3][1];
        LATCbits.LATC3 = led[3][2];
        LATCbits.LATC4 = led[3][3];
        LATCbits.LATC5 = led[3][4];
        LATCbits.LATC6 = led[3][5];
        LATCbits.LATC7 = led[3][6];
    }


    if (i == 4) {
        LATCbits.LATC1 = led[4][0];
        LATCbits.LATC2 = led[4][1];
        LATCbits.LATC3 = led[4][2];
        LATCbits.LATC4 = led[4][3];
        LATCbits.LATC5 = led[4][4];
        LATCbits.LATC6 = led[4][5];
        LATCbits.LATC7 = led[4][6];
    }
    if (i == 5) {
        LATCbits.LATC1 = led[5][0];
        LATCbits.LATC2 = led[5][1];
        LATCbits.LATC3 = led[5][2];
        LATCbits.LATC4 = led[5][3];
        LATCbits.LATC5 = led[5][4];
        LATCbits.LATC6 = led[5][5];
        LATCbits.LATC7 = led[5][6];
    }
    if (i == 6) {
        LATCbits.LATC1 = led[6][0];
        LATCbits.LATC2 = led[6][1];
        LATCbits.LATC3 = led[6][2];
        LATCbits.LATC4 = led[6][3];
        LATCbits.LATC5 = led[6][4];
        LATCbits.LATC6 = led[6][5];
        LATCbits.LATC7 = led[6][6];
    }
    if (i == 7) {
        LATCbits.LATC1 = led[7][0];
        LATCbits.LATC2 = led[7][1];
        LATCbits.LATC3 = led[7][2];
        LATCbits.LATC4 = led[7][3];
        LATCbits.LATC5 = led[7][4];
        LATCbits.LATC6 = led[7][5];
        LATCbits.LATC7 = led[7][6];
    }
    if (i == 8) {
        LATCbits.LATC1 = led[8][0];
        LATCbits.LATC2 = led[8][1];
        LATCbits.LATC3 = led[8][2];
        LATCbits.LATC4 = led[8][3];
        LATCbits.LATC5 = led[8][4];
        LATCbits.LATC6 = led[8][5];
        LATCbits.LATC7 = led[8][6];
    }
    if (i == 9) {
        LATCbits.LATC1 = led[9][0];
        LATCbits.LATC2 = led[9][1];
        LATCbits.LATC3 = led[9][2];
        LATCbits.LATC4 = led[9][3];
        LATCbits.LATC5 = led[9][4];
        LATCbits.LATC6 = led[9][5];
        LATCbits.LATC7 = led[9][6];
    }






}