#include "RCC.h"
//#include "GPIO.h"

void gpioUnresetEnableClock(){

//	RCC_reg->AHB2RSTR &= ~(1 << 7);
	RCC_reg->AHB2ENR |= 0x0000040;

}


