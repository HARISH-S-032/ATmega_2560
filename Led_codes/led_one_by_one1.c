// Glow the LEDs in following order 3,7 delay - 2,6 delay – 1,5 delay – 0,4 delay

#include "harish.h"
int main() {
  ddrf(0xff);
  while(1)
  { 
    
    unsigned int a=0;
    while(a<4)
    {
      port_f(0x88>>a);
      delay_h(1);
      a++;
    }
  }
}

