#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define swap(a, b){\
int temp = *(a);\
*(a) = *(b);\
*(b) = temp;\
}
void readarray(int*, int);
int findsmallest(int*, int);
int findlargest(int*, int);
void displayarray(int*, int);
int main(void){
    int size;
    printf("Enter the size of this array = ");
    scanf("%d", &size);
    int array[size];
    readarray(array, size);
    int pos1 = findsmallest(array, size);
    int pos2 = findlargest(array, size);
    swap(&array[pos1], &array[pos2]);
    displayarray(array, size);
    return 0;
}
void readarray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("Array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
int findsmallest(int array[], int size){
    int smallest = INT_MAX, position = -1;
    if(size <= 0)
        exit(0);
    for(int i = 0; i < size; i++){
        if(array[i] < smallest){
            smallest = array[i];
            position = i;
        }
    }
    return position;
}
int findlargest(int array[], int size){
    int largest = INT_MIN, position = -1;
    if(size <= 0)
        exit(0);
    for(int i = 0; i < size; i++){
        if(array[i] > largest){
            largest = array[i];
            position = i;
        }
    }
    return position;
}
void displayarray(int array[], int size){
  for(int i = 0; i < size; i++){
    printf("Array[%d] = %d\n", i, array[i]);
  }
}
