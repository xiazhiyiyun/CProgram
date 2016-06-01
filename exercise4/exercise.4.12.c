#include <stdio.h>
#include <limits.h>

#define MAX_LEN 80

void itoa(int n,char s[]);
int printd(int n,char s[]);

int main(){
    int i = 1234;
    int j = -1234;
    int k = INT_MAX;
    int l = INT_MIN;
    char s[MAX_LEN];
    itoa(i,s);
    printf("%s\n",s);

    itoa(j,s);
    printf("%s\n",s);

    itoa(k,s);
    printf("%s\n",s);

    itoa(l,s);
    printf("%s\n",s);

}

void itoa(int n,char s[]){
    static int inde;
    int sign = n;

    if( (n / 10) )
        itoa(( n/10 ),s);
    else{
        inde = 0;
	if( n < 0)
	    s[inde++] = '-';
    }
    s[inde++] = abs( n % 10 ) + '0';
    s[inde] = '\0';
}
