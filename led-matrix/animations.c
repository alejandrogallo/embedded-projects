
#include "avr/io.h"
#include <util/delay.h>
#include "animations.h"
#include "pinDefinition.h"


#define ANIMATION1(){DRAW00();_delay_ms(100);DRAW11();_delay_ms(100);DRAW22();_delay_ms(100);DRAW33();_delay_ms(100);DRAW44();_delay_ms(100);DRAW33();_delay_ms(100);DRAW22();_delay_ms(100);DRAW11();_delay_ms(100);DRAW00();_delay_ms(100);DRAW10();_delay_ms(100);DRAW20();_delay_ms(100);DRAW30();_delay_ms(100);DRAW40();_delay_ms(100);DRAW31();_delay_ms(100);DRAW22();_delay_ms(100);DRAW13();_delay_ms(100);DRAW04();_delay_ms(100);DRAW13();_delay_ms(100);DRAW22();_delay_ms(100);DRAW31();_delay_ms(100);DRAW40();_delay_ms(100);}


void particleWalk(){
	
}


void drawFromPositionVector(uint8_t position[2]){
	if ( (position[0]==0) && (position[1]==0) )
	{
		DRAW00();
	}
	else if ( (position[0]==0) && (position[1]==1) )
	{
		DRAW01();
	}
	else if ( (position[0]==0) && (position[1]==2) )
	{
		DRAW02();
	}
	else if ( (position[0]==0) && (position[1]==3) )
	{
		DRAW03();
	}
	else if ( (position[0]==1) && (position[1]==0) )
	{
		DRAW10();
	}
	else if ( (position[0]==1) && (position[1]==1) )
	{
		DRAW11();
	}
	else if ( (position[0]==1) && (position[1]==2) )
	{
		DRAW12();
	}
	else if ( (position[0]==1) && (position[1]==3) )
	{
		DRAW13();
	}
	else if ( (position[0]==2) && (position[1]==0) )
	{
		DRAW20();
	}
	else if ( (position[0]==2) && (position[1]==1) )
	{
		DRAW21();
	}
	else if ( (position[0]==2) && (position[1]==2) )
	{
		DRAW22();
	}
	else if ( (position[0]==2) && (position[1]==3) )
	{
		DRAW23();
	}
	else if ( (position[0]==3) && (position[1]==0) )
	{
		DRAW30();
	}
	else if ( (position[0]==3) && (position[1]==1) )
	{
		DRAW31();
	}
	else if ( (position[0]==3) && (position[1]==2) )
	{
		DRAW32();
	}
	else if ( (position[0]==3) && (position[1]==3) )
	{
		DRAW33();
	}
	else {
		clearScreen();
	}
}




void randomDraw(uint8_t duration, uint16_t randSeed){
    //255/5 
    //unsigned int randSeed = 124;   


    for (int i = 0; i < duration; ++i)
    {
    randSeed = (randSeed*89+1009)%255;
    if (randSeed<51)
    {
        randSeed = (randSeed*29+109)%255;
        if (randSeed<51)
        {
            DRAW00();
        }
        else if((51<randSeed)&&(randSeed<102)){
            DRAW01();
        }
        else if((102<randSeed)&&(randSeed<153)){
            DRAW02();
        }
        else if((102<randSeed)&&(randSeed<204)){
            DRAW03();
        }
        else if(204<randSeed){
            DRAW04();
        }
    }
    else if((51<randSeed)&&(randSeed<102)){
        randSeed = (randSeed*29+109)%255;
        if (randSeed<51)
        {
            DRAW10();
        }
        else if((51<randSeed)&&(randSeed<102)){
            DRAW11();
        }
        else if((102<randSeed)&&(randSeed<153)){
            DRAW12();
        }
        else if((102<randSeed)&&(randSeed<204)){
            DRAW13();
        }
        else if(204<randSeed){
            DRAW14();
        }
    }
    else if((102<randSeed)&&(randSeed<153)){
        randSeed = (randSeed*29+109)%255;
        if (randSeed<51)
        {
            DRAW20();
        }
        else if((51<randSeed)&&(randSeed<102)){
            DRAW21();
        }
        else if((102<randSeed)&&(randSeed<153)){
            DRAW22();
        }
        else if((102<randSeed)&&(randSeed<204)){
            DRAW23();
        }
        else if(204<randSeed){
            DRAW24();
        }
    }
    else if((102<randSeed)&&(randSeed<204)){
        randSeed = (randSeed*29+109)%255;
        if (randSeed<51)
        {
            DRAW30();
        }
        else if((51<randSeed)&&(randSeed<102)){
            DRAW31();
        }
        else if((102<randSeed)&&(randSeed<153)){
            DRAW32();
        }
        else if((102<randSeed)&&(randSeed<204)){
            DRAW33();
        }
        else if(204<randSeed){
            DRAW34();
        }
    }
    else if(204<randSeed){
        randSeed = (randSeed*29+109)%255;
        if (randSeed<51)
        {
            DRAW40();
        }
        else if((51<randSeed)&&(randSeed<102)){
            DRAW41();
        }
        else if((102<randSeed)&&(randSeed<153)){
            DRAW42();
        }
        else if((102<randSeed)&&(randSeed<204)){
            DRAW43();
        }
        else if(204<randSeed){
            DRAW44();
        }
    }
    _delay_ms(1);
    }  
}