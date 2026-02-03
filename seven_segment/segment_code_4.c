
/*count 00 to 99*/

#include "harish.h"
int main()
{
  ddrf(0xff); 
  ddrk(0x03);
  volatile unsigned int  a=0;

while(1)
{
  for(int i=0;i<=9;i++)
  {
    for(int j=0;j<=9;j++)
    {
      a=0;
      while(a<20000)
      {
        segment_f(i);
        port_k(0x02);
         port_k(0x03);
        segment_f(j);
        port_k(0x01);
        port_k(0x03);
        a++;
      }
    }
  }
}
}