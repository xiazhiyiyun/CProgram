#include <stdio.h>
#include <math.h>
#include <string.h>

int itob(int n,char s[],int b);
void reverse(char s[]);

int main(){
    int i = 82;
    int b1 = 2;
    int b2 = 8;
    int b3 = 10;
    int b4 = 16;
    int b5 = 5;
    char s[20];
    itob(i,s,b1);
    printf("i = %d,%o,%0x;b1 = %d,string = %s\n",i,i,i,b1,s);
    itob(i,s,b2);
    printf("i = %d,%o,%0x;b2 = %d,string = %s\n",i,i,i,b2,s);
    itob(i,s,b3);
    printf("i = %d,%o,%0x;b3 = %d,string = %s\n",i,i,i,b3,s);
    itob(i,s,b4);
    printf("i = %d,%o,%0x;b4 = %d,string = %s\n",i,i,i,b4,s);
    itob(i,s,b5);
    printf("i = %d,%o,%0x;b5 = %d,string = %s\n",i,i,i,b5,s);

    return 0;
}
/*
void itob(int n,char s[],int b){
    if(b <= 0)  return;
    int base = b;
    int i,j,sign;

    if(n < 0){
        sign = -1;
	n = -n; 
    }
    for(i = 0;n / base > 0;i++)
        base = base * b;
    j = i;
    for(;i >= 0;i--){
        if (i >0){
            s[j - i] = n / (int)pow(b,i) + '0';
	    n = n % (int)pow(b,i) + '0';
        }
	else{
	    s[j] = n;
	}
    }
    j++;
    s[j] = '\0';
}
*/

int itob(int n,char s[],int b){
    if(b <= 0) return -1;
    int sign,i = 0;
    int j = 0;

    if( (sign = n) < 0) 
        n = -n;
    
    do{
      	j = n % b;
        s[i++] = (j <= 9) ? j + '0' : j + 'a' - 10;
    }while(( n /= b ) > 0);

    if(sign < 0) 
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
    return i;
}

void reverse(char s[]){
    int len = strlen(s);
    int j,i;
    char temp;
    for(i = 0 ,j = len - 1;i < j;i++,j--){
        temp = s[j];
	s[j] = s[i];
 	s[i] = temp;
    }
}
