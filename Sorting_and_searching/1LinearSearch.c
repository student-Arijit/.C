#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

void LinearSearch(void *, size_t, size_t, void *, int (*compare)(const void *, const void *));
void delay(void);
int compInt(const void  *, const  void *);
int compStr(const void  *, const  void *);

int main(void) {
    int Arr[] = {5, 3, 9, 3, 6, 7};
    size_t size = sizeof(Arr) / sizeof(Arr[0]);
    
    int Target = 3;
    
    printf("Searching for %d in integer array", Target);
    delay();
    
    LinearSearch(Arr, size, sizeof(int), &Target, compInt);
    printf("\n");

    return 0;
}

void LinearSearch(void *Arr, size_t n, size_t size, void *target, int (*comapare)(const void*, const void*)) {
    char *array = (char *)Arr;
    bool flag = false;

    for (size_t i = 0; i < n; i++) {

        if (!comapare(array + i * size, target)) {
            printf("\nArray [%zu] = ", i);
            if (size == sizeof(int)) {
                printf("%d", *(int *)(array + i * size));  // Print int if type is int
            } else if (size == sizeof(float)) {
                printf("%.2f", *(float *)(array + i * size));  // Print float if type is float
            } else if (size == sizeof(char)) {
                printf("'%c'", *(char *)(array + i * size));  // Print char if type is char
            }
            flag = true;
        }
    }

    if(!flag) {
        printf("\nTarget value not found!!");
    }
}

void delay(void) {
    for (int i = 0; i < 3; i++) { 
        fflush(stdout);         
        printf(".");
        usleep(300000);
    }
}

int compInt(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compStr(const void  *a, const  void *b) {
    return (strcmp(*(char **)a, *(char **)b));
}