#include "GPIOS.h"

/*port configuration to set input mode or output mode*/

void port_config(volatile char port ,uint8_t data ) //select port and set data direction for that port
{
  if(port=='a')
  {
    ddrA=data;
  }
  else if(port=='b')
  {
    ddrB=data;
  }
  else if(port=='c')
  {
    ddrC=data;
  }
  else if(port=='d')
  {          
    ddrD=data;
  }
  else if(port=='e')
  {
    ddrE=data;
  }
  else if(port=='f')
  {
    ddrF=data;
  }
  else if(port=='g')
  {
    ddrG=data;
  }
   else if(port=='h')
  {
    ddrH=data;
  }
   else if(port=='j')
  {
    ddrJ=data;
  }
   else if(port=='k')
  {
    ddrK=data;
  }
   else if(port=='l')
  {
    ddrL=data;
  }
}

/*port write*/

void port_write(volatile char port ,uint8_t data ) //select port and write data to that port
{
  if(port=='a')
  {
    portA_out=data;
  }
  else if(port=='b')
  {
    portB_out=data;
  }
  else if(port=='c')
  {
    portC_out=data;
  }
  else if(port=='d')
  {
    portD_out=data;
  }
  else if(port=='e')
  {
    portE_out=data;
  }
  else if(port=='f')
  {
    portF_out=data;
  }
  else if(port=='g')
  {
    portG_out=data;
  }
   else if(port=='h')
  {
    portH_out=data;
  }
   else if(port=='j')
  {
    portJ_out=data;
  }
   else if(port=='k')
  {
    portK_out=data;
  }
   else if(port=='l')
  {
    portL_out=data;
  }
}

/*pin write*/

void pin_write(volatile char port ,uint8_t pin ,uint8_t data) //select port and pin number and write data to that pin starting from pin number 0
{
  if(port=='a')
  {
   if(data==0)
  {
    portA_out &=~(1<<pin);
  }
  if(data==1)
  {
    portA_out|=(1<<pin);
  }
  }
  else if(port=='b')
  {
    if(data==0)
  {
    portB_out &=~(1<<pin);
  }
  if(data==1)
  {
    portB_out|=(1<<pin);
  }
  }
  else if(port=='c')
  {
    if(data==0)
  {
    portC_out &=~(1<<pin);
  }
  if(data==1)
  {
    portC_out|=(1<<pin);
  }
  }
  else if(port=='d')
  {
    if(data==0)
  {
    portD_out &=~(1<<pin);
  }
  if(data==1)
  {
    portD_out|=(1<<pin);
  }
  }
  else if(port=='e')
  {
    if(data==0)
  {
    portE_out &=~(1<<pin);
  }
  if(data==1)
  {
    portE_out|=(1<<pin);
  }
  }
  else if(port=='f')
  {
    if(data==0)
  {
    portF_out &=~(1<<pin);
  }
  if(data==1)
  {
    portF_out|=(1<<pin);
  }
  }
  else if(port=='g')
  {
    if(data==0)
  {
    portG_out &=~(1<<pin);
  }
  if(data==1)
  {
    portG_out|=(1<<pin);
  }
  }
   else if(port=='h')
  {
    if(data==0)
  {
    portH_out &=~(1<<pin);
  }
  if(data==1)
  {
    portH_out|=(1<<pin);
  }
  }
   else if(port=='j')
  {
    if(data==0)
  {
    portJ_out &=~(1<<pin);
  }
  if(data==1)
  {
    portJ_out|=(1<<pin);
  }
  }
   else if(port=='k')
  {
    if(data==0)
  {
    portK_out &=~(1<<pin);
  }
  if(data==1)
  {
    portK_out|=(1<<pin);
  }
  }
   else if(port=='l')
  {
    if(data==0)
  {
    portL_out &=~(1<<pin);
  }
   if(data==1)
  {
    portL_out|=(1<<pin);
  }
  }
}

/*port read*/

