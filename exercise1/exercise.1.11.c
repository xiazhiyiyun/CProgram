#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
    int state,nc,nl,nw,c;
    nc = nl = nw =0;
    state = OUT;

    while((c=getchar()) != EOF){
        
	nc++;

	if(c == ' ' || c == '\t' || c == '\n'){
	    
	    state = OUT;
	    if (c=='\n') nl++;
	}
	else if(state == OUT) {

	    nw++;
	    state = IN;
	}
    
    }

    printf("nc = %d,nw = %d,nl = %d",nc,nw,nl);
    return 0;
}

