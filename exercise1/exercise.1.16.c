#include <stdio.h>
#define MAXLENGTH 10000

int get_line(char s[]);
void copy(char from[],char to[]);

int main()
{
    char line[MAXLENGTH],lenline[MAXLENGTH];
    int len,maxlen;
    int length;


        printf("Please input the lengh of line.\n");
        scanf(&length);
	if(length <= 0){

            printf("The number must be a interger and bigger than 0.Please input the lengh of line.\n");
	    return;
	}


    maxlen = len = 0;

    while((len = get_line(line,MAXLENGTH)) == length){
    
       copy(line,lenline);
       printf("The length of line is %d,%s\n",length,lenline);
    }

    if(len != length)
       printf("No lines compare with the length of line.\n");
    


    return 0;
}
/*
int get_line(char s[]){
    int c;
    int i = 0;
    while((c = getchar()) != EOF){
    
        if(c == '\n'){
	
	     s[i] = c;
	     i++;
	     s[i] = '\0';
	     return i;
	}
	else{
	    s[i] = c;
	    i++;
	}
    }

}
*/

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

    s[i] = 0;
    return i;

}

void copy(char from[],char to[]){
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0'){
    
       i++;
    }
}
/*
void copy(char from[],char to[]){
    int i;

    for(i = 0;from[i] != '\0';i++){
    
        to[i] = from[i];
    }

    to[i] = from[i];

}*/
