#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(){
    char s[] = "happy";
    printf("%s\n",s);
    reverse(s);
    printf("%s\n",s);
}
void reverse(char s[]){
    void reverser(char s[],int i,int len);
    int len = strlen(s);
    int i = 0;
    reverser(s,i,len);
}

void reverser(char s[],int i,int len){
    
    char temp;
    int j = len - i - 1;
    if(i < j){
        temp = s[j];s[j] = s[i];s[i] = temp;
	i++;
	reverser(s,i,len);
    }
}
