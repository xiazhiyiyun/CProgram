#include <stdio.h>

int main() 
{

   intcelsius();
   floatcelsius();
   titlecelsius();
   fahr();
   
   return 0;
}
    
    void intcelsius(void){
    
        int fahr,celsius;
        int lower,upper,step;

        lower = 0;
        upper = 300;
        step = 20;

        for(fahr = 0;fahr <= upper;fahr = fahr + step){

            celsius = (fahr - 32) * 5 / 9; 
            printf("%d\t%d\n",fahr,celsius);

        }
    }

    void floatcelsius(void){
    
        float fahr,celsius;
        int lower,upper,step;

        lower = 0;
        upper = 300;
        step = 20;

        for(fahr = 0;fahr <= upper;fahr = fahr + step){

            celsius = (fahr - 32.0) * 5.0 / 9.0; 
            printf("%6.0f\t%.2f\n",fahr,celsius);

        }
    } 

    void titlecelsius(void) {
          
        int fahr,celsius;
        int lower,upper,step;

        lower = 0;
        upper = 300;
        step = 20;

        printf("The list of fahr to celsius\n");
        for(fahr = 0;fahr <= upper;fahr = fahr + step){

            celsius = (fahr - 32) * 5 / 9; 
            printf("%d\t%d\n",fahr,celsius);

        }
    }     

    void fahr(void) {
    
       float fahr,celsius;
       int lower,upper,step;
       lower = 0;
       upper = 100;
       step = 10;
       printf("The list of celsius to fahr\n");
       celsius = lower;

       while(celsius <= upper){
       
           fahr = celsius * 9 / 5 + 32;
	   printf("%6.0f\t%6.2f\n",celsius,fahr);
	   celsius = celsius + step;
       }
    }
