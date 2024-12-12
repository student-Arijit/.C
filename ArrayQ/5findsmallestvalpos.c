#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void readarray(int*, int);
int findsmallest(int*, int);
int main(void){
    int size;
    printf("Enter the size of this array = ");
    scanf("%d", &size);
    int array[size];
    readarray(array, size);
    int pos = findsmallest(array, size);
    printf("%d",pos);
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
