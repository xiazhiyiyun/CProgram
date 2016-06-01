#include <stdio.h>
#include <stdlib.h>
#define MAXOP 100
#define NUMBER '0'

void push(double f);
double pop(void);
int getop(char s[]);

int main(){
    int type;
    double op2;
    char s[MAXOP];
    while((type = getop(s)) != EOF){
        switch(type) {
            case NUMBER:
	        push(atof(s));
	        break;
	    case '+':
	        push(pop()+pop());
	        break;
	    case '-':
	        op2 = pop();
	        push(pop()-op2);
	        break;
	    case '*':
	        push(pop()*pop());
	        break;
	    case '/':
	        op2 = pop();
	        push(pop()/op2);
	        break;
  	    case '\n':
	        printf("%f\n",pop());
	        break;
	    default:
	        printf("error in push():unknow command %s\n",s);
	        break;
	}
    }
    return 0;
}
#include <ctype.h>
#include <stdio.h>
#define NUMBER '0'

int getch(void);
void ungetch(int c);

int getop(char s[]){
    int c;
    int i = 0;
    while((s[0] = c = getch()) == '\t' || isspace(c)){
        ;                                                //skip the blank character
    }
    s[1] = '\0';
    if(!isdigit(c) && c != '.')
        return c;
    i = 0;
    if(isdigit(c)){
        while(isdigit(s[++i] = c = getch()))            //collect the integer part
	    ;
    }
    if(c == '.'){
        while(isdigit(s[++i] = c = getch()))            //collect the fraction part   
	    ;
    }
    s[i] = '\0';
    if(c != EOF){
        ungetch(c);
    }
    return NUMBER;
}
#include<stdio.h>
#include<stdlib.h>

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f){
    if(sp < MAXVAL)
        val[sp++] = f;
    else{
        printf("error in push():stack full can't push %g\n",f);
	exit(1);
    }
}

double pop(void){
       printf("%d\n",sp);
    if(sp > 0 && sp <= 100){
        return val[--sp];
    }
    else{ 
        printf("error in pop():stack empty \n");
	return 0.0;
    }
}

#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void){
    return(bufp > 0)?buf[--bufp]:getchar();
}

void ungetch(int c){
    if(bufp >= BUFSIZE){
        printf("error in ungetch:too many character\n");
	exit(1);
    }
    else
        buf[bufp++] = c;
}
