// INCLUDES

#include "factorial.c"
#include "permutation.h"

// PERMUTATION EQUATION

float permutation(float n, float k){
	float x = factorial(n);
	float y = factorial(n - k);
	float p = x / y;
	return p;
}
