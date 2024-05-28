// INCLUDES

#include <stdlib.h>
#include <time.h>
#include "rand.h"

// RAND FUNCTION

float rando(float min, float max){
	srand(time(0));
	float r =(((float)rand() / RAND_MAX) * (max - min + 1)) + min;
	return r;
}
