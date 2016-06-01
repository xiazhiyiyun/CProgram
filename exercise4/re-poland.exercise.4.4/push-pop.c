#include "push-pop.h"

void push(double f){
    if(sp < MAXVAL)
        val[sp++] = f;
    else{
        printf("error in push():stack full can't push %g\n",f);
	exit(1);
    }
}

double pop(void){
    if(sp > 0 && sp <= 100){
        return val[--sp];
    }
    else{ 
        printf("error in pop():stack empty \n");
	return 0.0;
    }
}

