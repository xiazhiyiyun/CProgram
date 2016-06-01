#include <stdio.h>
#include <ctype.h>

double atof(char s[]);

int main(){
    char s[] = "-123.45";
    double d;
    d = atof(s);
    printf("char s[] = %s,d = %f\n",s,d);
    printf("----------------------------\n");

    char t[] = "-123.45e-6";
    d = atof(t);
    printf("char t[] = %s,d = %f\n",t,d);
    printf("----------------------------\n");

    char r[] = "123.45e-6";
    d = atof(r);
    printf("char r[] = %s,d = %f\n",r,d);
    printf("----------------------------\n");
}

double atof(char s[]){
    int i ;
    int sign,sign1;
    double var;
    double power = 1.0;
    int base;
    long int e = 1;

    for(i = 0;isspace( s[i] );i++)
        ;

    sign = (s[i] == '-') ? -1 : 1 ;

    if(s[i] == '+' || s[i] == '-')
        i++;

    for(var = 0.0; isdigit(s[i]); i++){
        var = var * 10.0 + s[i] - '0';
    }

    if(s[i] == '.'){
        i++;
        for(; isdigit(s[i]); i++){
            var = var * 10.0 + s[i] - '0';
            power = power * 10.0;
        }
	var = var / power;
    }

    if(s[i] == 'e' || s[i] == 'E'){
        i++;
        sign1 = (s[i] = '-') ? -1 : 1;

        if(s[i] == '+' || s[i] == '-')
            i++;
	for(base = 0; isdigit(s[i]); i++){
	    base = base * 10 + s[i] - '0';
	}

	for(; base > 0;base--)
   	    e = 10 * e;	    
 	if(e > 0 ){
	    if(sign1 < 0) 
	        var = var / e;
	    else
	        var = var * e;
	}	
    }

    if(sign < 0)
        var = var * sign;
    return var;
}
