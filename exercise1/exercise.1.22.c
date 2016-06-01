#include <stdio.h>
#define MAXCOL 10
#define TABINC 8

int exptab(int pos);
void printl(int pos);
int findblank(int pos);
int newpos(int pos);

char line[MAXCOL];
int main(){
    int c pos;
    pos = 0;
    while( ( c = getchar() ) != EOF ){
        line[pos] = c;
        if(c == '\t'){
	    pos = exptab(pos);
	}
	else if(c == '\n'){
	    printl(pos);
	    pos = 0;
	}
	else if(++pos >= MAXCOL){
	    pos = findblank(pos);
	    printl(pos);
	    pos = newpos(pos);
	}
    
    }
    return 0;
}

int exptab(int pos){
    line[pos] = ' ';
    for(++pos;pos < MAXCOL && pos % TABINC != 0;pos++)
        line[pos] = ' ';
    if(pos < MAXCOL)
        return pos;
    else{
        printl(pos);
	return 0;
    }
}

void printl(int pos){
    int i;
    for(i = 0;i < pos; ++i)
        putchar(line[i]);
    if(pos > 0)
        putchar('\n');
}

int findblank(int pos){
    int i;
    for(pos;)
}
}
