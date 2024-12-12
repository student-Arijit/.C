#include <stdio.h>
#include <unistd.h>

void _arr_rev(int*, size_t);
void _arr_print(int* arr, int n);
void delay(void);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(arr)/sizeof(arr[0]);

    _arr_rev(arr, size);
    printf("Reversing");
    delay();
    _arr_print(arr, size);
    printf("\n");

    return 0;
}

void _arr_rev(int* arr, size_t n) {
    int *start = arr;
    int *end = arr + n - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void _arr_print(int* arr, int n) {
    for (size_t i = 0; i < n; i++) {
        printf("\nArray[%zu] = %d", i, arr[i]);
    }
}

void delay(void) {
    for (int i = 0; i < 3; i++) { 
        fflush(stdout);         
        printf(".");
        usleep(300000);
    }
}