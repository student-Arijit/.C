#include <stdio.h>

void _arr_rev(int*, int);
void _arr_print(int*, int);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(arr)/sizeof(arr[0]);

    _arr_rev(arr, size);
    _arr_print(arr, size);

    return 0;
}

void _arr_rev(int arr[], int n) {
    for (size_t i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void _arr_print(int arr[], int n) {
    for (size_t i = 0; i < n; i++) {
        printf("Array[%zu] = %d\n", i, arr[i]);
    }
}