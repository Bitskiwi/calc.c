// INCLUDES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "comb.c"
#include "exp.c"
#include "percof.c"

// CHECK COMMAND

int cmp_cmd(char *list[], char *target){
	if(strcmp(list[1], target) == 0){
		return 1;
	}
	return 0;
}

// PARSE ARGS

float cmd(char *list[]){
	float x;
	if(cmp_cmd(list, "add")){
		x = atof(list[2]) + atof(list[3]);
	}
	if(cmp_cmd(list, "sub")){
		x = atof(list[2]) - atof(list[3]);
	}
	if(cmp_cmd(list, "mul")){
		x = atof(list[2]) * atof(list[3]);
	}
	if(cmp_cmd(list, "div")){
		x = atof(list[2]) / atof(list[3]);
	}
	if(cmp_cmd(list, "exp")){
		x = expo(atof(list[2]), atof(list[3]));
	}
	if(cmp_cmd(list, "percof")){
		x = percof(atof(list[2]), atof(list[3]));
	}
	if(cmp_cmd(list, "fact")){
		x = fact(atof(list[2]));
	}
	if(cmp_cmd(list, "perm")){
		x = perm(atof(list[2]), atof(list[3]));
	}
	if(cmp_cmd(list, "comb")){
		x = comb(atof(list[2]), atof(list[3]));
	}
	return x;
}

// MAIN FUNCTION

int main(int argc, char *argv[]){
	float x = cmd(argv);
	printf("%f", x);
	printf("\n");
}
