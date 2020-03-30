

#ifndef MYEEPROM_H_
#define MYEEPROM_H_


void write_to_eeprom (unsigned char address, unsigned char data);
unsigned char read_from_eeprom (unsigned char address);


#endif /* MYEEPROM_H_ */