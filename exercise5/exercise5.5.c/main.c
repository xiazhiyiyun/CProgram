#include <stdio.h>

#define SIZE 80

char *_strncat(char *s,char *ct,int n);
char *_strncpy(char *s,char *ct,int n);
int _strncmp(const char *cs,const char *ct,size_t n);

int main(){
    char s[SIZE] = "HELLO ";
    char t[SIZE] = "EVERYONE";
    char *p;
    int n = 4;
    printf("%s\n",s);
    printf("%s\n",t);

    printf("_strncmp(s,t,4) = %d\n",_strncmp(s,t,4));

    p = _strncpy(s,t,n);
    printf("_strncpy(s,t,4) = %s\n",p);

    p = _strncat(s,t,n);
    printf("_strncat(s,t,4) = %s\n",p);
}
