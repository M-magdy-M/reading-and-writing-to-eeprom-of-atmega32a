#include <avr/io.h>
#include "MyEEPROM.h"

void write_to_eeprom (unsigned char address, unsigned char data)
{
		while(EECR&(1<<EEWE));  //WAIT FOR LAST WRITE PROCESS to finish
		EEAR=address;				//write in that address
		EEDR=data;					// write the value 5
		EECR |= (1<<EEMWE);		//master write enable on, will be off automatically after 4 machine cycles
		EECR |= (1<<EEWE);		//write enable on
}

unsigned char read_from_eeprom (unsigned char address)
{
		while(EECR&(1<<EEWE));  //WAIT FOR LAST WRITE PROCESS to finish
		EEAR=0X5F;				//read from that address
		EECR = 1<<EERE;
		return EEDR;
}