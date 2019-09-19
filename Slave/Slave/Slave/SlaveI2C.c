#include <avr/io.h>
#include "SlaveOperationI2C.h"

int main(void){
	DDRB = 0x0F;
    uint8_t Address = 0x10;
    uint8_t Data;
	Slave_begin(Address);
    while(1){
		TWCR = (1<<TWINT) | (1<<TWEN) | (1<<TWEA);
        Slave_listen();
        Data = Slave_Receive();
		if(Data == 8) PORTB = 0x01;
		else PORTB = 0x00;
    }
	return 0;
}