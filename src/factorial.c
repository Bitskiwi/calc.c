// INCLUDES

#include "factorial.h"

// FACTORIAL FUNCTION

float factorial(float x){
	float f = 1;
	while(x != 0){
		f *= x;
		x--;
	}
	return f;
}
