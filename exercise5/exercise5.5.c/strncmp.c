#include <stdio.h>

int _strncmp(const char *cs,const char *ct,size_t n){
    for(;n > 0 && cs != '\0';n--){
        if(*cs > *ct){
	    return 1;
	}
	else if(*cs < *ct){
	    return -1;
	}
        *cs++;
	*ct++;
    }
    if(n > 0 && (*cs == *ct && *ct == '\0')){
        return 0;
    }
    return -1;
}
