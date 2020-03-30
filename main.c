/* this program is writing a value of EEPROM from 0 to 9 then reading it again*/

#include <avr/io.h>
#include "MyEEPROM.h"
int main(void)
{
	///////////////////////////Write process
	
	write_to_eeprom (0x5F,9);
	
	/////////////////////////Read process
	
	unsigned char data;
	data = read_from_eeprom (0x5F);


}

