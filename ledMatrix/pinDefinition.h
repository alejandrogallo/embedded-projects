
//HPORT MUST BE HIGH (positive lead)
#define HPORT PORTC
#define HPORT_DDR DDRC



//
#define VPORT1 PORTD
#define VPORT1_DDR DDRD


#define X0PORT PORTD 
#define X0PIN 7

#define X1PORT PORTB 
#define X1PIN 7

#define X2PORT PORTD 
#define X2PIN 4

#define X3PORT PORTD 
#define X3PIN 2

#define X4PORT PORTC 
#define X4PIN 5

#define Y0PORT PORTB 
#define Y0PIN 5

#define Y1PORT PORTB 
#define Y1PIN 4

#define Y2PORT PORTB 
#define Y2PIN 3

#define Y3PORT PORTB 
#define Y3PIN 2

#define Y4PORT PORTB 
#define Y4PIN 1


#define clearScreen(){PORTC=0b11111111;PORTB=0b10000000;PORTD=0b11111111;}
#define initScreen(){DDRC = 0b11111111; DDRB = 0b11111111; DDRD = 0b11111111;}

#define DRAW00(){clearScreen(); X0PORT^=(1<<X0PIN); Y0PORT|=(1<<Y0PIN);}
#define DRAW10(){clearScreen(); X1PORT^=(1<<X1PIN); Y0PORT|=(1<<Y0PIN);}
#define DRAW20(){clearScreen(); X2PORT^=(1<<X2PIN); Y0PORT|=(1<<Y0PIN);}
#define DRAW30(){clearScreen(); X3PORT^=(1<<X3PIN); Y0PORT|=(1<<Y0PIN);}
#define DRAW40(){clearScreen(); X4PORT^=(1<<X4PIN); Y0PORT|=(1<<Y0PIN);}

#define DRAW01(){clearScreen(); X0PORT^=(1<<X0PIN); Y1PORT|=(1<<Y1PIN);}
#define DRAW11(){clearScreen(); X1PORT^=(1<<X1PIN); Y1PORT|=(1<<Y1PIN);}
#define DRAW21(){clearScreen(); X2PORT^=(1<<X2PIN); Y1PORT|=(1<<Y1PIN);}
#define DRAW31(){clearScreen(); X3PORT^=(1<<X3PIN); Y1PORT|=(1<<Y1PIN);}
#define DRAW41(){clearScreen(); X4PORT^=(1<<X4PIN); Y1PORT|=(1<<Y1PIN);}

#define DRAW02(){clearScreen(); X0PORT^=(1<<X0PIN); Y2PORT|=(1<<Y2PIN);}
#define DRAW12(){clearScreen(); X1PORT^=(1<<X1PIN); Y2PORT|=(1<<Y2PIN);}
#define DRAW22(){clearScreen(); X2PORT^=(1<<X2PIN); Y2PORT|=(1<<Y2PIN);}
#define DRAW32(){clearScreen(); X3PORT^=(1<<X3PIN); Y2PORT|=(1<<Y2PIN);}
#define DRAW42(){clearScreen(); X4PORT^=(1<<X4PIN); Y2PORT|=(1<<Y2PIN);}

#define DRAW03(){clearScreen(); X0PORT^=(1<<X0PIN); Y3PORT|=(1<<Y3PIN);}
#define DRAW13(){clearScreen(); X1PORT^=(1<<X1PIN); Y3PORT|=(1<<Y3PIN);}
#define DRAW23(){clearScreen(); X2PORT^=(1<<X2PIN); Y3PORT|=(1<<Y3PIN);}
#define DRAW33(){clearScreen(); X3PORT^=(1<<X3PIN); Y3PORT|=(1<<Y3PIN);}
#define DRAW43(){clearScreen(); X4PORT^=(1<<X4PIN); Y3PORT|=(1<<Y3PIN);}

#define DRAW04(){clearScreen(); X0PORT^=(1<<X0PIN); Y4PORT|=(1<<Y4PIN);}
#define DRAW14(){clearScreen(); X1PORT^=(1<<X1PIN); Y4PORT|=(1<<Y4PIN);}
#define DRAW24(){clearScreen(); X2PORT^=(1<<X2PIN); Y4PORT|=(1<<Y4PIN);}
#define DRAW34(){clearScreen(); X3PORT^=(1<<X3PIN); Y4PORT|=(1<<Y4PIN);}
#define DRAW44(){clearScreen(); X4PORT^=(1<<X4PIN); Y4PORT|=(1<<Y4PIN);}



