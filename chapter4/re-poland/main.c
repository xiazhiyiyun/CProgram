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
	        printf("NUMBER\n");
	        push(atof(s));
	        break;
	    case '+':
	        printf("+\n");
	        push(pop()+pop());
	        break;
	    case '-':
	        printf("-\n");
	        op2 = pop();
	        push(pop()-op2);
	        break;
	    case '*':
	        printf("*\n");
	        push(pop()*pop());
	        break;
	    case '/':
	        printf("/\n");
	        op2 = pop();
	        push(pop()/op2);
	        break;
  	    case '\n':
	        printf("\\n\n");
	        printf("\t%.g\n",pop());
	        break;
	    default:
	        printf("default\n");
	        printf("error in push():unknow command %s\n",s);
	        break;
	}
    }
    return 0;
}
