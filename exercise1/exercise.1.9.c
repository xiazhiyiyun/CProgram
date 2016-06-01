#include <stdio.h>

int main()
{
    int last,c;
    last = EOF;

    while((c = getchar()) != EOF){
    
       if(c != ' ') putchar(c);
       else{
           if(last!=' '){
                putchar(c);
           }
	   last = ' ';
       }

    }


    return 0;
}
