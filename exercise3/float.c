#include <stdio.h>

int main(){
    int *p;
    float f = 8.5f;
    p = (int *)&f;
    printf("f = %f,%0x\n",f,*p);

    f = 120.5f;
    p = (int *)&f;
    printf("f = %f,%0x\n",f,*p);

    f = 0.0;
    p = (int *)&f;
    printf("f = %f,%0x\n",f,*p);

    f = 0.5;
    p = (int *)&f;
    printf("f = %f,%0x\n",f,*p);

    printf("---------------------\n");
    long *q;
    double d = 8.5;
    q = (long *)&d;
    printf("d = %f,%0x\n",d,*q);
    d = 120.5;
    q = (long *)&d;
    printf("d = %f,%0x\n",d,*q);

    printf("---------------------\n");
    int i = 120;
    printf("i = %d,%0x\n",i,i);
    printf("sizeof(int) = %u\n",sizeof(int));
}
