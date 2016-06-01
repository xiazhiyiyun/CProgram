#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

int main()
{
    
    int i,j;
    int wl[MAXWORD];
    int c,nc,state,maxvalue;
    int overflow,len;

    state = OUT;
    len = 0;
    nc = maxvalue = overflow = 0;
    for(i = 0;i < MAXWORD;i++){
    
       wl[i] = 0;
    }   

    while((c = getchar()) != EOF){
    
       if(c == ' ' || c == '\t' || c == '\n'){
       
	  state = OUT;
          if(nc > 0){
	     if(nc < MAXWORD)
	         wl[nc]++;
	     else overflow++;
	  }
	  nc = 0;
       }
       else if(state == OUT) {
           state = IN;
	   nc = 1;
       }
       else nc++;
    }

    maxvalue = 0;
    for(i = 1;i < MAXWORD;i++){
    
        if(maxvalue<wl[i])
	   maxvalue = wl[i];
    }

    for(i = MAXHIST;i > 0;i--){
    
        for(j = 1;j < MAXWORD;j++){

	    len =  wl[j] * 15 / maxvalue;
	    if(len >= i)
	    
	       printf(" * ");
	    else 
	       printf("   ");
	}

	printf("\n");

    }
    for(j = 1;j < MAXWORD;j++)
        printf(" %d ",j);

	printf("\n");

    for(j = 1;j < MAXWORD;j++)
        printf("% d ",wl[j]);

	printf("\n");

    if(overflow>0)
       printf("overflow = %d",overflow);

    return 0;
}
