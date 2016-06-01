#include <stdio.h>

/*
when getchar()!=EOF is true,and then c = 1,but prinf() is always run twice.
 */

int main()
{
    int c;
    
    while(c = getchar() != EOF){
    
        printf("getchar()=%d\n",c);
    }
    
    printf("getchar()=%d,EOF\n",c);
    return 0;

}
