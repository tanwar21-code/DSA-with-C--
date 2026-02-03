// Static vs Dynamic arrays
#include <stdlib.h>
#include<stdio.h>
int main(){
    //  int A[5]; this will create an array in stack
    int A[5];
    int *p;
    p = (int *)malloc(5*sizeof(int)); //this will be created in heap
    // once we use heap memory , we must clear it afterwards
    free(p); // this will free the memory
}