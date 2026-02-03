#include<stdio.h>
#include<stdlib.h>
int main(){
    int **A;
    A = (int**)malloc(3*sizeof(int*));
    A[0]= (int*)malloc(4*sizeof(int));
    A[1]= (int*)malloc(4*sizeof(int));
    A[2]= (int*)malloc(4*sizeof(int));
    free(A);
}