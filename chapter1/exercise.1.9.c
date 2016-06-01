#include <stdio.h>
#define MAXLENGTH 10000

//int getline(char s[]);
//void copy(char from[],char to[]);

int main()
{
    char line[MAXLENGTH],longest[MAXLENGTH];
    int len,maxlen;
    maxlen = len = 0;

    while((len = get_line(line,MAXLENGTH)) > maxlen){
    
       maxlen = len;
       copy(line,longest);
    }
    if(maxlen > 0){
    
        printf("%s\n",longest);
	printf("The chars of the longest line is %d\n",maxlen);
    }


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
