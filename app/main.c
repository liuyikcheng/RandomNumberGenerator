#include "stm32f4xx.h"
#include "RNG.h"
#include "RCC.h"
#include <stdint.h>


void delay(uint32_t delayCount){
	while(delayCount != 0){
		delayCount--;
	}
}

int main(void)
{
	uint32_t a = 0;

	gpioUnresetEnableClock();
	//randomNumberGeneratorEnable();
	RNG_reg->RNG_CR |= 4;

	delay(500000);

	a = RNG_reg->RND_DR;

}
