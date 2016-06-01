#include <stdio.h>

int main(){
    int i = 1073741824;    
    unsigned j = 1073741824;
    int k = 2147483647;
    int l = 4294967296;
    printf("%d\n",k);
    k = 2147483648 +2;
    printf("%d\n",2147483648+2);
    printf("%u\n",2147483648+2);
    printf("%d\n",l);
    printf("%0x\n",l);
    printf("-----------------------\n");
    printf("sizeof(int)  = %lu\n",sizeof(i));
    printf("%d\n",i);
    printf("%d\n",i*2);
    printf("%ld\n",i*2*2);
    printf("-----------------------\n");
    printf("sizeof(unsigned)  = %lu\n",sizeof(j));
    printf("%u\n",j);
    printf("%u\n",j*2);
    printf("%u\n",j*2*2);
    int test1;
    test1 = 0;
    unsigned test2 = -1;
    printf("-----------------------\n");
    printf("%d\n",test1);
    printf("%0x\n",test1);
    printf("%0x\n",test2);
    printf("%d\n",(test1>test2)?test1:test2);
    printf("%u\n",(test1>test2)?test1:test2);
    printf("-----------------------\n");
    printf("fouble------------\n");
    double d = -10.5;
    double f = -10.5;
    int test3 = (int)d;
    int test4 = (int)f;
    unsigned int test5 = (unsigned)d;
    printf("%d\n",test3);
    printf("%f\n",d);
    printf("%d\n",test4);
    printf("%f\n",f);
    printf("%u\n",test5);
    printf("%f\n",d);
    return 0;
}
