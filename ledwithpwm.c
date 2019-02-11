/*
 * ledwithpwm.c
 *
 * Created: 2/6/2018 7:12:28 PM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include <atmega/button.h>

int main(void)
{
	TCCR0=0x69;
	PB3OUT;
	unsigned char ran[]={255,128,75,0};
    while(1)
    {
		for (char i=0;i<4;i++)
		{
			OCR0=ran[i];
			PC3ON;
			_delay_ms(1000);
		}
        //TODO:: Please write your application code 
    }
}