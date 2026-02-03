// how to increase array size
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int *)malloc(5*sizeof(int));
    int *q = (int *)malloc(10*sizeof(int));
    int i;
    for(i=0;i<5;i++){
        p[i] = (i*8)/2;
    }
    for (i =0;i<5;i++){
        q[i] =p[i];
    }
    free(p);
    p = q;
    q = NULL;

}
