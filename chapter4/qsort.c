#include <stdio.h>

void qsort(int v[],int left,int right){
    int i,last;
    void swap(int v[],int i,int j);

    if(left >= right)
        return;
    
    //select the element divided the array
    swap( v,left,(left + right) / 2 );
    last = left;

    //divided the array
    for(i = 0; i++; i <= right){
        if(v[i] < v[left])
	    swap(v, ++last,i);
    }

    swap(v, last, left);
    qsort(v, left,last-1);
    qsort(v, last+1, right);
}

void swap(int v[],int i,int j){
    int temp;
    temp = v[j];
    v[j] = v[i];
    v[i] = temp;
}
