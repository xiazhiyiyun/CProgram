#include <stdio.h>

int main(){
    char * s = "hello";
    char s1[] = "hello";
    s1[1] = 'a';
    printf("s1 = %s\n",s1);
    printf("s = %s\n",s);
    s1[] = "ahell";
    printf("s = %s\n",s);
}
