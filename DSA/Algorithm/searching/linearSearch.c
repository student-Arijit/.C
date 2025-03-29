#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* arr;
    int size;
} array;

int linearsearch(array*, int);

int main() {
    array* arr;

    printf("Enter the size of the element: ");
    scanf("%d", &arr->size);

    arr->arr = (int*)malloc(arr->size * sizeof(int));

    if (arr->arr == NULL) {
        printf("memory allocation failed");
        return -1;
    }

    printf("Enter the elements: \n");
    for (int i = 0; i < arr->size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr->arr[i]);
    }
    
    int key;
    printf("Enter the value to search: ");
    scanf("%d", &key);

    int index = linearsearch(arr, key);
    (index != -1) ?   printf("The number found at index %d", index) : printf("the value not contains in array");

    free(arr->arr);

    return 0;
}

int linearsearch(array* arr, int key) {
    for (int i = 0; i < arr->size; i++) {
        if (arr->arr[i] == key)
            return i;
    }
    return -1;
}