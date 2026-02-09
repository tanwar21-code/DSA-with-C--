#include<stdio.h>
int main(){
    int *A;
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    A = (int *)malloc(n*sizeof(int));
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
}