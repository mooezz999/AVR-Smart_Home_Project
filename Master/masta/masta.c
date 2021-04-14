/*
 * masta.c
 *
 * Created: 4/12/2021 1:54:59 AM
 *  Author: Moustafa Ezz
 */ 

#include "UART.h"
#include "SPI.h"











int main(void)
{
	DDRC=0xFF;
	SPI_Init();
		SS_Enable;

	char data;
	UART_init(9600);
    while(1)
    {
	
        //TODO:: Please write your application code 
		data=UART_RxChar();
		if(data=='l'){
			SPI_Write(data);
			PORTC = 0x01;
			UART_SendString("Light turned on");
		}
		if(data=='a'){
			SPI_Write(data);
			PORTC = 0x01;
			UART_SendString("Air conditioning turned on");
		}
		if(data=='t'){
			SPI_Write(data);
			PORTC = 0x01;
			UART_SendString("TV turned on");
		}
    }
}