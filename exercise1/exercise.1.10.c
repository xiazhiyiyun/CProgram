#include <stdio.h>

int main()
{
    int c;

    while((c=getchar())!=EOF){
    
        if(c != '\t' && c != '\b' && c!= '\\' && c != '\n')
	    putchar(c);
	else if(c == '\t')
	    printf("\\t");
	else if(c == '\b') 
	    printf("\\b");
	else if(c == '\n')
	    printf("\\n");
	else printf("\\\\");
	
    }

    return 0;
}
