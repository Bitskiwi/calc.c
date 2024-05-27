// INCLUDES

#include <stdio.h>
#include "exp.h"

// EXPONENT

float expo(float x, float exponent){
	float e = 1;
	for(int i = 0; i < exponent; i++){
		e *= x;
	}
	return e;
}
