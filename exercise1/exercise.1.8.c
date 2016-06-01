#include <stdio.h>

int main()
{
    int nwhite,ntab,nl;
    int c;
    nwhite = ntab = nl =0;

    while((c = getchar()) != EOF){
    
        if(c == ' ')
	    nwhite++;
	else if(c == '\t')
	    ntab++;
	else if(c == '\n')
	    nl++;
    }

    printf("nwhite = %d;ntab = %d;nl = %d\n",nwhite,ntab,nl );
    return 0;
}
