/*on 1 LED in PORTF*/

#include "GPIOS.h"
int main()
{
  port_config(portf,0xff); //configure port F as output port
  while(1)
  {
    port_write(portf,0x01); //on first led
  }
}
