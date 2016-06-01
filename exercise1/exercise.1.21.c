#include <stdio.h>
#define TABINC 8

int main(){

    int nb,nt,pos;
    char c;
    nb = nt = 0;
    pos = 1;
    while((c = getchar()) != EOF){
        if(c == ' '){
	    nb++;
	    pos++;
	}else{ 
		if(nb > 0){
                    while( ( pos + ( TABINC - ( pos - 1 ) % TABINC) ) <= pos + nb ){
		   	putchar('\t');
			pos += TABINC - ( pos - 1 ) % TABINC;
			nb = nb - (TABINC - ( pos - 1 ) % TABINC);
		    }    

		  while(nb>0){
		   /* if(c == '\t'){
                        putchar(c);
		        pos += TABINC - ( pos - 1 ) % TABINC;
			nb = 0;
		     }
	    	    else {
		        putchar(' ');
			pos++;
			nb--;
		    }*/
		        putchar(' ');
			pos++;
			nb--;
		  }
		}
		    if(c == '\n'){
	                putchar(c);
	                pos = 1;
		    }else if(c == '\t'){
                        putchar(c);
	                pos += TABINC - ( pos - 1 ) % TABINC;
	            }
		    else{
	                putchar(c);
		        pos++;
          	    }
	}
    }
    return 0;
}
