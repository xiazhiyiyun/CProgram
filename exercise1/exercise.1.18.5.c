#include <stdio.h>
#define MAXLENGTH 1000

int get_line(char s[],int lim);
int delete(char s[]);

int main()
{
    int len = 0;
    char line[MAXLENGTH];

    while((len = get_line(line,MAXLENGTH)) > 0){

	  if((len = delete(line)) > 0) 
	  printf("%s",line);
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

int delete(char s[]){

    int i = 0;
    while(s[i] != '\n'){
       i++;
    }
    i--;
    while(i >= 0 && (s[i] == '\t' || s[i] == ' ')){
        i--;
    }
    if(i>=0){
        i++;
        s[i] = '\n';
        i++;
        s[i] = '\0';
    }
    return i;
}
