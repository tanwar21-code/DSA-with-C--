// 2D array in heap
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *A[3];//a pointer array of size 3
    A[0]=(int *)malloc(4*sizeof(int));
    A[1]=(int *)malloc(4*sizeof(int));
    A[2]=(int *)malloc(4*sizeof(int));
    A[1][2]= 5;
    printf("%d\n",A[1][2]);
}