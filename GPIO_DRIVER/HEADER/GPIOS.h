
#include "define.h"

//port configuration to set input mode or output mode
void port_config(volatile char port ,uint8_t data ); 

//port write
void port_write(volatile char port ,uint8_t data ); 

//pin write
void pin_write(volatile char port ,uint8_t pin ,uint8_t data);

//port read
uint8_t port_read(volatile char port); 

//pin read 
uint8_t pin_read(volatile char port , uint8_t pin); 

//port pullup
void port_pullup(char port); 

//pin pullup
void pin_pullup (char port , uint8_t pin); 
