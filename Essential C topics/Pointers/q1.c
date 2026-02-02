// pointers are used for accesing heap memory
// plus it is used for accesing external datas
#include<stdio.h>
int main(){
    int a = 10;
    int *p;
    p = &a;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);

}