// INCLUDES

#include "factorial.c"

// PERMUTATION EQUATION

float permutation(float n, float k){
	float x = factorial(n);
	float y = factorial(n - k);
	float p = x / y;
	return p;
}
