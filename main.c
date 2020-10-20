

#include "config.h"
#include <xc.h>
#define _XTAL_FREQ 4000000

void main(void) {
    
    TRISB=0;
    PORTB=0;
    
    TRISCbits.TRISC1=1;
    
    unsigned char segments_code[10] = {0xFC,0x60,0xDA,0xF2,0x66,0xB6,0xBE,0xE0,0xFE,0xF6};
    unsigned char counter =0;
    
    
    while (1)
    {
        PORTB = segments_code[counter];
        
        if (PORTCbits.RC0)
        {
            __delay_ms(300);
            counter++;
            if(counter==10)
                 counter=0;
        }
        
    }
    return;
}
