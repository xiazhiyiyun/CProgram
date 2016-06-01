#include <stdio.h>
#define MAXHIST 15
#define MAXWORD 11
#define OUT 0
#define IN 1

int main() 
{
   int maxvalue,nc,overflow;
   int wl[MAXWORD];
   int state,i,c,len;
   state = OUT;
   overflow = nc = 0;
   len = 0;

   for(i = 0;i <=MAXWORD;i++)
      wl[i] = 0; 
     

   while((c = getchar()) != EOF){
   
       if(c == ' ' || c == '\t' || c == '\n'){
           
	   state = OUT;
	   if(nc > 0) {
	       if(nc <= MAXWORD)
	           wl[nc]++;
		else overflow++;
	   }
	   nc = 0;

       }else if(state == OUT) {
           
	   state = IN;
	   nc = 1;
       }
       else  nc++;
   }


    maxvalue = 0;
    
   for(i = 1;i <=MAXWORD;i++){
    
       if(maxvalue < wl[i])
          maxvalue = wl[i];
   }
   
   for(i = 1;i <= MAXWORD;i++){
   
       printf("%d-%d",i,wl[i]);

       if(wl[i] > 0){
          if((len = wl[i] * MAXHIST / maxvalue) <= 0)
	      len = 1;
       }
       else len = 0;
       
       while(len>0) {
          
	  printf("*");
	  len--;
       }

       printf("\n");
   }
   
   if(overflow > 0)
       printf("overflow = %d",overflow);
   return 0;

}
