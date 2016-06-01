#include <stdio.h>
#define UPPER 300
#define STEP 20

int fahr = 0;
int celsius = 0;
double i=12.0;

int main()
{
   printf("%f\n",i);
   for(fahr = 0;fahr <= UPPER;fahr += STEP){
       //void fahrtocelsius();
       fahrtocelsius();
       printf("%d,%d\n",fahr,celsius);
   }
   printf("%fdc\n",i);

   return 0;
}

int fahrtocelsius() {

   celsius = 5 * (fahr -32) / 9;
   i=18.8;
   //return celsius;
}
