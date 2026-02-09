#include<stdio.h>
#include<stdlib.h>
int main(){
    struct Array{
        int *A;
        int size;
        int length;
    };
    struct Array arr;
    printf("Enter size of an array:-\n");
    scanf("%d\n",&arr.size);
    arr.A =(int*)malloc(arr.size*sizeof(int));
    arr.length = 0;
    
}