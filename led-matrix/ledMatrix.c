

#include <avr/io.h>
#include <util/delay.h>
#include "pinDefinition.h"
#include "animations.h"





int main(void) {

    initScreen();
    clearScreen();

    const uint8_t delay=1;

    //init for leds, outputs
    while (1) {
    



    // Printing k
// Printing e
//0***0
//0**0*
//000**
//0**0*
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(4*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(3*delay);
DRAW31();
_delay_ms(2*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(3*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
//***0*
//**0**
//00***
//**0**
//***0*

for (int i = 0; i < 10; ++i){
_delay_ms(3*delay);
DRAW30();
_delay_ms(4*delay);
DRAW21();
_delay_ms(3*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(6*delay);
DRAW23();
_delay_ms(6*delay);
DRAW34();
_delay_ms(2*delay);
}
//**0*0
//*0**0
//0***0
//*0**0
//**0*0

for (int i = 0; i < 10; ++i){
_delay_ms(2*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(3*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(4*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(3*delay);
DRAW43();
_delay_ms(3*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0*00
//0**0*
//***00
//0**0*
//*0*00

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(3*delay);
DRAW31();
_delay_ms(5*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(3*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0*000
//**0**
//**000
//**0**
//0*000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(5*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(3*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0000
//*0***
//*0000
//*0***
//*0000

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(5*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//00000
//0****
//0000*
//0****
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing e
// Printing i
//00000
//0****
//0000*
//0****
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0000*
//*****
//000**
//*****
//0000*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(7*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(8*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(2*delay);
}
//000*0
//*****
//00***
//*****
//000*0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(6*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(9*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//00*00
//*****
//0****
//*****
//00*00

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(6*delay);
DRAW02();
_delay_ms(10*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0*000
//****0
//****0
//****0
//0*000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(5*delay);
DRAW41();
_delay_ms(5*delay);
DRAW42();
_delay_ms(5*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0000
//***0*
//***0*
//***0*
//*0000

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(4*delay);
DRAW31();
_delay_ms(5*delay);
DRAW32();
_delay_ms(5*delay);
DRAW33();
_delay_ms(3*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//00000
//**0**
//**0**
//**0**
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(5*delay);
DRAW22();
_delay_ms(5*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing i
// Printing n
//00000
//**0**
//**0**
//**0**
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(5*delay);
DRAW22();
_delay_ms(5*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0000*
//*0***
//*0***
//*0***
//0000*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(3*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(5*delay);
DRAW13();
_delay_ms(4*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(2*delay);
}
//000*0
//0***0
//0***0
//0***0
//000*0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(4*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(4*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(4*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//00*0*
//***00
//***0*
//***0*
//00*0*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(5*delay);
DRAW31();
_delay_ms(1*delay);
DRAW41();
_delay_ms(4*delay);
DRAW32();
_delay_ms(5*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(2*delay);
}
//0*0**
//**00*
//**0*0
//**0**
//0*0**

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(5*delay);
DRAW21();
_delay_ms(1*delay);
DRAW31();
_delay_ms(4*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(3*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(3*delay);
}
//*0***
//*00**
//*0*0*
//*0**0
//*0***

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(5*delay);
DRAW11();
_delay_ms(1*delay);
DRAW21();
_delay_ms(4*delay);
DRAW12();
_delay_ms(2*delay);
DRAW32();
_delay_ms(3*delay);
DRAW13();
_delay_ms(3*delay);
DRAW43();
_delay_ms(2*delay);
DRAW14();
_delay_ms(4*delay);
}
//0***0
//00**0
//0*0*0
//0**00
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(4*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(1*delay);
DRAW11();
_delay_ms(3*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(1*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing n
// Printing e
//0***0
//00**0
//0*0*0
//0**00
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(4*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(1*delay);
DRAW11();
_delay_ms(3*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(1*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
//***0*
//0**0*
//*0*0*
//**00*
//***0*

for (int i = 0; i < 10; ++i){
_delay_ms(3*delay);
DRAW30();
_delay_ms(2*delay);
DRAW01();
_delay_ms(3*delay);
DRAW31();
_delay_ms(3*delay);
DRAW12();
_delay_ms(2*delay);
DRAW32();
_delay_ms(4*delay);
DRAW23();
_delay_ms(1*delay);
DRAW33();
_delay_ms(5*delay);
DRAW34();
_delay_ms(2*delay);
}
//**0*0
//**0*0
//0*0*0
//*00*0
//**0*0

for (int i = 0; i < 10; ++i){
_delay_ms(2*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(2*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(1*delay);
DRAW23();
_delay_ms(2*delay);
DRAW43();
_delay_ms(3*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0*00
//*0*0*
//*0*00
//00*0*
//*0*00

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(2*delay);
DRAW31();
_delay_ms(3*delay);
DRAW12();
_delay_ms(2*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(1*delay);
DRAW13();
_delay_ms(2*delay);
DRAW33();
_delay_ms(3*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0*000
//0*0**
//0*000
//0*0**
//0*000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(2*delay);
DRAW21();
_delay_ms(3*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(2*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0000
//*0***
//*0000
//*0***
//*0000

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(5*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//00000
//0****
//0000*
//0****
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing e
// Printing  
//00000
//0****
//0000*
//0****
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0000*
//*****
//000**
//*****
//0000*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(7*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(8*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(2*delay);
}
//000**
//*****
//00***
//*****
//000**

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(8*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(9*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(3*delay);
}
//00***
//*****
//0****
//*****
//00***

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(9*delay);
DRAW02();
_delay_ms(10*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(4*delay);
}
//0****
//*****
//*****
//*****
//0****

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(20*delay);
DRAW04();
_delay_ms(5*delay);
}
//*****
//*****
//*****
//*****
//*****

for (int i = 0; i < 10; ++i){
_delay_ms(25*delay);
}
//*****
//*****
//*****
//*****
//*****

for (int i = 0; i < 10; ++i){
_delay_ms(25*delay);
}
// Printing  
// Printing g
//*****
//*****
//*****
//*****
//*****

for (int i = 0; i < 10; ++i){
_delay_ms(25*delay);
}
//*****
//*****
//*****
//*****
//*****

for (int i = 0; i < 10; ++i){
_delay_ms(25*delay);
}
//****0
//****0
//****0
//****0
//****0

for (int i = 0; i < 10; ++i){
_delay_ms(4*delay);
DRAW40();
_delay_ms(5*delay);
DRAW41();
_delay_ms(5*delay);
DRAW42();
_delay_ms(5*delay);
DRAW43();
_delay_ms(5*delay);
DRAW44();
_delay_ms(1*delay);
}
//***00
//***0*
//***0*
//***0*
//***00

for (int i = 0; i < 10; ++i){
_delay_ms(3*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(4*delay);
DRAW31();
_delay_ms(5*delay);
DRAW32();
_delay_ms(5*delay);
DRAW33();
_delay_ms(5*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//**000
//**0**
//**0**
//**0**
//**000

for (int i = 0; i < 10; ++i){
_delay_ms(2*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(5*delay);
DRAW22();
_delay_ms(5*delay);
DRAW23();
_delay_ms(5*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0000
//*0***
//*0**0
//*0***
//*0000

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(3*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(5*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//00000
//0****
//0**00
//0***0
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(3*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(4*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing g
// Printing r
//00000
//0****
//0**00
//0***0
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(3*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(4*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0000*
//*****
//**00*
//***0*
//0000*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(9*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(5*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(2*delay);
}
//000*0
//****0
//*00*0
//**0*0
//000*0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(5*delay);
DRAW41();
_delay_ms(2*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(3*delay);
DRAW23();
_delay_ms(2*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//00*00
//***0*
//00*00
//*0*0*
//00*0*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(4*delay);
DRAW31();
_delay_ms(2*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(2*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(2*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(2*delay);
}
//0*000
//**0**
//0*000
//0*0**
//0*0**

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(3*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(2*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(3*delay);
}
//*0000
//*0***
//*0000
//*0**0
//*0***

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(3*delay);
DRAW43();
_delay_ms(2*delay);
DRAW14();
_delay_ms(4*delay);
}
//0000*
//0***0
//0000*
//0**0*
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(2*delay);
DRAW01();
_delay_ms(4*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing r
// Printing e
//0000*
//0***0
//0000*
//0**0*
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(2*delay);
DRAW01();
_delay_ms(4*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
//000**
//***0*
//000**
//**0**
//***0*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(6*delay);
DRAW31();
_delay_ms(2*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(5*delay);
DRAW23();
_delay_ms(6*delay);
DRAW34();
_delay_ms(2*delay);
}
//00**0
//**0*0
//00**0
//*0**0
//**0*0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(3*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(2*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(3*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(3*delay);
DRAW43();
_delay_ms(3*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//0**00
//*0*0*
//0**00
//0**0*
//*0*00

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(3*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(2*delay);
DRAW31();
_delay_ms(2*delay);
DRAW02();
_delay_ms(3*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(3*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//**000
//0*0**
//**000
//**0**
//0*000

for (int i = 0; i < 10; ++i){
_delay_ms(2*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(2*delay);
DRAW21();
_delay_ms(5*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(3*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0000
//*0***
//*0000
//*0***
//*0000

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(5*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//00000
//0****
//0000*
//0****
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing e
// Printing n
//00000
//0****
//0000*
//0****
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0000*
//*****
//000**
//*****
//0000*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(7*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(8*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(2*delay);
}
//000*0
//****0
//00**0
//****0
//000*0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(5*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(3*delay);
DRAW42();
_delay_ms(5*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//00*0*
//***00
//0**0*
//***0*
//00*0*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(5*delay);
DRAW31();
_delay_ms(1*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(3*delay);
DRAW32();
_delay_ms(5*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(2*delay);
}
//0*0**
//**00*
//**0*0
//**0**
//0*0**

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(5*delay);
DRAW21();
_delay_ms(1*delay);
DRAW31();
_delay_ms(4*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(3*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(3*delay);
}
//*0***
//*00**
//*0*0*
//*0**0
//*0***

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(5*delay);
DRAW11();
_delay_ms(1*delay);
DRAW21();
_delay_ms(4*delay);
DRAW12();
_delay_ms(2*delay);
DRAW32();
_delay_ms(3*delay);
DRAW13();
_delay_ms(3*delay);
DRAW43();
_delay_ms(2*delay);
DRAW14();
_delay_ms(4*delay);
}
//0***0
//00**0
//0*0*0
//0**00
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(4*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(1*delay);
DRAW11();
_delay_ms(3*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(1*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing n
// Printing z
//0***0
//00**0
//0*0*0
//0**00
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(4*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(1*delay);
DRAW11();
_delay_ms(3*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(1*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
//***0*
//0**0*
//*0*0*
//**00*
//***0*

for (int i = 0; i < 10; ++i){
_delay_ms(3*delay);
DRAW30();
_delay_ms(2*delay);
DRAW01();
_delay_ms(3*delay);
DRAW31();
_delay_ms(3*delay);
DRAW12();
_delay_ms(2*delay);
DRAW32();
_delay_ms(4*delay);
DRAW23();
_delay_ms(1*delay);
DRAW33();
_delay_ms(5*delay);
DRAW34();
_delay_ms(2*delay);
}
//**0*0
//**0**
//0*0**
//*00**
//**0*0

for (int i = 0; i < 10; ++i){
_delay_ms(2*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(3*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(4*delay);
DRAW13();
_delay_ms(1*delay);
DRAW23();
_delay_ms(5*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0*00
//*0***
//*0***
//00**0
//*0*00

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(4*delay);
DRAW03();
_delay_ms(1*delay);
DRAW13();
_delay_ms(3*delay);
DRAW43();
_delay_ms(2*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0*000
//0****
//0***0
//0**0*
//0*000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(4*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0000
//****0
//***0*
//**0**
//*0000

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(5*delay);
DRAW41();
_delay_ms(4*delay);
DRAW32();
_delay_ms(4*delay);
DRAW23();
_delay_ms(4*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//00000
//***0*
//**0**
//*0***
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(4*delay);
DRAW31();
_delay_ms(4*delay);
DRAW22();
_delay_ms(4*delay);
DRAW13();
_delay_ms(4*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing z
// Printing e
//00000
//***0*
//**0**
//*0***
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(4*delay);
DRAW31();
_delay_ms(4*delay);
DRAW22();
_delay_ms(4*delay);
DRAW13();
_delay_ms(4*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0000*
//**0**
//*0***
//0****
//0000*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(4*delay);
DRAW21();
_delay_ms(4*delay);
DRAW12();
_delay_ms(4*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(2*delay);
}
//000*0
//*0**0
//0***0
//****0
//000*0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(3*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(4*delay);
DRAW42();
_delay_ms(5*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//00*00
//0**0*
//***00
//***0*
//00*00

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(3*delay);
DRAW31();
_delay_ms(5*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(4*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0*000
//**0**
//**000
//**0**
//0*000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(3*delay);
DRAW21();
_delay_ms(5*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(3*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//*0000
//*0***
//*0000
//*0***
//*0000

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(2*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(2*delay);
DRAW13();
_delay_ms(5*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//00000
//0****
//0000*
//0****
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing e
// Printing n
//00000
//0****
//0000*
//0****
//00000

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(1*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(2*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(1*delay);
DRAW44();
_delay_ms(1*delay);
}
//0000*
//*****
//000**
//*****
//0000*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(1*delay);
DRAW30();
_delay_ms(7*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(8*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(1*delay);
DRAW34();
_delay_ms(2*delay);
}
//000*0
//****0
//00**0
//****0
//000*0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(1*delay);
DRAW20();
_delay_ms(2*delay);
DRAW40();
_delay_ms(5*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(1*delay);
DRAW12();
_delay_ms(3*delay);
DRAW42();
_delay_ms(5*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(1*delay);
DRAW24();
_delay_ms(2*delay);
DRAW44();
_delay_ms(1*delay);
}
//00*0*
//***00
//0**0*
//***0*
//00*0*

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(1*delay);
DRAW10();
_delay_ms(2*delay);
DRAW30();
_delay_ms(5*delay);
DRAW31();
_delay_ms(1*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(3*delay);
DRAW32();
_delay_ms(5*delay);
DRAW33();
_delay_ms(2*delay);
DRAW04();
_delay_ms(1*delay);
DRAW14();
_delay_ms(2*delay);
DRAW34();
_delay_ms(2*delay);
}
//0*0**
//**00*
//**0*0
//**0**
//0*0**

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(2*delay);
DRAW20();
_delay_ms(5*delay);
DRAW21();
_delay_ms(1*delay);
DRAW31();
_delay_ms(4*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(3*delay);
DRAW23();
_delay_ms(3*delay);
DRAW04();
_delay_ms(2*delay);
DRAW24();
_delay_ms(3*delay);
}
//*0***
//*00**
//*0*0*
//*0**0
//*0***

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(5*delay);
DRAW11();
_delay_ms(1*delay);
DRAW21();
_delay_ms(4*delay);
DRAW12();
_delay_ms(2*delay);
DRAW32();
_delay_ms(3*delay);
DRAW13();
_delay_ms(3*delay);
DRAW43();
_delay_ms(2*delay);
DRAW14();
_delay_ms(4*delay);
}
//0***0
//00**0
//0*0*0
//0**00
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(4*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(1*delay);
DRAW11();
_delay_ms(3*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(1*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
// Printing n
// Printing -
//0***0
//00**0
//0*0*0
//0**00
//0***0

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(4*delay);
DRAW40();
_delay_ms(1*delay);
DRAW01();
_delay_ms(1*delay);
DRAW11();
_delay_ms(3*delay);
DRAW41();
_delay_ms(1*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(2*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(3*delay);
DRAW33();
_delay_ms(1*delay);
DRAW43();
_delay_ms(1*delay);
DRAW04();
_delay_ms(4*delay);
DRAW44();
_delay_ms(1*delay);
}
//***0*
//0**0*
//*0*0*
//**00*
//***0*

for (int i = 0; i < 10; ++i){
_delay_ms(3*delay);
DRAW30();
_delay_ms(2*delay);
DRAW01();
_delay_ms(3*delay);
DRAW31();
_delay_ms(3*delay);
DRAW12();
_delay_ms(2*delay);
DRAW32();
_delay_ms(4*delay);
DRAW23();
_delay_ms(1*delay);
DRAW33();
_delay_ms(5*delay);
DRAW34();
_delay_ms(2*delay);
}
//**0**
//**0**
//0*0**
//*00**
//**0**

for (int i = 0; i < 10; ++i){
_delay_ms(2*delay);
DRAW20();
_delay_ms(5*delay);
DRAW21();
_delay_ms(3*delay);
DRAW02();
_delay_ms(2*delay);
DRAW22();
_delay_ms(4*delay);
DRAW13();
_delay_ms(1*delay);
DRAW23();
_delay_ms(5*delay);
DRAW24();
_delay_ms(3*delay);
}
//*0***
//*0***
//*0**0
//00***
//*0***

for (int i = 0; i < 10; ++i){
_delay_ms(1*delay);
DRAW10();
_delay_ms(5*delay);
DRAW11();
_delay_ms(5*delay);
DRAW12();
_delay_ms(3*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(1*delay);
DRAW13();
_delay_ms(5*delay);
DRAW14();
_delay_ms(4*delay);
}
//0****
//0****
//0**00
//0****
//0****

for (int i = 0; i < 10; ++i){
DRAW00();
_delay_ms(5*delay);
DRAW01();
_delay_ms(5*delay);
DRAW02();
_delay_ms(3*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(1*delay);
DRAW03();
_delay_ms(5*delay);
DRAW04();
_delay_ms(5*delay);
}
//*****
//*****
//**000
//*****
//*****

for (int i = 0; i < 10; ++i){
_delay_ms(12*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(1*delay);
DRAW42();
_delay_ms(11*delay);
}
//*****
//*****
//*000*
//*****
//*****

for (int i = 0; i < 10; ++i){
_delay_ms(11*delay);
DRAW12();
_delay_ms(1*delay);
DRAW22();
_delay_ms(1*delay);
DRAW32();
_delay_ms(12*delay);
}




    
    randomDraw(100,1);
    randomDraw(100,2);
    randomDraw(100,3);
    randomDraw(100,4);
    randomDraw(100,5);
    randomDraw(100,6);
    randomDraw(100,7);
    randomDraw(100,8);
    randomDraw(100,9);
    randomDraw(100,10);
    randomDraw(100,11);
    randomDraw(100,12);
    randomDraw(100,13);
    randomDraw(100,14);
    randomDraw(100,15);
    // randomDraw(100,16);
    // randomDraw(100,17);
    // randomDraw(100,18);
    // randomDraw(100,19);
    // randomDraw(100,20);
    // randomDraw(100,21);
    // randomDraw(100,22);
    // randomDraw(100,23);
    // randomDraw(100,24);
    // randomDraw(100,25);
    // randomDraw(100,26);
    randomDraw(100,27);
    randomDraw(100,28);
    randomDraw(100,29);
    randomDraw(100,30);
    randomDraw(100,31);
    randomDraw(100,32);
    randomDraw(100,33);
    randomDraw(100,34);
    randomDraw(100,35);
    // randomDraw(100,36);
    // randomDraw(100,37);
    // randomDraw(100,38);
    // randomDraw(100,39);
    // randomDraw(100,40);
    // randomDraw(100,41);
    // randomDraw(100,42);
    // randomDraw(100,43);
    // randomDraw(100,44);
    // randomDraw(100,45);
    // randomDraw(100,46);
    // randomDraw(100,47);
    // randomDraw(100,48);
    // randomDraw(100,49);
    // randomDraw(100,50);
    // randomDraw(100,51);
    // randomDraw(100,52);
    // randomDraw(100,53);
    // randomDraw(100,54);
    // randomDraw(100,55);
    // randomDraw(100,56);
    // randomDraw(100,57);
    // randomDraw(100,58);
    // randomDraw(100,59);
    // randomDraw(100,60);
    // randomDraw(100,61);
    // randomDraw(100,62);
    // randomDraw(100,63);
    // randomDraw(100,64);
    // randomDraw(100,65);
    // randomDraw(100,66);
    // randomDraw(100,67);
    // randomDraw(100,68);
    // randomDraw(100,69);
    // randomDraw(100,70);
    // randomDraw(100,71);
    // randomDraw(100,72);
    // randomDraw(100,73);
    // randomDraw(100,74);
    // randomDraw(100,75);
    // randomDraw(100,76);
    // randomDraw(100,77);
    // randomDraw(100,78);
    // randomDraw(100,79);
    // randomDraw(100,80);
    // randomDraw(100,81);
    // randomDraw(100,82);
    // randomDraw(100,83);
    // randomDraw(100,84);
    // randomDraw(100,85);
    // randomDraw(100,86);
    // randomDraw(100,87);
    // randomDraw(100,88);
    // randomDraw(100,89);
    // randomDraw(100,90);
    // randomDraw(100,91);
    // randomDraw(100,92);
    // randomDraw(100,93);
    // randomDraw(100,94);
    // randomDraw(100,95);
    // randomDraw(100,96);
    // randomDraw(100,97);
    // randomDraw(100,98);
    // randomDraw(100,99);
    // randomDraw(100,100);
    // randomDraw(100,101);
    // randomDraw(100,102);
    // randomDraw(100,103);
    // randomDraw(100,104);
    // randomDraw(100,105);
    // randomDraw(100,106);
    // randomDraw(100,107);
    // randomDraw(100,108);
    // randomDraw(100,109);
    // randomDraw(100,110);
    // randomDraw(100,111);
    // randomDraw(100,112);
    // randomDraw(100,113);
    // randomDraw(100,114);
    // randomDraw(100,115);
    // randomDraw(100,116);
    // randomDraw(100,117);
    // randomDraw(100,118);
    // randomDraw(100,119);
    // randomDraw(100,120);
    // randomDraw(100,121);
    // randomDraw(100,122);
    // randomDraw(100,123);
    // randomDraw(100,124);
    // randomDraw(100,125);
    // randomDraw(100,126);
    // randomDraw(100,127);
    // randomDraw(100,128);
    // randomDraw(100,129);
    // randomDraw(100,130);
    // randomDraw(100,131);
    // randomDraw(100,132);
    // randomDraw(100,133);
    // randomDraw(100,134);
    // randomDraw(100,135);
    // randomDraw(100,136);
    // randomDraw(100,137);
    // randomDraw(100,138);
    // randomDraw(100,139);
    // randomDraw(100,140);
    // randomDraw(100,141);
    // randomDraw(100,142);
    // randomDraw(100,143);
    // randomDraw(100,144);
    // randomDraw(100,145);
    // randomDraw(100,146);
    // randomDraw(100,147);
    // randomDraw(100,148);
    // randomDraw(100,149);
    // randomDraw(100,150);
    // randomDraw(100,151);
    // randomDraw(100,152);
    // randomDraw(100,153);
    // randomDraw(100,154);
    // randomDraw(100,155);
    // randomDraw(100,156);
    // randomDraw(100,157);
    // randomDraw(100,158);
    // randomDraw(100,159);
    // randomDraw(100,160);
    // randomDraw(100,161);
    // randomDraw(100,162);
    // randomDraw(100,163);
    // randomDraw(100,164);
    // randomDraw(100,165);
    // randomDraw(100,166);
    // randomDraw(100,167);
    // randomDraw(100,168);
    // randomDraw(100,169);
    // randomDraw(100,170);
    // randomDraw(100,171);
    // randomDraw(100,172);
    // randomDraw(100,173);
    // randomDraw(100,174);
    // randomDraw(100,175);
    // randomDraw(100,176);
    // randomDraw(100,177);
    // randomDraw(100,178);
    // randomDraw(100,179);
    // randomDraw(100,180);
    // randomDraw(100,181);
    // randomDraw(100,182);
    // randomDraw(100,183);
    // randomDraw(100,184);
    // randomDraw(100,185);
    // randomDraw(100,186);
    // randomDraw(100,187);
    // randomDraw(100,188);
    // randomDraw(100,189);
    // randomDraw(100,190);
    // randomDraw(100,191);
    // randomDraw(100,192);
    // randomDraw(100,193);
    // randomDraw(100,194);
    // randomDraw(100,195);
    // randomDraw(100,196);
    // randomDraw(100,197);
    // randomDraw(100,198);
    // randomDraw(100,199);
    // randomDraw(100,200);
    // randomDraw(100,201);
    // randomDraw(100,202);
    // randomDraw(100,203);
    // randomDraw(100,204);
    // randomDraw(100,205);
    // randomDraw(100,206);
    // randomDraw(100,207);
    // randomDraw(100,208);
    // randomDraw(100,209);
    // randomDraw(100,210);
    // randomDraw(100,211);
    // randomDraw(100,212);
    // randomDraw(100,213);
    // randomDraw(100,214);
    // randomDraw(100,215);
    // randomDraw(100,216);
    // randomDraw(100,217);
    // randomDraw(100,218);
    // randomDraw(100,219);
    // randomDraw(100,220);
    // randomDraw(100,221);
    // randomDraw(100,222);
    // randomDraw(100,223);
    // randomDraw(100,224);
    // randomDraw(100,225);
    // randomDraw(100,226);
    // randomDraw(100,227);
    // randomDraw(100,228);
    // randomDraw(100,229);
    // randomDraw(100,230);
    // randomDraw(100,231);
    // randomDraw(100,232);
    // randomDraw(100,233);
    // randomDraw(100,234);
    // randomDraw(100,235);
    // randomDraw(100,236);
    // randomDraw(100,237);
    // randomDraw(100,238);
    // randomDraw(100,239);
    // randomDraw(100,240);
    // randomDraw(100,241);
    // randomDraw(100,242);
    // randomDraw(100,243);
    // randomDraw(100,244);
    // randomDraw(100,245);
    // randomDraw(100,246);
    // randomDraw(100,247);
    // randomDraw(100,248);
    // randomDraw(100,249);
    // randomDraw(100,250);
    // randomDraw(100,251);
    // randomDraw(100,252);
    // randomDraw(100,253);
    // randomDraw(100,254);
    // randomDraw(100,255);
    // randomDraw(100,256);
    // randomDraw(100,257);
    // randomDraw(100,258);
    // randomDraw(100,259);
    // randomDraw(100,260);
    // randomDraw(100,261);
    // randomDraw(100,262);
    // randomDraw(100,263);
    // randomDraw(100,264);
    // randomDraw(100,265);
    // randomDraw(100,266);
    // randomDraw(100,267);
    // randomDraw(100,268);
    // randomDraw(100,269);
    // randomDraw(100,270);
    // randomDraw(100,271);
    // randomDraw(100,272);
    // randomDraw(100,273);
    // randomDraw(100,274);
    // randomDraw(100,275);
    // randomDraw(100,276);
    // randomDraw(100,277);
    // randomDraw(100,278);
    // randomDraw(100,279);
    // randomDraw(100,280);
    // randomDraw(100,281);
    // randomDraw(100,282);
    // randomDraw(100,283);
    // randomDraw(100,284);
    // randomDraw(100,285);
    // randomDraw(100,286);
    // randomDraw(100,287);
    // randomDraw(100,288);
    // randomDraw(100,289);
    // randomDraw(100,290);
    // randomDraw(100,291);
    // randomDraw(100,292);
    // randomDraw(100,293);
    // randomDraw(100,294);
    // randomDraw(100,295);
    // randomDraw(100,296);
    // randomDraw(100,297);
    // randomDraw(100,298);
    // randomDraw(100,299);
    // randomDraw(100,300);
    // randomDraw(100,301);
    // randomDraw(100,302);
    // randomDraw(100,303);
    // randomDraw(100,304);
    // randomDraw(100,305);
    // randomDraw(100,306);
    // randomDraw(100,307);
    // randomDraw(100,308);
    // randomDraw(100,309);
    // randomDraw(100,310);
    // randomDraw(100,311);
    // randomDraw(100,312);
    // randomDraw(100,313);
    // randomDraw(100,314);
    // randomDraw(100,315);
    // randomDraw(100,316);
    // randomDraw(100,317);
    // randomDraw(100,318);
    // randomDraw(100,319);
    // randomDraw(100,320);
    // randomDraw(100,321);
    // randomDraw(100,322);
    // randomDraw(100,323);
    // randomDraw(100,324);
    // randomDraw(100,325);
    // randomDraw(100,326);
    // randomDraw(100,327);
    // randomDraw(100,328);
    // randomDraw(100,329);
    // randomDraw(100,330);
    // randomDraw(100,331);
    // randomDraw(100,332);
    // randomDraw(100,333);
    // randomDraw(100,334);
    // randomDraw(100,335);
    // randomDraw(100,336);
    // randomDraw(100,337);
    // randomDraw(100,338);
    // randomDraw(100,339);
    // randomDraw(100,340);
    // randomDraw(100,341);
    // randomDraw(100,342);
    // randomDraw(100,343);
    // randomDraw(100,344);
    // randomDraw(100,345);
    // randomDraw(100,346);
    // randomDraw(100,347);
    // randomDraw(100,348);
    // randomDraw(100,349);
    // randomDraw(100,350);
    // randomDraw(100,351);
    // randomDraw(100,352);
    // randomDraw(100,353);
    // randomDraw(100,354);
    // randomDraw(100,355);
    // randomDraw(100,356);
    // randomDraw(100,357);
    // randomDraw(100,358);
    // randomDraw(100,359);
    // randomDraw(100,360);
    // randomDraw(100,361);
    // randomDraw(100,362);
    // randomDraw(100,363);
    // randomDraw(100,364);
    // randomDraw(100,365);
    // randomDraw(100,366);
    // randomDraw(100,367);
    // randomDraw(100,368);
    // randomDraw(100,369);
    // randomDraw(100,370);
    // randomDraw(100,371);
    // randomDraw(100,372);
    // randomDraw(100,373);
    // randomDraw(100,374);
    // randomDraw(100,375);
    // randomDraw(100,376);
    // randomDraw(100,377);
    // randomDraw(100,378);
    // randomDraw(100,379);
    // randomDraw(100,380);
    // randomDraw(100,381);
    // randomDraw(100,382);
    // randomDraw(100,383);
    // randomDraw(100,384);
    // randomDraw(100,385);
    // randomDraw(100,386);
    // randomDraw(100,387);
    // randomDraw(100,388);
    // randomDraw(100,389);
    // randomDraw(100,390);
    // randomDraw(100,391);
    // randomDraw(100,392);
    // randomDraw(100,393);
    // randomDraw(100,394);
    // randomDraw(100,395);
    // randomDraw(100,396);
    // randomDraw(100,397);
    // randomDraw(100,398);
    // randomDraw(100,399);
    // randomDraw(100,400);
    // randomDraw(100,401);
    // randomDraw(100,402);
    // randomDraw(100,403);
    // randomDraw(100,404);
    // randomDraw(100,405);
    // randomDraw(100,406);
    // randomDraw(100,407);
    // randomDraw(100,408);
    // randomDraw(100,409);
    // randomDraw(100,410);
    // randomDraw(100,411);
    // randomDraw(100,412);
    // randomDraw(100,413);
    // randomDraw(100,414);
    // randomDraw(100,415);
    // randomDraw(100,416);
    // randomDraw(100,417);
    // randomDraw(100,418);
    // randomDraw(100,419);
    // randomDraw(100,420);
    // randomDraw(100,421);
    // randomDraw(100,422);
    // randomDraw(100,423);
    // randomDraw(100,424);
    // randomDraw(100,425);
    // randomDraw(100,426);
    // randomDraw(100,427);
    // randomDraw(100,428);
    // randomDraw(100,429);
    // randomDraw(100,430);
    // randomDraw(100,431);
    // randomDraw(100,432);
    // randomDraw(100,433);
    // randomDraw(100,434);
    // randomDraw(100,435);
    // randomDraw(100,436);
    // randomDraw(100,437);
    // randomDraw(100,438);
    // randomDraw(100,439);
    // randomDraw(100,440);
    // randomDraw(100,441);
    // randomDraw(100,442);
    // randomDraw(100,443);
    // randomDraw(100,444);
    // randomDraw(100,445);
    // randomDraw(100,446);
    // randomDraw(100,447);
    // randomDraw(100,448);
    // randomDraw(100,449);
    // randomDraw(100,450);
    // randomDraw(100,451);
    // randomDraw(100,452);
    // randomDraw(100,453);
    // randomDraw(100,454);
    // randomDraw(100,455);
    // randomDraw(100,456);
    // randomDraw(100,457);
    // randomDraw(100,458);
    // randomDraw(100,459);
    // randomDraw(100,460);
    // randomDraw(100,461);
    // randomDraw(100,462);
    // randomDraw(100,463);
    // randomDraw(100,464);
    // randomDraw(100,465);
    // randomDraw(100,466);
    // randomDraw(100,467);
    // randomDraw(100,468);
    // randomDraw(100,469);
    // randomDraw(100,470);
    // randomDraw(100,471);
    // randomDraw(100,472);
    // randomDraw(100,473);
    // randomDraw(100,474);
    // randomDraw(100,475);
    // randomDraw(100,476);
    // randomDraw(100,477);
    // randomDraw(100,478);
    // randomDraw(100,479);
    // randomDraw(100,480);
    // randomDraw(100,481);
    // randomDraw(100,482);
    // randomDraw(100,483);
    // randomDraw(100,484);
    // randomDraw(100,485);
    // randomDraw(100,486);
    // randomDraw(100,487);
    // randomDraw(100,488);
    // randomDraw(100,489);
    // randomDraw(100,490);
    // randomDraw(100,491);
    // randomDraw(100,492);
    // randomDraw(100,493);
    // randomDraw(100,494);
    // randomDraw(100,495);
    // randomDraw(100,496);
    // randomDraw(100,497);
    // randomDraw(100,498);
    // randomDraw(100,499);
    // randomDraw(100,500);
    // randomDraw(100,501);
    // randomDraw(100,502);
    // randomDraw(100,503);
    // randomDraw(100,504);
    // randomDraw(100,505);
    // randomDraw(100,506);
    // randomDraw(100,507);
    // randomDraw(100,508);
    // randomDraw(100,509);
    // randomDraw(100,510);
    // randomDraw(100,511);
    // randomDraw(100,512);
    // randomDraw(100,513);
    // randomDraw(100,514);
    // randomDraw(100,515);
    // randomDraw(100,516);
    // randomDraw(100,517);
    // randomDraw(100,518);
    // randomDraw(100,519);
    // randomDraw(100,520);
    // randomDraw(100,521);
    // randomDraw(100,522);
    // randomDraw(100,523);
    // randomDraw(100,524);
    // randomDraw(100,525);
    // randomDraw(100,526);
    // randomDraw(100,527);
    // randomDraw(100,528);
    // randomDraw(100,529);
    // randomDraw(100,530);
    // randomDraw(100,531);
    // randomDraw(100,532);
    // randomDraw(100,533);
    // randomDraw(100,534);
    // randomDraw(100,535);
    // randomDraw(100,536);
    // randomDraw(100,537);
    // randomDraw(100,538);
    // randomDraw(100,539);
   






    }
    return 0; 
}


