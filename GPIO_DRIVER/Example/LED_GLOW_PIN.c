/* on 1 LED in PORTF using pin */
#include "GPIOS.h"
int main()
{
  port_config(portf,0x01); //configure first pin of port F as output pin
  while(1)
  {
    pin_write(portf,0,high); //on first led
  }
}
