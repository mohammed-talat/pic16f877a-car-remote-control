void m_right (){                                // move to the right function
 portc.f0 =1;
 delay_us(1750);
  portc.f0=0;
 delay_us(500)   ;
  }
 void m_left  (){                             // move to the left function
 portc.f0=1;
 delay_us(1150);
  portc.f0=0;
 delay_us(500)   ;
  }
  void center  (){                           // stay at the center function
 portc.f0=1;
 delay_us(1500);
  portc.f0=0;
 delay_us(500)   ;


  }
void main() {
trisb=255;
portb=0;
trisa=0;
porta=0;
trisc=0;
portc=0;
while(1)
                    {
    switch (portb)
    {
    case 254: {porta.f0=1;    center();               // just forward
                 break;}
    case 253: {porta.f1=1;    center();               //just back
                 break;}
    case 250: {porta.f0=1;    m_right();              // forward and right
                 break;}
    case 246: {porta.f0=1;    m_left();               // forward and left
                 break;}
    case 249: {porta.f1=1;    m_right();              // back and right
                 break;}
    case 245:{porta.f1=1;    m_left();               // back and left
                 break;}
    case 251:{m_right(); porta.f0=0; porta.f1=0;     // just move the wheels right
                 break;}
    case 247:{m_left();porta.f0=0; porta.f1=0;
                 break;}
    default: {center(); porta.f0=0 ; porta.f1=0;    // default any other state.
                 break;}
    }
                      }
  }
