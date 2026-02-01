// Write a C program to input n elements into an array and then print the elements in reverse order.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of elements array have:- \n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements of the array:- \n");
    for (i = 0; i<n; i++){
        scanf("%d",&A[i]);
    }

    for (i = n-1; i>-1; i--){
        printf("%d ", A[i]);
    }
    
}