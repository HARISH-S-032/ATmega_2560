#ifndef DEFINE_H
#define DEFINE_H

#include <stdint.h>

#define ddrA (*(volatile uint8_t*) 0x21)
#define portA_out (*(volatile uint8_t*) 0x22)
#define portA_INPUT (*(volatile uint8_t*) 0x20)
#define ddrB (*(volatile uint8_t*) 0x24)
#define portB_out (*(volatile uint8_t*) 0x25)
#define portB_INPUT (*(volatile uint8_t*) 0x23)
#define ddrC (*(volatile uint8_t*) 0x27)
#define portC_out (*(volatile uint8_t*) 0x28)
#define portC_INPUT (*(volatile uint8_t*) 0x26)
#define ddrD (*(volatile uint8_t*) 0x2A)
#define portD_out (*(volatile uint8_t*) 0x2B)
#define portD_INPUT (*(volatile uint8_t*) 0x29)
#define ddrE (*(volatile uint8_t*) 0x2D)
#define portE_out (*(volatile uint8_t*) 0x2E)
#define portE_INPUT (*(volatile uint8_t*) 0x2C)
#define ddrF (*(volatile uint8_t*) 0x30)
#define portF_out (*(volatile uint8_t*) 0x31)
#define portF_INPUT (*(volatile uint8_t*) 0x2F)
#define ddrG (*(volatile uint8_t*) 0x33)
#define portG_out (*(volatile uint8_t*) 0x34)
#define portG_INPUT (*(volatile uint8_t*) 0x32)
#define ddrH (*(volatile uint8_t*) 0x101)
#define portH_out (*(volatile uint8_t*) 0x102)
#define portH_INPUT (*(volatile uint8_t*) 0x100)
#define ddrJ (*(volatile uint8_t*) 0x104)
#define portJ_out (*(volatile uint8_t*) 0x105)
#define portJ_INPUT (*(volatile uint8_t*) 0x103)
#define ddrK (*(volatile uint8_t*) 0x107)
#define portK_out (*(volatile uint8_t*) 0x108)
#define portK_INPUT (*(volatile uint8_t*) 0x106)
#define ddrL (*(volatile uint8_t*) 0x10A)
#define portL_out (*(volatile uint8_t*) 0x10B)
#define portL_INPUT (*(volatile uint8_t*) 0x109)
#define high 1
#define low 0
#define porta 97
#define portb 98    
#define portc 99
#define portd 100 
#define porte 101
#define portf 102   
#define portg 103 
#define porth 104
#define portj 106
#define portk 107
#define portl 108
  

/*---------Delay---------*/
void delay_h(float x)
{
  volatile long i;
  for(i=0;i<(x*75);i++);
}

#endif