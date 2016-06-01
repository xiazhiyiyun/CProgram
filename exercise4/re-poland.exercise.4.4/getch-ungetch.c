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
