// 2D arrays
#include<stdio.h>
int main(){
    int A[3][4]; // 3 rows and 4 columns 3x4
    int i,j;
    for (i = 0;i<3;i++){
        for (j =0;j<4;j++){
            A[i][j]= i+j;
        }
    }
    printf("%d\n",A[1][2]);
}