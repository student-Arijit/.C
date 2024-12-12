/*You are given a 0-indexed 2D integer array pairs where pairs[i] = [starti, endi]. An arrangement of pairs is valid if for every index i where 1 <= i < pairs.length, we have endi-1 == starti.*/

#include <stdio.h>
#include <stdlib.h>

void input(int**, int);
void cmp(int**, int);

int main(void) {
    int** pairs = (int**)malloc(3*sizeof(int*));

    for (int i = 0; i < 3; i++) {
        pairs[i] =(int*)malloc(2*sizeof(int));
    }

    input(pairs, 3);

    return 0;
}

void input(int** pairs, int num_pairs) {
    printf("Enter %d pairs of integers:\n", num_pairs);

    for (int i = 0; i < num_pairs; i++) {
        printf("Pair %d: ", i + 1);
        scanf("%d %d", &pairs[i][0], &pairs[i][1]);
    }
}

void cmp(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0)
    }
}