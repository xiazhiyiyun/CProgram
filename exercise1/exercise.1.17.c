#include <stdio.h>
#define MAXLENGTH 1000
#define LEN 80

int get_line(char s[],int lim);

int main(){

    int len = 0;
    char line[MAXLENGTH] ;
    while((len = get_line(line,MAXLENGTH)) > 0){
       if(len > 80)
       printf("length = %d\n%s",len,line); 
    }
    return 0;

}

int get_line(char s[],int lim){
    int c;
    int i = 0;

    for(i = 0;i < lim - 1 && (c = getchar()) != EOF && c != '\n';i++){
    
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
	i++;
    }
    if(i == lim-1){
       printf("The length of line may over the The length of line may over the array length! Please check!\n");
    }

    s[i] = '\0';
    return i;

}
