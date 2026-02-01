//  Find second largest element in the array
#include <stdio.h>
#include <limits.h>

int main(void) {
    int A[10], i, max, max2, maxind;
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &A[i]) != 1) return 1;
    }

    max = A[0];
    maxind = 0;
    for (i = 1; i < 10; i++) {
        if (A[i] > max) {
            max = A[i];
            maxind = i;
        }
    }
    printf("The largest number is : %d\n", max);

    A[maxind] = INT_MIN;
    max2 = A[0];
    for (i = 1; i < 10; i++) {
        if (A[i] > max2) max2 = A[i];
    }

    if (max2 == INT_MIN)
        printf("No second largest (all elements equal)\n");
    else
        printf("The second largest number is : %d\n", max2);

    return 0;
}