#include <stdio.h>

int main()
{
    char  s[]= "0x5f5";
    char s1[] = "0X5f5";
    char s2[] = "5f5";
    char s3[] = "5g5";
    printf("s = %d\n",_htoi(s));
    printf("s1 = %d\n",_htoi(s1));
    printf("s2 = %d\n",_htoi(s2));
    printf("s3 = %d\n",_htoi(s3));
    return 0;
}

int _htoi(char s[]){
    int i,n;
    n = 0;
    if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
        for(i = 0; s[i + 2] != '\0';i++)
	    s[i] = s[i + 2];
	s[i] = '\0';
    }
    for(i = 0;( s[i] >= '0' && s[i] <= '9' ) || ( s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F');i++){
        if(s[i] >= '0' && s[i] <= '9'){
	    n = n * 16 + (s[i] - '0');
	}
        else if(s[i] >= 'a' && s[i] <= 'f'){
	    n = n * 16 + (s[i] - 'a') + 10;
	}
        else if(s[i] >= 'A' && s[i] <= 'F'){
	    n = n * 16 + (s[i] - 'A') + 10;
	}
    }
    if(s[i] == '\0')
        return n;
    else {
        printf("EARROR FORMAT!\n");
	//return 1;
    }
}
