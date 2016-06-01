#include <stdio.h>
#define MAXLENGTH 1000

int get_line(char s[],int lim);
int reverse(char s[]);

int main()
{
    int len = 0;
    char line[MAXLENGTH];

    while((len = get_line(line,MAXLENGTH)) > 0){
	  reverse(line);
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

int reverse(char s[]){
    int i = 0;
    int j = 0;
    char c;
    while(s[i] != '\n')
        i++;
    i--;
    while(i > 0 && j < (i-j)){
        c = s[j];
	s[j] = s[i-j];
	s[i-j] = c;
	j++;
    }
    i++;
    return i;
}
