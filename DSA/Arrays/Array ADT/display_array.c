#include<stdio.h>
#include<stdlib.h>
struct Array{
        int *A;
        int size;
        int length;
    };

void Display(struct Array arr){
    int i;
    printf("Elements of array are:-");
    for(i = 0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int main(){
    
    struct Array arr;
    int n,i;
    printf("Enter size of an array:-\n");
    scanf("%d",&arr.size);
    arr.A =(int*)malloc(arr.size*sizeof(int));
    arr.length = 0;
    printf("Enter number of numbers in array:-\n");
    scanf("%d",&n);
    printf("Enter the elements of the array one by one:-\n");
    for(i = 0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length = n;
    Display(arr);

    

}