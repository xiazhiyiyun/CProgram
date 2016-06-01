#include <stdio.h>

char *_strncat(char *s,const char *ct,int n){
    char *p = s;
    //find the '\0' of s
    while(*s)
        s++;
    //copy  n character of ct to s
    for(; n > 0 && *ct; n--){
        *s++ = *ct++;
    }
    //fill '\0' to the s
    for(;n > 0;n--){
        *s++ = '\0';
    }
    *s = '\0';
    return p;
}
