// Write a C program to take 10 integers as input from the user and store them in an array.
//  Print the largest number in the array.
#include<stdio.h>
int main(){
    int A[10],i,max;
    for (i = 0;i<10;i++){
        scanf("%d",&A[i]);
    }
    max = A[0];
    for (i = 0; i<10; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    printf("The largest number is : %d\n",max);
}