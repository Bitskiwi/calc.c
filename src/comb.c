// INCLUDES

#include "perm.c"
#include "comb.h"

// COMBINATION FUNCTION

float comb(float favor, float total){
	float c = perm(total, favor) / fact(favor);
	return c;
}
