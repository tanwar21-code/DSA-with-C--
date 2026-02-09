// Linear search

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

void insert(struct Array *arr,int index, int a){
    if(index<= arr->length && index >=0)
        {int i;
        for (i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=a;
        arr->length++;    
    }
}

int delete(struct Array *arr,int index){
    int x =0;
    int i;
    if(index>=0 && index<arr->length){
        x = arr->length;
        for(i=index;i<arr->length;i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int linear_search(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(arr->A[i]==key){
            return i;
        }
        else{
            continue;
        }
    }
    return -1;
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
    // Add(&arr,a);
    // insert(&arr,2,10);
    // delete(&arr,2);
    if(linear_search(&arr,9)!=-1){
        printf("Element is found at %d index.",linear_search(&arr,3));
    }
    else{
        printf("Element not found.");
    }
    // Display(arr);
    return 0;

}