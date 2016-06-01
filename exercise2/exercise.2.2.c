#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'a';
    char s[] = "I am a string!";
    printf("a = %d\n",c);
    printf("a = %c\n",c);
    printf("a = %0x\n",c);
    printf("a = %o\n",c);
    printf("s = %s\n",s);
    printf("strlen(s) = %d\n",strlen(s));

    return 0;
}