uint8_t port_read(volatile char port) //select port and read data from that port
{
  if(port=='a')
  {
    return portA_INPUT;
  }
  else if(port=='b')
  {
    return portB_INPUT;
  }
  else if(port=='c')
  {
    return portC_INPUT;
  }
  else if(port=='d')
  {
    return portD_INPUT;
  }
  else if(port=='e')
  {
    return portE_INPUT;
  }
  else if(port=='f')
  {
    return portF_INPUT;
  }
  else if(port=='g')
  {
    return portG_INPUT;
  }
   else if(port=='h')
  {
    return portH_INPUT;
  }
   else if(port=='j')
  {
    return portJ_INPUT;
  }
   else if(port=='k')
  {
    return portK_INPUT;
  }
   else if(port=='l')
  {
    return portL_INPUT;
  }
}

/*pin read*/

uint8_t pin_read(volatile char port , uint8_t pin) //select port and pin number and read data from that pin starting from pin number 0
{
  if(port=='a')
  {
    return (portA_INPUT & (1<<pin)) >> pin;
  }
  else if(port=='b')
  {
    return (portB_INPUT & (1<<pin)) >> pin;
  }
  else if(port=='c')
  {
    return (portC_INPUT & (1<<pin)) >> pin;
  }
  else if(port=='d')
  {
    return (portD_INPUT & (1<<pin)) >> pin;
  }
  else if(port=='e')
  {
    return (portE_INPUT & (1<<pin)) >> pin;
  }
  else if(port=='f')
  {
    return (portF_INPUT & (1<<pin)) >> pin;
  }
  else if(port=='g')
  {
    return (portG_INPUT & (1<<pin)) >> pin;
  }
   else if(port=='h')
  {
    return (portH_INPUT & (1<<pin)) >> pin;
  }
   else if(port=='j')
  {
    return (portJ_INPUT & (1<<pin)) >> pin;
  }
   else if(port=='k')
  {
    return (portK_INPUT & (1<<pin)) >> pin;
  }
   else if(port=='l')
  {
    return (portL_INPUT & (1<<pin)) >> pin;
  }
}

/*port pullup*/

void port_pullup(char port) //select port and enable pullup resistor for that port
{
  if(port=='a')
  {
    portA_out=0xff;
  }
  else if(port=='b')
  {
    portB_out=0xff;
  }
  else if(port=='c')
  {
    portC_out=0xff;
  }
  else if(port=='d')
  {
    portD_out=0xff;
  }
  else if(port=='e')
  {
    portE_out=0xff;
  }
  else if(port=='f')
  {
    portF_out=0xff;
  }
  else if(port=='g')
  {
    portG_out=0xff;
  }
   else if(port=='h')
  {
    portH_out=0xff;
  }
   else if(port=='j')
  {
    portJ_out=0xff;
  }
   else if(port=='k')
  {
    portK_out=0xff;
  }
   else if(port=='l')
  {
    portL_out=0xff;
  }
}

/*pin pullup*/

void pin_pullup (char port , uint8_t pin) //select port and pin number and enable pullup resistor for that pin starting from pin number 0
{
  if(port=='a')
  {
    portA_out|=(1<<pin);
  }
  else if(port=='b')
  {
    portB_out|=(1<<pin);
  }
  else if(port=='c')
  {
    portC_out|=(1<<pin);
  }
  else if(port=='d')
  {
    portD_out|=(1<<pin);
  }
  else if(port=='e')
  {
    portE_out|=(1<<pin);
  }
  else if(port=='f')
  {
    portF_out|=(1<<pin);
  }
  else if(port=='g')
  {
    portG_out|=(1<<pin);
  }
   else if(port=='h')
  {
    portH_out|=(1<<pin);
  }
   else if(port=='j')
  {
    portJ_out|=(1<<pin);
  }
   else if(port=='k')
  {
    portK_out|=(1<<pin);
  }
   else if(port=='l')
  {
    portL_out|=(1<<pin);
  }
}