#include <stdio.h>
int main(){
    int myNumbers[] = {25, 50, 75, 100};
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);
    printf("%d\n", myNumbers[0]);
    printf("%d\n",sizeof(myNumbers));
    printf("%d\n",length);

    int i =0;
    for (i =0; i< length;i++){
        printf("%d\n",myNumbers[i]);
    }

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    // we have to calculate averages of these ages
    int avg,sum;
    avg = 0;
    sum = 0;
    int len_age = sizeof(ages)/sizeof(ages[0]);

    int j =0;
    for (j =0; j <len_age; j++){
        sum += ages[j];
    }

    printf("The sum of ages is: %d\n",sum);
    avg = sum/ len_age;
    printf("The avg of ages is: %d\n", avg);

    // now we have to find lowest age in this set of ages

    int k;
    int lowest_age = ages[0];
    for (k = 0; k <len_age; k++){
        if (ages[k] < lowest_age)
           { lowest_age = ages[k];} 
    }
    printf("The lowest age among all ages is : %d\n",lowest_age);

    int myNumber[] = {3, -1, 7, 0, 9};
    // we go through a list of numbers. We skip negative values, but stop the loop completely if we find a zero
    int len_myNum = sizeof(myNumber)/sizeof(myNumber[0]);
    for ( i = 0; i <len_myNum; i++){
        if (myNumber[i] <0){
            continue;
        }
        if (myNumber[i] == 0){
            break;
        }
        printf("%d\n",myNumber[i]);
    }

    // 2 dimensional arrays
    int matrix[2][3] = {{1,4,2},{3,6,8}};
    printf("%d\n",matrix[1][2]);
    // loop through a 2d array

    for(i = 0; i< 2; i++){
        for (j = 0; j<3; j++){
            printf("%d\n",matrix[i][j]);
        }
    }
    
}