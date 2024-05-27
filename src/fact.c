// INCLUDES

#include "fact.h"

// FACTORIAL FUNCTION

float fact(float x){
	float f = 1;
	while(x != 0){
		f *= x;
		x--;
	}
	return f;
}
