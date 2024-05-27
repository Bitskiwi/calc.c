// INCLUDES

#include "fact.c"
#include "perm.h"

// PERMUTATION EQUATION

float perm(float favor, float total){
	float p = fact(total) / fact(total - favor);
	return p;
}
