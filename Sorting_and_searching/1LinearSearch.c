#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void LinearSearch(int*, int, size_t);

int main(void) {
    int Arr[] = {5, 3, 9, 8, 6, 7};
    size_t size = sizeof(Arr) / sizeof(Arr[0]);
    
    int Target = 3;
    

    printf("Searching for %d in integer array...\n", Target);
    sleep(1);
    LinearSearch(Arr, Target, size);

    

    return 0;
}

void LinearSearch(int Arr[], int value, size_t size) {
    bool flag = false;

    for (size_t i = 0; i < size; i++) {
        int temp = Arr[i];

        if (temp == value) {
            printf("Array [%zu] = %d", i, value);
            flag = true;
        }
    }

    if(!flag) {
        printf("Target value not found!!");
    }
}