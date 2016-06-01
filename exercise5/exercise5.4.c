#include <stdio.h>
#include <string.h>

int _strend(char *s,char *t);

int main(){
    char *s = "HELLO";
    char *t = "HELLO EVERYONE";
    char *v = "EVERYONE";
    char *r = "ONE";
    printf("%s\n",s);
    printf("%s\n",t);
    printf("%s\n",v);
    printf("%s\n",r);
    printf("_strend(s,t) = %d\n", _strend(s,t));
    printf("_strend(t,v) = %d\n", _strend(t,v));
    printf("_strend(v,r) = %d\n", _strend(v,r));

}

int _strend(char *s,char *t){
    int i = strlen(s) - 1;
    int j = strlen(t) - 1;
    if(i < j) return 0;
    s = s + i - j;
    while(*s == *t && *t != '\0'){
        s++;
	t++;
    }
    if(*s == *t && *t == '\0')
        return 1;
    return 0;
}
