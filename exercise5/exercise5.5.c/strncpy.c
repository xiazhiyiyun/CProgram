#include <stdio.h>

char *_strncpy(char *s,const char *ct,int n){
    char *p = s;
    while(*ct && n-- > 0){
        *s++ = *ct++;
    }
   while(n-- > 0){
        *s++ = '\0';
    }
    //*s = '\0';
    return p;
}
