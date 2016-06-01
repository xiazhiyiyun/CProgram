#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int state,c,b;
    state = OUT;
    b = '\n';

    while((c=getchar()) != EOF){
        

	if(c == ' ' || c == '\t' || c == '\n'){
	    
	    if(state == IN){ 
	        putchar(b);
	        state = OUT;
	    }
	}
	else if(state == OUT){
	    putchar(c);
	    state = IN;
	}
	else putchar(c);
    }

    return 0;
}

