#include <stdio.h>
#include <ctype.h>

#define SIZE 10

int getch(void);
void ungetch(int c);

int main(){
    int n,len;
    double array[SIZE];
    for(n = 0;n < SIZE && getfloat( &array[n] ) != EOF;n++)
    ;
    len = n;

    for(n=0;n<len;n++){
        printf("%.3f ",array[n]);
        printf("\n");
    }
}
int getfloat(double *pn){
    int c,d,sign;
    double power;

    while(isspace(c = getch()))
        ;

    if(!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.'){
	ungetch(c);
        return 0;
    }

    sign = ( c == '-' ? -1 : 1);
    if(c == '+' || c == '-'){
        d = c;
        if(!isdigit(c = getch())){
	    if(c != EOF)
	        ungetch(c);
	    ungetch(d);
	    return d;
	}
    }
    for(*pn = 0;isdigit(c);c= getch()){
        *pn = *pn * 10.0 + (c -'0');
    }

    if(c == '.')
        c = getch();
    for(power = 1.0;isdigit(c);c=getch()){
        *pn = *pn * 10.0 + (c -'0');
	power = 10.0 * power;
    }
    *pn = *pn * sign / power;
    if(c != EOF)
        ungetch(c);
    return c;
}
