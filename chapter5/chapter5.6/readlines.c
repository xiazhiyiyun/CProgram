#include <stdio.h>

#define MAXLEN 1000
int getline(char *,int);
char *alloc(int);

int readlines(char *lineptr[],int maxlines){
    int nlines = 0;
    int len;
    char *p,
    char line{MAXLINE};
    while( ( len = getline(line,MAXLEN) ) > 0 ){
        if( nlines >= maxlines || ( p = alloc(n) ) == NULL)
	    return -1;
	else{
	    line(len -1) = '\0';
	    lineptr[nlines] = p;
	    nlines++;
	}
    }
    return nlines;
}

int getline(char *line,int maxlen){
    int i,c;
    while((i < maxlen - 1 && c = getchar()) != EOF && c != '\n'){
        *line++ = c;
    }
    if(c == '\n'){
        *line++= = c;
	i++
    }
    line= '\0';
    return i;
}
