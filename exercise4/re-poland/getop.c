#include <ctype.h>
#include <stdio.h>
#define NUMBER '0'

int getch(void);
void ungetch(int c);

int getop(char s[]){
    int c;
    int i = 0;
    while((s[0] = c = getch()) == ' ' || c == '\t') {
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
