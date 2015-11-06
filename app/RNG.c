#include "RNG.h"



void randomNumberGeneratorEnable(){
	RNG_reg->RNG_CR |= 4;

}


