#include "D:\ATmega_2560\MIDDLEWARE\SEVEN_SEGMENT\7segment.h"

/*seven segment*/
void segment(volatile char port ,uint8_t value)
{
  int z[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};  //select port and give the value 0 to 9 to be displayed on seven segment
  if(port=='a')
  {
    portA_out=z[value];
  }
  else if(port=='b')
  {
    portB_out=z[value];
  }
  else if(port=='c')
  {
    portC_out=z[value];
  }
  else if(port=='d')
  {
    portD_out=z[value];
  }
  else if(port=='e')
  {
    portE_out=z[value];
  }
  else if(port=='f')
  {
    portF_out=z[value];
  }
  else if(port=='g')
  {
    portG_out=z[value];
  }
   else if(port=='h')
  {
    portH_out=z[value];
  }
   else if(port=='j')
  {
    portJ_out=z[value];
  }
   else if(port=='k')
  {
    portK_out=z[value];
  }
   else if(port=='l')
  {
    portL_out=z[value];
  }
}

/*seven segment with dot*/
void segment_dot(volatile char port ,uint8_t value)
{
  int z[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f}; //select port and give the value 0 to 9 to be displayed on seven segment with dot
  if(port=='a')
  {
    portA_out=z[value];
  }
  else if(port=='b')
  {
    portB_out=z[value];
  }
  else if(port=='c')
  {
    portC_out=z[value];
  }
  else if(port=='d')
  {
    portD_out=z[value];
  }
  else if(port=='e')
  {
    portE_out=z[value];
  }
  else if(port=='f')
  {
    portF_out=z[value];
  }
  else if(port=='g')
  {
    portG_out=z[value];
  }
   else if(port=='h')
  {
    portH_out=z[value];
  }
   else if(port=='j')
  {
    portJ_out=z[value];
  }
   else if(port=='k')
  {
    portK_out=z[value];
  }
   else if(port=='l')
  {
    portL_out=z[value];
  }
}