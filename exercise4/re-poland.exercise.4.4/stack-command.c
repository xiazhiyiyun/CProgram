#include <stdio.h>
#include "push-pop.h"

void push(double f);
double pop(void);

extern int sp;

void printStack(void){
    printf("The stack element is %.8g.\n",pop());
}

double copyStack(void){
    return pop();
}

void clearStack(void){
    if(sp > 0 && sp <= 100){
        sp--;
    }
}

void exchange(void){
    double op1,op2;
    op2 = pop();
    op1 = pop();
    sp -= 2; 
    push(op2);
    push(op1);
}

void clear(void){
    sp = 0;
}
