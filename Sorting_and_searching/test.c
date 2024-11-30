#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void LinearSearch(void *, size_t, size_t, void *, int (*compare)(const void *, const void *));

int main(void) {
    return 0;
}

void LinearSearch(void *arr, size_t n, size_t size, void *target, int (*compare)(const void *, const void *)) {
    char *array = (char *)arr;
    bool flag = false;

    for (size_t i = 0; i < n; i++) {
        if (!compare(array + i * size, target)) {
            printf("array[%d] = %d", i, target);
            flag = true;
        }
    }
    
}
