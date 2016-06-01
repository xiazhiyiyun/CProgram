#include <stdio.h>
#include <ctype.h>

#define SIZE 10

int getch(void);
void ungetch(int c);

int main(){
    int n,len,array[SIZE];
    for(n = 0;n < SIZE && getint( &array[n] ) != EOF;n++)
    ;
    len = n;

    for(n=0;n<len;n++){
        printf("%d ",array[n]);
        printf("\n");
    }
}
int getint(int *pn){
    int c,d,sign;
    //skip the space character
    while( isspace(c = getch()))
        ;

    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
	ungetch(c);
        return 0;
    }
    sign = ( c == '-' ? -1 : 1 );
    if(c == '+' || c == '-'){
        d = c;
        if(!isdigit(c = getch())){
	    if(c != EOF)
	        ungetch(c);
	    ungetch(d);
	    return d;
	}
    }

	for(*pn=0; isdigit(c);c = getch()){
            *pn = *pn * 10 + (c - '0');
	}
	    *pn *= sign;
	if(c != EOF)
	    ungetch(c);
	return c;
}
/*
int getint(int *pn){
    int c,d,sign;
    //skip the space character
    while( isspace(c = getch()))
        ;

    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
	ungetch(c);
        return 0;
    }
    sign = ( c == '-' ? -1 : 1 );

    if(c == '+' || c == '-'){
        d = c;
        if(isdigit(c = getch())){

	    for(*pn=0; isdigit(c);c = getch()){
	       *pn = *pn * 10 + (c - '0');
	    }
	    *pn *= sign;
            if(c != EOF){
                ungetch(c);
            }
            return c;
	}

	else{
 	    if(c != EOF)
	        ungetch(c);
	    ungetch(d);
	    return d;
	}
    }
    return c;
}
*/
