#include<stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x=10;
    int y = 9;
    swap(&x,&y);
    printf("%d %d",x,y);
}