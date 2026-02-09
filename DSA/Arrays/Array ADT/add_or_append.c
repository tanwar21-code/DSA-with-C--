// Function to add or append an element in an array
// this means adding an element at the end of the array
#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[20];
    int size;
    int length;
};

void Add(struct Array *arr,int a){
    if(arr->length < arr->size){
        arr->A[arr->length] = a;
        arr->length++;
    } else {
        printf("Array is full, cannot add %d\n", a);
    }
}

void Display(struct Array arr){
    int i;
    printf("Elements of array are:-");
    for(i = 0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int main(){
    int a =9;
    struct Array arr ={{1,2,3,4,5,6},20,6};
    Add(&arr,a);
    Display(arr);
    return 0;

}