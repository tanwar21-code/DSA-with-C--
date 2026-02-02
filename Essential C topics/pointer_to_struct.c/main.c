#include<stdio.h>
int main(){
    struct rectangle{
        int length,breath;
    };
    struct rectangle r1 = {10,5};
    struct rectangle *p =&r1;
    r1.length = 100;
    p->length=110;
    printf("%d", p->length);
}