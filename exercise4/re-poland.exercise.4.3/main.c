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
    double test;
    int op2_int = 0;
    int op1_int = 0;
    char s[MAXOP];
    while((type = getop(s)) != EOF){
        switch(type) {
            case NUMBER:
	        push(atof(s));
		test = atof(s);
	        break;
	    case '+':
	        push(pop() + pop());
	        break;
	    case '-':
	        op2 = pop();
	        push(pop() - op2);
	        break;
	    case '*':
	        push(pop() * pop());
	        break;
	    case '/':
	        op2 = pop();
		if( op2 != 0.0)
	            push(pop() / op2);
		else
		    printf("error:zero divisor\n");
	        break;
	    case '%':
	        op2_int = (int)(pop());
		op1_int = (int)(pop());
		if(op2_int != 0)
		    push((double)( op1_int % op2_int ));
		else
		    printf("error:zero modulo\n");
		break;
  	    case '\n':
	        printf("%.8g\n",pop());
	        break;
	    default:
	        printf("error in push():unknow command %s\n",s);
	        break;
	}
    }
    return 0;
}
