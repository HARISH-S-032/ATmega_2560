/*on 1 LED in PORTF using switch in PORTK*/
#include "GPIOS.h"
int main()
{
  port_config(portf,0x01); //configure first pin of port F as output pin
  port_config(portk,0x00); //configure port F pin 0 as output pin and port K as input port
  port_pullup(portk);      //enable pullup resistor for port K
  while(1)
  {
    if(port_read(portk)==0xfe) //if switch is pressed then read value will be 0xfe because of pullup resistor
    port_write(portf,0x01);
    else                       //if switch is not pressed then read value will be 0xff because of pullup resistor
    port_write(portf,0x00);
  }
}
