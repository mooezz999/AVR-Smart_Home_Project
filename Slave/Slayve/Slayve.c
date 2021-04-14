/*
 * Slayve.c
 *
 * Created: 4/12/2021 2:04:26 AM
 *  Author: Moustafa Ezz
 */ 

#include "SPI.H"
#define F_CPU 8000000UL	





int main(void)
{
	DDRC=0xFF;
	DDRD=0xFF;
	DDRA=0xFF;
	SPI_Init();
	unsigned char data;
    while(1)
    {
     
		data = SPI_Receive();
		if(data=='l'){
			PORTC = 0x04;
		}
		if(data=='a'){
			PORTA = 0x01;
		}
		if(data=='t'){
			PORTD = 0x08;
		}
    }
}