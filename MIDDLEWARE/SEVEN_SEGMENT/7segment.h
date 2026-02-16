#include "D:\ATmega_2560\GPIO_DRIVER\HEADER\define.h"

//function for seven segment , port=port name and value=number to be displayed
void segment(volatile char port ,uint8_t value); 

//function for seven segment with dot , port=port name and value=number to be displayed
void segment_dot(volatile char port ,uint8_t value);
