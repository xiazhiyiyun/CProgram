#include <stdio.h>
#define SIZE 100

char *_strcat(char *s,char *t);

int main(){
    char s[SIZE] = "HEELO ";
    char t[SIZE] = "EVERYONE ";
    printf("%s",s);
    printf("%s\n",t);
    char *p = _strcat(s,t);
    printf("%s\n",s);
    printf("%s\n",p);
    printf("%s\n",_strcat(s,t));
}

char * _strcat(char *s,char *t){
    char *p = s;
    while(*s++)
        ;
    s--;
    while(*s++ = *t++)
        ;
    return p;
}
