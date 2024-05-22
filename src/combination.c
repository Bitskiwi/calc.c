// INCLUDES

#include "permutation.c"

// COMBINATION FUNCTION

float combination(float n, float k){
	float c = permutation(n, k) / factorial(k);
	return c;
}
