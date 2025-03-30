#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* Arr;
    int size;
} array;

void iSort(array*);
void printArray(array*);
void scanArray(array*);
int main() {
    array* arr = (array*)malloc(sizeof(array));

    printf("Enter the size of array: ");
    scanf("%d", &arr->size);

    arr->Arr = (int*)malloc(arr->size * sizeof(int));

    if (arr->Arr == NULL) {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    scanArray(arr);
    iSort(arr);
    printArray(arr);

    free(arr->Arr);
    
    return 0;
}
void scanArray(array* arr){
    for (int i = 0; i < arr->size; i++) {
        printf("Array[%d] = ", i);
        scanf("%d", &arr->Arr[i]);
    }
}

void iSort(array* arr){
    for (int i = 1; i < arr->size; i++) {
        int key = arr->Arr[i];
        int j = i - 1;

        while(j >= 0 && arr->Arr[j] > key) {
            arr->Arr[j + 1] = arr->Arr[j];
            j--;
        }

        arr->Arr[j + 1] = key;
    }
}

void printArray(array* arr){
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->Arr[i]);
    }
}