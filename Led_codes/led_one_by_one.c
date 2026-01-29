#include "harish.h"
int main() {
  ddrf(0xff);
  while(1)
  {
    int a=0;
    while(a<=7)
    {
      port_f(1<<a);
      delay_h(1);
      a++;
    }
  }
}

