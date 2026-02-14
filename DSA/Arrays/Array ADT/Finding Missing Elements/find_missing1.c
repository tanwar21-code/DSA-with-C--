// left shift/rotate

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

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
    int x = 0;
    int i;
    if(index>=0 && index < arr->length){
        x = arr->A[index];
        for(i = index; i < arr->length - 1; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int linear_search(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(arr->A[i]==key){
            if (i>0){
                return i;
            }
            return i;
        }
        else{
            continue;
        }
    }
    return -1;
}

int Binary_search(struct Array *arr,int key){
    int low = 0, high = arr->length - 1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr->A[mid] == key)
            return mid;
        if(key < arr->A[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int get(struct Array *arr,int index){
    if(index>= 0 && index<=arr->length){
        return arr->A[index];
    }
}

int set(struct Array *arr,int index,int x){
    if(index>= 0 && index<=arr->length){
        arr->A[index]=x;
    }
}

int max(struct Array *arr){
    int max=arr->A[0];
    int i;
    for (i =0;i<arr->length;i++){
        if (arr->A[i]>max){
            max = arr->A[i];
        }
        
    }
    return max;

}

int min(struct Array *arr){
    int min=arr->A[0];
    int i;
    for (i =0;i<arr->length;i++){
        if (arr->A[i]<min){
            min = arr->A[i];
        }
        
    }
    return min;

}

int sum(struct Array *arr){
    int total = 0;
    int i;
    for (i =0;i<arr->length;i++){
        total += arr->A[i];
        
    }
    return total;

}

int sum_recursion(struct Array *arr, int n){
    if(n <= 0)
        return 0;
    return sum_recursion(arr, n - 1) + arr->A[n - 1];
}

int Avg(struct Array *arr){
    if(arr->length == 0)
        return 0;
    return sum_recursion(arr, arr->length) / arr->length;
}

void reverse(struct Array *arr){
    int i ,j;
    int B[arr->length];
    for (i=arr->length-1,j=0;i>=0;i--,j++){
        B[j] = arr->A[i];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i] = B[i];
    }
}

void reverse2(struct Array *arr) {
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--) {
        swap(&arr->A[i], &arr->A[j]);
    }
}

void left_Shift(struct Array *arr){
    int i;
    for(i=0;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
}

void rotate(struct Array *arr){
    int i;
    int a = arr->A[0];
    for(i=0;i<arr->length;i++){
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=a;
}

void insert_in_sort(struct Array *arr,int n){
    int i;
    for(i= arr->length-1;i>=0;i--){
        if(arr->A[i]>=n){
            arr->A[i+1]=arr->A[i];
        }
        else{
            arr->A[i+1]= n;
            break;
        }
    }
}

int sort_check(struct Array *arr){
    int i;
    for(i = 0; i < arr->length - 1; i++){
        if(arr->A[i] > arr->A[i+1]){
            return 0;
        }
    }
    return 1;
}

void negative_on_left(struct Array *arr){
    int i,j;
    i = 0;
    j = arr->length;
    while(i<j){
        while(arr->A[i]<0){i++;}
        while(arr->A[j]>0){j--;}
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
       
    }
}

struct Array* merge(struct Array *arr,struct Array *arr1){
    int i=0,k=0,j=0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    if(!arr3) return NULL;
    arr3->size = arr->size + arr1->size;
    while(i < arr->length && j < arr1->length){
        if(arr->A[i] < arr1->A[j]){
            arr3->A[k++] = arr->A[i++];
        } else {
            arr3->A[k++] = arr1->A[j++];
        }
    }
    for(; i < arr->length; i++){
        arr3->A[k++] = arr->A[i];
    }
    for(; j < arr1->length; j++){
        arr3->A[k++] = arr1->A[j];
    }
    arr3->length = k;
    return arr3;
}

struct Array * union_(struct Array *arr1,struct Array *arr2){
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    if(!arr3) return NULL;
    arr3->size = arr1->size + arr2->size;
    while(i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
        } else if(arr2->A[j] < arr1->A[i]){
            arr3->A[k++] = arr2->A[j++];
        } else {
            arr3->A[k++] = arr1->A[i];
            i++; j++;
        }
    }
    for(; i < arr1->length; i++){
        arr3->A[k++] = arr1->A[i];
    }
    for(; j < arr2->length; j++){
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k;
    return arr3;
}

struct Array * intersection(struct Array *arr1, struct Array *arr2){
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    if(!arr3) return NULL;
    arr3->size = (arr1->size < arr2->size) ? arr1->size : arr2->size;
    while(i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            i++;
        } else if(arr2->A[j] < arr1->A[i]){
            j++;
        } else {
            arr3->A[k++] = arr1->A[i];
            i++; j++;
        }
    }
    arr3->length = k;
    return arr3;
}

struct Array * difference(struct Array *arr1, struct Array *arr2){
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    if(!arr3) return NULL;
    arr3->size = arr1->size; 
    while(i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
        } else if(arr2->A[j] < arr1->A[i]){
            j++;
        } else { // equal
            i++; j++;
        }
    }
    for(; i < arr1->length; i++){
        arr3->A[k++] = arr1->A[i];
    }
    arr3->length = k;
    return arr3;
}

int find_missing(struct Array *arr){
    int i;
    int diff = arr->A[0]-0;
    int miss;
    for(i=0;i<arr->length;i++){
        if(arr->A[i]-i!=diff){
            miss = diff + i;
            break;
        }
    }
    return miss;
}

void Display(struct Array arr){
    int i;
    printf("Elements of array are:-");
    for(i = 0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
    printf("\n");
}

int main(){
    int a =9;
    struct Array arr1 ={{1,2,3,4,5},20,5};
    struct Array arr2 ={{6,7,8,9,10},20,5};
    // Add(&arr,a);
    // insert(&arr,2,10);
    // delete(&arr,2);
    // int idx = linear_search(&arr,3);
    // if(idx != -1){
    //     printf("Element is found at %d index.", idx);
    // }
    // else{
    //     printf("Element not found.");
    // }
    // int idx = Binary_search(&arr,4);
    // if (idx != -1){
    //     printf("Element is found at %d index.",idx);
    // }
    // else{
    //     printf("Search unsuccessful.");
    // }
    // int ele = get(&arr,2);
    // printf("%d\n",ele);
    // set(&arr,2,10);
    // printf("%d\n",max(&arr));
    // printf("%d\n",min(&arr));
    // printf("%d\n",sum(&arr));
    // printf("%d\n",sum_recursion(&arr,arr.length));
    // printf("%d\n",Avg(&arr));
    // reverse(&arr);
    // left_Shift(&arr);
    // rotate(&arr);
    // insert_in_sort(&arr,27);
    // if (sort_check(&arr)){
    // printf("List is sorted.\n");
    // }
    // else{
    //     printf("List is not sorted.\n");
    // }
    // negative_on_left(&arr);
    struct Array *arr3;
    // arr3 = merge(&arr1,&arr2);
    struct Array arr4 = {{1,2,3,4,5,6,8},7,20};
    // int sum_arr4 =sum(&arr4);
    // int expected_sum = (8*(8+1))/2;
    // int missing_element = expected_sum-sum_arr4;
    // printf("%d\n",missing_element);
    // printf("%d\n",find_missing(&arr4));
    // Display(*arr3);
    return 0;
}