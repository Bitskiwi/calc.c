// INCLUDES

#include "permutation.c"
#include "combination.h"

// COMBINATION FUNCTION

float combination(float n, float k){
	float c = permutation(n, k) / factorial(k);
	return c;
}
