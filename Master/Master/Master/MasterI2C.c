#define F_CPU 16000000UL
#include <avr/io.h>
#include "MasterOperationI2C.h"
#include <util/delay.h>
int main(void){
	DDRB = 0x0F;
    uint8_t Address = 0x10;
    uint8_t data = 4;
	Master_begin();
    while(1){
		for(int i = 0; i<9; i++){
        Master_Start();
        Master_Send(Address); 
        Master_Send(i);
        Master_Stop(); 
		 }
		}
    }


