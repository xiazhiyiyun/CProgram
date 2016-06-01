#include <stdio.h>
#include <string.h>

void qsort(char *lineptr[],int left,int right){
    int i,last;
    void swap(char *lineptr[],int i,int j);

    if(left >= right)
        return;
    swap(lineptr),left,(left + right) /2);
    last = left;
    for(i = last + 1; i <= right;i++){
        if(strcmp(lineptr[i],v[left]) < 0)
	    swap(lineptr,i,++last);
    }
    swap(lineptr,left,last);
    qsort(lineptr,left,last-1);
    qsort(lineptr,last+1,rignt);
}
void swap(char *lineptr[],int i,int j){
    char *temp;
    temp = lineptr[j];
    lineptr[j] = lineptr[i];
    lineptr[i] = temp;
}
