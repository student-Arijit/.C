#include <stdio.h>
#include <stdlib.h>

int binarySearch(int*,int,int,int);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result == -1) {
        printf("Element %d is not present in the array\n", target);
    } else {
        printf("Element %d is present at index %d\n", target, result);
    }


    return 0;
}

int binarySearch(int* arr, int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        
        if (arr[mid] > target)
            right = mid - 1;
        else 
            left = mid + 1;
    }
}